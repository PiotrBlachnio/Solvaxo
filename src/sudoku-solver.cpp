#include "sudoku-solver.h"

//TODO: Refactor sudoku-solver.cpp and split into smaller classes and descriptive methods

SudokuSolver::SudokuSolver(std::string boardString) : _board(boardString) {}

std::string SudokuSolver::getSolutionString() {
    return _board.convertBoardToString();
}

bool SudokuSolver::solve() {
    std::optional<Square> square = findEmptySquare();

    if(!square) return true;

    for(int i = 1; i <= 9; i++) {
        square->number = i;
        bool isSquareValid = SquareValidator::isSquareValid(*square, _board);

        if(isSquareValid) {
            _board.insertSquare(*square);

            if(solve()) return true;

            square->number = 0;
            _board.insertSquare(*square);
        }
    }

    return false;
}

std::optional<Square> SudokuSolver::findEmptySquare() {
    for(int rowIndex = 0; rowIndex < _board.data.size(); rowIndex++) {
        for(int columnIndex = 0; columnIndex < _board.data[rowIndex].size(); columnIndex++) {
            if(_board.data[rowIndex][columnIndex] != 0) continue;

            Square square(0, rowIndex, columnIndex);
            return square;
        }
    }

    return {};
}