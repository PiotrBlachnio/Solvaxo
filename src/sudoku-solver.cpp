#include "sudoku-solver.h"

SudokuSolver::SudokuSolver(std::string boardString) : _board(boardString) {}

std::string SudokuSolver::getSolutionString() {
    return _board.convertBoardToString();
}

bool SudokuSolver::solve() {
    std::optional<Square> square = _board.findEmptySquare();

    if(!square) return true;

    for(int number = 1; number <= 9; number++) {
        square->number = number;
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