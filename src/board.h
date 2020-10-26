#ifndef BOARD_H
#define BOARD_H
 
    #include "exceptions/invalid-board-string.exception.h"
    #include "square.h"
    #include "utils.h"
    #include <vector>
    #include <string>
    #include <iostream>

    struct Board {
        Board(std::string boardString);

        std::vector<std::vector<int>> data;

        void printBoard();
        void addSquare(Square square);
        std::vector<std::vector<int>> convertStringToBoard(std::string boardString);
        std::string convertBoardToString();

        private:
            const static int BOARD_CHARACTERS_NUMBER = 81;
            const static int ASCII_CODE_BASE = 48;
    };

#endif