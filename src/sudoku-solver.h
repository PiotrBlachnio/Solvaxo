#ifndef SUDOKU_SOLVER_H
#define SUDOKU_SOLVER_H

    #include <string>
    #include "board.h"
    #include "square.h"
    #include "square-validator.h"

    class SudokuSolver {
        public:
            SudokuSolver(std::string boardString);

            bool solve();
            std::string getSolutionString();
        private:
            Board _board;
    };

#endif