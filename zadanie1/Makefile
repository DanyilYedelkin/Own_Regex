all: zadanie test

zadanie: zadanie.o main.o 
	gcc main.o zadanie.o -o zadanie
test: zadanie.o test.o
	gcc zadanie.o test.o -o test
	./test
zadanie.o: zadanie.c
	gcc -c zadanie.c -o zadanie.o
test.o: test.c
	gcc -c test.c -o test.o
main.o: main.c
	gcc -c main.c -o main.o

clean:
	rm -rf *.o
