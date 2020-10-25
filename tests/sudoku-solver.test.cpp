#define private public
#include "../src/sudoku-solver.h"
#undef private

#include "test.h"

TEST_CASE("Sudoku solver") {
    SECTION("Solve") {
        SECTION("Should assign correct numbers to the _board field") {
            std::string input = "305420810487901506029056374850793041613208957074065280241309065508670192096512408";

            SudokuSolver sudokuSolver(input);

            sudokuSolver.solve();

            std::string expected = "365427819487931526129856374852793641613248957974165283241389765538674192796512438";

            std::string actual = sudokuSolver.getSolutionString();
            // std::string actual = "365427819487931526129856374852793641613248957974165283241389765538674192796512438";

            REQUIRE(expected == actual);
        }
    }
}
// TEST_CASE("Sudoku solver") {
//     SECTION("Board_One") {
//         std::string input = ;
//         std::string solvedInput = "365427819487931526129856374852793641613248957974165283241389765538674192796512438";

//         std::vector<std::vector<int>> board = convertStringToBoard(input);

//         SudokuSolver solver(board);

//         std::vector<std::vector<int>> expected = convertStringToBoard(solvedInput); 
//         std::vector<std::vector<int>> actual = solver.solve();

//         REQUIRE(expected == actual);
//     }
// }

// TEST_CASE("SudokuSolver_findEmptySquare") {
//     SECTION("EmptySquareDoesNotExist_ShouldReturnNULL") {
//         std::string boardString = "365427819487931526129856374852793641613248957974165283241389765538674192796512438";
        // std::vector<std::vector<int>> board;
        // SudokuSolver sudokuSolver(board);
//     }
// }