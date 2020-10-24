#include "sudoku-solver.h"

//TODO: Replace _board.getData() by _board.data
//TODO: Add more methods to square.cpp
//TODO: Refactor sudoku-solver.cpp
//TODO: Create isSquareValid method

SudokuSolver::SudokuSolver(std::string boardString) : _board(boardString) {}

std::string SudokuSolver::solve() {
    return "";
}

Square* SudokuSolver::findEmptySquare() {
    for(int rowIndex = 0; rowIndex < _board.getData().size(); rowIndex++) {
        for(int columnIndex = 0; columnIndex < _board.getData()[rowIndex].size(); columnIndex++) {
            if(_board.getData()[rowIndex][columnIndex] != 0) continue;

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
    for(int square : _board.getData()[rowIndex]) {
        if(square == number) return false;
    }

    return true;
}

bool SudokuSolver::isColumnValid(int columnIndex, int number) {
    for(int rowIndex = 0; rowIndex < _board.getData().size(); rowIndex++) {
        int square = _board.getData()[rowIndex][columnIndex];

        if(square == number) return false;
    }

    return true;
}

bool SudokuSolver::isGridValid(Square square, int number) {
    int gridY = (square.row + 1) / 3;
    int gridX = (square.column + 1) / 3; // TODO: Move it to external method

    for(int rowIndex = gridY; rowIndex < gridY + 4; rowIndex++) {
        for(int columnIndex = gridX; columnIndex < gridX + 4; columnIndex++) {
            int selectedNumber = _board.getData()[rowIndex][columnIndex];

            if(number == selectedNumber) return false;
        }
    }

    return true;
}