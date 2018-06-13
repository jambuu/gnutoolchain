src=..
major=2
minor=0

all: main.o libsimple_mse.so libsimple_sum.a simple_log.o 
	gcc -g -L. main.o -lsimple_sum -lsimple_mse simple_log.o -o simple_math 

libsimple_sum.a:  simple_sum.o
	ar rcs libsimple_sum.a simple_sum.o
	rm simple_sum.o

libsimple_mse.so: simple_mse.o
	rm -f libsimple_mse.so
	rm -f libsimple_mse.so.$(major)
	gcc -g -shared -Wl,-soname,libsimple_mse.so -o libsimple_mse.so.$(major).$(minor) simple_mse.o
	ln -s libsimple_mse.so.$(major).$(minor) libsimple_mse.so.$(major)
	ln -s libsimple_mse.so.$(major) libsimple_mse.so

simple_sum.o: $(src)/simple_sum.c
	gcc -g -c $(src)/simple_sum.c

simple_log.o: $(src)/simple_log.c
	gcc -g -c $(src)/simple_log.c

simple_mse.o: $(src)/simple_mse.c 
	gcc -g -c -fPIC $(src)/simple_mse.c

main.o: $(src)/main.c
	gcc -g -c $(src)/main.c

clean:
	rm *.o *.a *.so* simple_math 

.PHONY: simple_mse.o libsimple_mse.so
