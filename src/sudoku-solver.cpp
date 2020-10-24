#include "sudoku-solver.h"

//TODO: Add more methods to square.cpp
//TODO: Refactor sudoku-solver.cpp
//TODO: Create isSquareValid method

SudokuSolver::SudokuSolver(std::string boardString) : _board(boardString) {}

std::string SudokuSolver::solve() {
    return "";
}

Square* SudokuSolver::findEmptySquare() {
    for(int rowIndex = 0; rowIndex < _board.data.size(); rowIndex++) {
        for(int columnIndex = 0; columnIndex < _board.data[rowIndex].size(); columnIndex++) {
            if(_board.data[rowIndex][columnIndex] != 0) continue;

            Square square(0, rowIndex, columnIndex);
            return &square;
        }
    }

    return NULL;
}

bool SudokuSolver::isSquareValid(Square square) {
    return true;
}

bool SudokuSolver::isRowValid(Square square) {
    std::vector<int> columns = _board.data[square.rowIndex];

    for(int currentColumnIndex = 0; currentColumnIndex < columns.size(); currentColumnIndex++) {
        int number = columns[currentColumnIndex];

        if(number == square.number && currentColumnIndex != square.columnIndex) return false;
    }

    return true;
}

bool SudokuSolver::isColumnValid(Square square) {
    for(int rowIndex = 0; rowIndex < _board.data.size(); rowIndex++) {
        int number = _board.data[rowIndex][square.columnIndex];

        if(number == square.number) return false;
    }

    return true;
}

bool SudokuSolver::isGridValid(Square square, int number) {
    int gridY = (square.row + 1) / 3;
    int gridX = (square.column + 1) / 3; // TODO: Move it to external method

    for(int rowIndex = gridY; rowIndex < gridY + 4; rowIndex++) {
        for(int columnIndex = gridX; columnIndex < gridX + 4; columnIndex++) {
            int selectedNumber = _board.data[rowIndex][columnIndex];

            if(number == selectedNumber) return false;
        }
    }

    return true;
}