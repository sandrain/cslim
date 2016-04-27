#!/bin/bash

find . -iname "*.c" > cscope.files
find . -iname "*.h" >> cscope.files

cscope -cbk
ctags --fields=+i -n -R -L cscope.files

#~/sw/bin/cqmakedb -s source.db -c cscope.out -t tags -p

