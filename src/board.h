#ifndef BOARD_H
#define BOARD_H
 
    #include "exceptions/invalid-board-string.exception.h"
    #include <vector>
    #include <string>
    #include <iostream>
    #include <regex>
    
    struct Board {
        std::vector<std::vector<int>> getBoard();
        void setBoard(std::string boardString);
        void printBoard();

        private:
            const static int BOARD_CHARACTERS_NUMBER = 81;
            const static int ASCII_CODE_BASE = 48;

            std::vector<std::vector<int>> _board;

            void convertStringToBoard(std::string boardString);
            bool isNumerical(std::string input);
    };

#endif