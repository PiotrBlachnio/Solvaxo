#ifndef SudokuSolver_H
#define SudokuSolver_H

    #include <vector>

    class SudokuSolver {
        const std::vector<std::vector<int>> board;
        
        SudokuSolver(std::vector<std::vector<int>> board);

        public:
            std::vector<std::vector<int>> solve();
    };

#endif