#ifndef BOARD_H
#define BOARD_H
 
    #include <vector>
    #include <string>
    #include <iostream>

    struct Board {
        Board(std::string boardString);

        std::vector<std::vector<int>> getBoard();

        void printBoard();

        private:
            const static int BOARD_SQUARES_NUMBER = 81;
            
            std::vector<std::vector<int>> board;

            std::vector<std::vector<int>> convertStringToBoard(std::string boardString);
    };

#endif