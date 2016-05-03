#!/usr/bin/env python

import sqlite3

run = 0
cscopedb = sqlite3.connect('source.db')
testdb = sqlite3.connect('test.db')
compat_list = []

def add_syms(sid):
    t = testdb.cursor()
    t.execute('insert or ignore into syms (sid) values (?)', (sid,))
    testdb.commit()

def add_compat(sid):
    c = cscopedb.cursor()
    c2 = cscopedb.cursor()
    t = testdb.cursor()

    rows = c.execute('select symName from symtbl where symID in ' \
                     '(select calledID from calltbl where callerID=?)', (sid,))

    for r in rows:
        q = 'select s.symID, s.symName, f.filePath, l.linenum ' \
            'from filestbl f natural join linestbl l natural join symtbl s ' \
            'where symtype="$" and symName=?'
        tmp = c2.execute(q, r)
        for vals in tmp:
            exist = t.execute('select id from syms where sid=?', (vals[0],))
            if exist.fetchone() is None:
                compat_list.append(vals)
                add_syms(vals[0])

def unresolved():
    t = testdb.cursor()
    row = t.execute('select count(*) from compat where resolved=0').fetchone()
    return row[0]

def resolve_compat(cid):
    t = testdb.cursor()
    t.execute('update compat set resolved=1 where cid=?', (cid,))
    testdb.commit()

def populate_compat():
    global run

    print '(%d) examining %d functions ..' % (run, len(compat_list))
    run += 1
    t = testdb.cursor()
    t.executemany('insert or ignore into compat (sid, func, file, line) ' \
                  'values (?,?,?,?)', compat_list)
    testdb.commit()
    del compat_list[:]

def resolve_run():
    t = testdb.cursor()

    for row in t.execute('select cid, sid from compat where resolved=0'):
        add_compat(row[1])
        resolve_compat(row[0])

def main():
    global run

    t = testdb.cursor()

    for row in t.execute('select sid from lib'):
        add_compat(row[0])

    populate_compat()

    while unresolved() > 0:
        resolve_run()
        populate_compat()

    testdb.close()
    cscopedb.close()

if __name__ == '__main__':
    main()
