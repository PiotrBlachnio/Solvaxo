test: SolutionTests.o Solution.o
	g++ SolutionTests.o Solution.o -o test

SolutionTests.o: tests/SolutionTests.cpp
	g++ -c tests/SolutionTests.cpp

Solution.o: src/Solution.cpp
	g++ -c src/Solution.cpp

clean:
	rm *.o test.exe