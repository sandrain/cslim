#!/bin/bash

sdb="source.db"
basepath="/home/hyogi/workspace/glusterfs/"
header="$basepath/libglusterfs/src/dict.h"

## destination
name="test"
nameupper="`echo $name | awk '{print toupper($0)}'`"
destdir="libtest"
hfile="$name.h"
cfile="$name.c"

#if [ -d "$destdir" ]; then
#        rm -rf $destdir
#fi
#
#mkdir -p $destdir/src

cat << EOF > $hfile
/*
 * ${name}.h
 *
 * Automatically generated by csteal
 */
#ifndef _${nameupper}_H
#define _${nameupper}_H
EOF

cat << EOF > $cfile
/*
 * ${name}.c
 *
 * Automatically generated by csteal
 */

#include "compat.h"
#include "dict.h"

EOF

## get function names
#funcs=(`grep -o '[a-z0-9_]\{2,\}[[:space:]]*([^()]*);$' $header | cut -d'(' -f1`)
funcs=(`cat functions.txt | paste -sd' '`)

## create work database
testdb="test.db"
sqlite3 $testdb < cdb.schema.sql

## populate db with the lib functions
tmpfile="/tmp/q.sql"
> $tmpfile

## extract original code
for f in "${funcs[@]}"; do
	q="select symID from symtbl where symName='$f' and symType='$' order by symID limit 1"
	sid="`sqlite3 $sdb \"$q\"`"
	if [ -z "$sid" ]; then
		continue
	fi

        q="select f.filePath, l.linenum "
        q+="from filestbl f natural join linestbl l "
        q+="where lineID=(select lineID from symtbl where symID=$sid)"
        location="`sqlite3 $sdb \"$q\"`"

        # this function is not actually defined
        if [ -z "$location" ]; then
                continue
        fi

        file="`echo $location | cut -d'|' -f1`"
        line="`echo $location | cut -d'|' -f2`"

	q="insert into lib (sid, func, file, line) "
	q+="values ($sid, '$f', '$file', $line);"

	echo "$q" >> $tmpfile
	echo "insert or ignore into syms (sid) values ($sid);" >> $tmpfile

#        echo >> $cfile
#        echo "/* $f at $file:$line */" >> $cfile
#        cat $basepath/$file | tail -n+$((line-1)) | sed -n '1,/^{/p' >> $cfile
#	echo -e "}" >> $cfile
done

sqlite3 $testdb < $tmpfile