#!/usr/bin/env python

import sqlite3
import linecache

testdb = sqlite3.connect('test.db')

def print_function(path, linenum, hf, cf):
        line = linecache.getline(path, linenum)
        hf.write('%s;\n' % line.strip())

        while True:
            line = linecache.getline(path, linenum)
            cf.write(line)
            if line[0] == '}':
                break
            linenum += 1

        cf.write('\n')

def gen_lib():
    t = testdb.cursor()

    hf = open('test.h', 'w')
    cf = open('test.c', 'w')
    hf.write('#include <stdio.h>\n\n')
    hf.write('#include "compat.h"\n\n')
    cf.write('#include "test.h"\n\n')

    sql = 'select func, file, line from lib order by lid asc'
    for r in t.execute(sql):
        print_function(r[1], r[2], hf, cf)

    cf.close()
    hf.close()

def gen_compat():
    t = testdb.cursor()

    hf = open('compat.h', 'w')
    cf = open('compat.c', 'w')
    hf.write('#include <stdio.h>\n\n')
    cf.write('#include "compat.h"\n\n')

    sql = 'select func, file, line from compat order by cid asc'
    for r in t.execute(sql):
        print_function(r[1], r[2], hf, cf)

def main():
    gen_lib()
    gen_compat()

if __name__ == '__main__':
    main()
