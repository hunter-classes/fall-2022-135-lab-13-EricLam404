main: main.o recursion.o
	g++ -o main main.o recursion.o

tests: tests.o recursion.o
	g++ -o tests tests.o recursion.o

main.o: main.cpp

tests.o: tests.cpp doctest.h 
	g++ -c -std=c++11 tests.cpp 

recursion.o: recursion.cpp

clean:
	rm -f *.o main tests 