test: 
	g++ -std=c++17 tests/*.cpp src/*.cpp src/exceptions/*.cpp -o test.exe

clean:
	rm *.o test.exe