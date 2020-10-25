#include "board.h"

Board::Board(std::string boardString) {
    int charactersNumber = boardString.size();

    if(charactersNumber != BOARD_CHARACTERS_NUMBER) throw InvalidBoardStringException();
    if(!isNumerical(boardString)) throw InvalidBoardStringException();

    convertStringToBoard(boardString);
}

void Board::printBoard() {
    for(int rowIndex = 0; rowIndex < data.size(); rowIndex++) {
        if(rowIndex != 0) std::cout << "\n - - - - - - - - -\n";

        for(int square : data[rowIndex]) {
            std::cout << square << " ";
        }
    }
}

void Board::addSquare(Square square) {
    data[square.rowIndex][square.columnIndex] = square.number;
}

std::string Board::convertBoardToString() {
    std::string output = "";
    
    for(int rowIndex = 0; rowIndex < data.size(); rowIndex++) {
        for(int columnIndex = 0; columnIndex < data[rowIndex].size(); columnIndex++) {
            output += std::to_string(data[rowIndex][columnIndex]);
        }
    }

    return output;
}

void Board::convertStringToBoard(std::string input) {
    int currentCharIndex = 0;

    for(int i = 0; i < 9; i++) {
        std::vector<int> row;

        for(int j = 0; j < 9; j++) {
            row.push_back((input[currentCharIndex] - ASCII_CODE_BASE));
            currentCharIndex++;
        }

        data.push_back(row);
    }
}

bool Board::isNumerical(std::string input) {
    std::smatch match;
    std::regex reg("^[0-9]*$");

    return std::regex_search(input, match, reg);
}