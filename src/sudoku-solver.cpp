#include "sudoku-solver.h"

//TODO: Refactor sudoku-solver.cpp

SudokuSolver::SudokuSolver(std::string boardString) : _board(boardString) {}

bool SudokuSolver::solve() {
    int num = 29;
    int* pointer = &num;

    *pointer = 30;

    Square* foundSquare = findEmptySquare();
    if(foundSquare == NULL) return;

    for(int number = 1; number <= 9; number++) {
        foundSquare->number = number;

        if(isSquareValid(*foundSquare)) {
            _board.addSquare(*foundSquare);

            if(solve()) return true;

            foundSquare->number = 0;
            _board.addSquare(*foundSquare);
        }
    }

    return false;
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
    return isRowValid(square) && isColumnValid(square) && isGridValid(square);
}

bool SudokuSolver::isRowValid(Square square) {
    std::vector<int> columns = _board.data[square.rowIndex];

    for(int columnIndex = 0; columnIndex < columns.size(); columnIndex++) {
        int number = columns[columnIndex];

        if(number == square.number && columnIndex != square.columnIndex) return false;
    }

    return true;
}

bool SudokuSolver::isColumnValid(Square square) {
    for(int rowIndex = 0; rowIndex < _board.data.size(); rowIndex++) {
        int number = _board.data[rowIndex][square.columnIndex];

        if(number == square.number && rowIndex != square.rowIndex) return false;
    }

    return true;
}

bool SudokuSolver::isGridValid(Square square) {
    int gridY = (square.rowIndex + 1) / 3;
    int gridX = (square.columnIndex + 1) / 3; // TODO: Move it to external method

    for(int rowIndex = gridY; rowIndex < gridY + 4; rowIndex++) {
        for(int columnIndex = gridX; columnIndex < gridX + 4; columnIndex++) {
            int selectedNumber = _board.data[rowIndex][columnIndex];

            if(selectedNumber == square.number && (rowIndex != square.rowIndex || columnIndex != square.columnIndex)) return false;
        }
    }

    return true;
}