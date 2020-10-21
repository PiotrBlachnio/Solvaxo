#include "test.h"

std::vector<std::vector<int>> convertStringToVector(std::string input) {
    std::vector<std::vector<int>> output;
    int currentCharIndex = 0;

    for(int i = 0; i < 9; i++) {
        std::vector<int> row;

        for(int j = 0; j < 9; j++) {
            row.push_back(input[currentCharIndex]);
            currentCharIndex++;
        }

        output.push_back(row);
    }

    return output;
}