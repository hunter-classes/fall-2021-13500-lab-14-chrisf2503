main: main.o
	g++ -o main main.o

tests: tests.o 
	g++ -o tests tests.o 

main.o: main.cpp myVec.h myVec.cxx

tests.o: tests.cpp myVec.h myVec.cxx doctest.h

clean:
	rm -f *o