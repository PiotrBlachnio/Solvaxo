#ifndef TEST_UTILS_H
#define TEST_UTILS_H

    #include <vector>
    #include <string>
    #include <iostream>

    std::vector<std::vector<int>> convertStringToBoard(std::string input);

    void printBoard(const std::vector<std::vector<int>> board);

#endif