bench: bench.o freemem.o getmem.o get_mem_stats.o print_heap.o check_heap.o
	gcc -Wall -std=c11 -g -o bench bench.o freemem.o getmem.o get_mem_stats.o print_heap.o check_heap.o

freemem.o: freemem.c mem.h mem_impl.h
	gcc -Wall -std=c11 -g -c freemem.c

getmem.o: getmem.c mem.h mem_impl.h
	gcc -Wall -std=c11 -g -c getmem.c

get_mem_stats.o: get_mem_stats.c mem.h mem_impl.h
	gcc -Wall -std=c11 -g -c get_mem_stats.c

print_heap.o: print_heap.c mem.h mem_impl.h
	gcc -Wall -std=c11 -g -c print_heap.c

check_heap.o: check_heap.c mem.h mem_impl.h
	gcc -Wall -std=c11 -g -c check_heap.c

bench.o: bench.c mem.h
	gcc -Wall -std=c11 -g -c bench.c

clean:
	rm -f *.o bench

dist:
	git log > git.log
	tar -cvf hw5.tar bench.c git.log Makefile freemem.c getmem.c get_mem_stats.c print_heap.c check_heap.c mem.h mem_impl.h

