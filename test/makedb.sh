#!/bin/bash

find . -iname "*.c" > cscope.files
find . -iname "*.h" >> cscope.files

cscope -cb
ctags --fields=+i -n -R -L cscope.files

cqmakedb -s source.db -c cscope.out -t tags -p

