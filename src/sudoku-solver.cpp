#include "sudoku-solver.h"

SudokuSolver::SudokuSolver(std::vector<std::vector<int>> board) {
    board = board;
}

std::vector<std::vector<int>> SudokuSolver::solve() {
    std::vector<std::vector<int>> solvedBoard;

    return solvedBoard;
}

Square SudokuSolver::findEmptySquare() {
    for(int rowIndex = 0; rowIndex < board.size(); rowIndex++) {
        for(int columnIndex = 0; columnIndex < board[rowIndex].size(); columnIndex++) {
            if(board[rowIndex][columnIndex] != 0) continue;

            Square square(rowIndex, columnIndex);
            return square;
        }
    }
}

//TODO: Find empty square method
//TODO: isSquareValid method