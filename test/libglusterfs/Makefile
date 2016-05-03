all: codegen

codegen: test.db
	../resolve.py
	../codegen.py

test.db: source.db
	../csteal.sh

source.db:
	../makedb.sh
	~/sw/bin/cqmakedb -s source.db -c cscope.out -t tags -p

clean:
	rm -f test.[ch] compat.[ch] *.db cscope.* tags

