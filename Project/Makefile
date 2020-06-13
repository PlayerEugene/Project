output: helloworld.o parser.o
	gcc helloworld.o parser.o -o output

clean:
	rm *.o output

parser.o: parser.c parser.h
	gcc -c parser.c

helloworld.o: helloworld.c
	gcc -c helloworld.c