#include "board.h"
#include "exceptions/invalid-board-string.exception.h"

#include <regex>

Board::Board(std::string boardString) {
    int charactersNumber = boardString.size();

    if(charactersNumber != 81) throw InvalidBoardStringException();
    if(!isNumerical(boardString)) throw InvalidBoardStringException();

    _board = convertStringToBoard(boardString);
}

void Board::printBoard() {
    for(int index = 0; index < _board.size(); index++) {
        if(index != 0) std::cout << "\n - - - - - - - - -\n";

        for(int square : _board[index]) {
            std::cout << square << " ";
        }
    }
}

std::vector<std::vector<int>> Board::convertStringToBoard(std::string input) {
    std::vector<std::vector<int>> output;
    int currentCharIndex = 0;

    for(int i = 0; i < 9; i++) {
        std::vector<int> row;

        for(int j = 0; j < 9; j++) {
            row.push_back((int) (input[currentCharIndex] - 48));
            currentCharIndex++;
        }

        output.push_back(row);
    }

    return output;
}

bool Board::isNumerical(std::string input) {
    std::smatch match;
    std::regex reg("^[0-9]*$");

    return std::regex_search(input, match, reg);
}