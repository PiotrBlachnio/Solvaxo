test: 
	g++ tests/sudoku-solver.test.cpp src/*.cpp src/lib/*.cpp -o test.exe

clean:
	rm *.o test.exe