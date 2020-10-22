#include "test-utils.h"
#include "sudoku-solver.test.h"

TEST_CASE("Sudoku solver") {
    SECTION("Solve_Board1") {
        std::string input = "305420810487901506029056374850793041613208957074065280241309065508670192096512408";
        std::vector<std::vector<int>> board = convertStringToBoard(input);
    }
}