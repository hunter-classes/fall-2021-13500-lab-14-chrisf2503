main: main.o
	g++ -o main main.o -std=c++11

tests: tests.o 
	g++ -o tests tests.o -std=c++11

main.o: main.cpp myVec.h myVec.cxx
	g++ -c main.cpp -std=c++11
tests.o: tests.cpp doctest.h myVec.h myVec.cxx
	g++ -c tests.cpp -std=c++11
clean:
	rm -f *o