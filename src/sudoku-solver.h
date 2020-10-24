#ifndef SUDOKU_SOLVER_H
#define SUDOKU_SOLVER_H

    #include <vector>
    #include <string>
    #include "square.h"
    #include "board.h"

    class SudokuSolver {
        public:
            SudokuSolver(std::string boardString);

            std::string solve();
        private:
            Board _board;

            Square* findEmptySquare();

            bool isSquareValid(Square square);

            bool isRowValid(Square square);

            bool isColumnValid(Square square);

            bool isGridValid(Square square);
    };

#endif