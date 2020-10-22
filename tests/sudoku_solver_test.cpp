#include "test.h"
#include "../src/sudoku_solver.h"

std::vector<std::vector<int>> convertStringToBoard(std::string input) {
    std::vector<std::vector<int>> output;
    int currentCharIndex = 0;

    for(int i = 0; i < 9; i++) {
        std::vector<int> row;

        for(int j = 0; j < 9; j++) {
            row.push_back((int) (input[currentCharIndex] - 48));
            currentCharIndex++;
        }

        output.push_back(row);
    }

    return output;
}

void printBoard(const std::vector<std::vector<int>> board) {
    for(int index = 0; index < board.size(); index++) {
        if(index != 0) std::cout << "\n - - - - - - - - - - - - - - - - - -\n";

        for(int square : board[index]) {
            std::cout << square << "\t";
        }
    }
}

TEST_CASE("Sudoku solver") {
    SECTION("Solve_Case1") {
        std::vector<std::vector<int>> board = convertStringToBoard("305420810487901506029056374850793041613208957074065280241309065508670192096512408");

        printBoard(board);
    }
}