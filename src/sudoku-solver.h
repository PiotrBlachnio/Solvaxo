#ifndef SUDOKU_SOLVER_H
#define SUDOKU_SOLVER_H

    #include <vector>
    #include <string>
    #include "board.h"
    #include "square.h"

    class SudokuSolver {
        public:
            SudokuSolver(std::string boardString);

            bool solve();

            std::string getSolutionString();
        private:
            Board _board;

            std::optional<Square> findEmptySquare();
    };

#endif