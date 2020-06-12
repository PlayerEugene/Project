output: helloworld.o parser.o
	g++ helloworld.o parser.o -o output

clean:
	rm *.o output

parser.o: parser.cpp parser.h
	g++ -c parser.cpp

helloworld.o: helloworld.cpp
	g++ -c helloworld.cpp