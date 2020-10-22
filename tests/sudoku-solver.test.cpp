#include "test-utils.h"
#include "sudoku-solver.test.h"
#include "../src/sudoku-solver.h"

TEST_CASE("Sudoku solver") {
    SECTION("Board_One") {
        std::string input = "305420810487901506029056374850793041613208957074065280241309065508670192096512408";
        std::string solvedInput = "365427819487931526129856374852793641613248957974165283241389765538674192796512438";

        std::vector<std::vector<int>> board = convertStringToBoard(input);

        SudokuSolver solver(board);

        std::vector<std::vector<int>> expected = convertStringToBoard(solvedInput); 
        std::vector<std::vector<int>> actual = solver.solve();

        REQUIRE(expected == actual);
    }
}