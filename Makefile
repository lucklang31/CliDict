CliDict: main.o
	gcc main.o -o CliDict

main.o: main.c
	gcc main.c -c -o main.o

test.out: test.o
	gcc test.o -o test.out

test.o: test.out
	gcc test.c -c -o test.o

test: test.out
	${}

clean:
	rm *.o CliDict test.out

