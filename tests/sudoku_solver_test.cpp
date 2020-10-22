#include "test.h"
#include "sudoku_solver_test.h"

TEST_CASE("Sudoku solver") {
    SECTION("Solve_Case1") {
        std::vector<std::vector<int>> board = convertStringToBoard("305420810487901506029056374850793041613208957074065280241309065508670192096512408");

        printBoard(board);
    }
}