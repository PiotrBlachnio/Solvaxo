#ifndef SUDOKU_SOLVER_H
#define SUDOKU_SOLVER_H

    #include <vector>

    class SudokuSolver {
        public:
            const std::vector<std::vector<int>> board;
            
            SudokuSolver(std::vector<std::vector<int>> board);

            std::vector<std::vector<int>> solve();
    };

#endif