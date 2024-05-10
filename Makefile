CliDict: main.o
	gcc main.o -o CliDict

main.o: main.c
	gcc main.c -c -o main.o

test.out: test.o cstr.o
	gcc test.o cstr.o -o test.out

test.o: test.out
	gcc test.c -c -o test.o

test: test.out
	${}

cstr.o: cstr.c cstr.h
	gcc cstr.c -c -o cstr.o

clean:
	rm *.o CliDict test.out

