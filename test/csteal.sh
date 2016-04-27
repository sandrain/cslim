#!/bin/bash

sdb="source.db"

## get function names
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
done

sqlite3 $testdb < $tmpfile
