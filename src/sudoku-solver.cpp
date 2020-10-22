#include "sudoku-solver.h"

SudokuSolver::SudokuSolver(std::vector<std::vector<int>> board) {
    board = board;
}

std::vector<std::vector<int>> SudokuSolver::solve() {
    std::vector<std::vector<int>> solvedBoard;

    return solvedBoard;
}

Square* SudokuSolver::findEmptySquare() {
    for(int rowIndex = 0; rowIndex < board.size(); rowIndex++) {
        for(int columnIndex = 0; columnIndex < board[rowIndex].size(); columnIndex++) {
            if(board[rowIndex][columnIndex] != 0) continue;

            Square square(rowIndex, columnIndex);
            return &square;
        }
    }

    return NULL;
}

bool SudokuSolver::isSquareValid(Square square) {
    /*
        Check:
            - Row
            - Column
            - Grid
    */
}

bool SudokuSolver::isRowValid(int rowIndex, int number) {   
    for(int square : board[rowIndex]) {
        if(square == number) return false;
    }

    return true;
}

bool SudokuSolver::isColumnValid(int columnIndex, int number) {
    for(int rowIndex = 0; rowIndex < board.size(); rowIndex++) {
        int square = board[rowIndex][columnIndex];

        if(square == number) return false;
    }

    return true;
}

bool SudokuSolver::isGridValid(Square square, int number) {
    int gridY = (square.row + 1) / 3;
    int gridX = (square.column + 1) / 3; // TODO: Move it to external method

    for(int rowIndex = gridY; rowIndex < gridY + 4; rowIndex++) {
        for(int columnIndex = gridX; columnIndex < gridX + 4; columnIndex++) {
            int selectedNumber = board[rowIndex][columnIndex];

            if(number == selectedNumber) return false;
        }
    }

    return true;
}

//TODO: isSquareValid method