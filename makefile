test: sudoku-solver.test.o test-utils.o
	g++ sudoku-solver.test.o test-utils.o -o test

sudoku-solver.test.o: tests/sudoku-solver.test.cpp
	g++ -c tests/sudoku-solver.test.cpp

test-utils.o: tests/test-utils.cpp
	g++ -c tests/test-utils.cpp

clean:
	rm *.o test.exe