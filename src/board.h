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
            std::vector<std::vector<int>> _board;

            std::vector<std::vector<int>> convertStringToBoard(std::string boardString);
    };

#endif