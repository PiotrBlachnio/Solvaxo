test: sudoku_solver_test.o test.o
	g++ sudoku_solver_test.o test.o -o test

sudoku_solver_test.o: tests/sudoku_solver_test.cpp
	g++ -c tests/sudoku_solver_test.cpp

test.o: tests/test.cpp
	g++ -c tests/test.cpp

clean:
	rm *.o test.exe