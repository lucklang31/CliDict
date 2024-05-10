CliDict: main.o
	gcc main.o -o CliDict

main.o: main.c
	gcc main.c -c -o main.o

clean:
	rm *.o
	rm CliDict

