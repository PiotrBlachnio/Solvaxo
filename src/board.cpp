#include "board.h"

Board::Board(std::string boardString) {
    int charactersNumber = boardString.size();

    if(charactersNumber != BOARD_CHARACTERS_NUMBER) throw InvalidBoardStringException();
    if(!Utils::isNumerical(boardString)) throw InvalidBoardStringException();

    data = convertStringToBoard(boardString);
}

void Board::printBoard() {
    for(int rowIndex = 0; rowIndex < data.size(); rowIndex++) {
        if(rowIndex != 0) std::cout << "\n - - - - - - - - -\n";

        for(int square : data[rowIndex]) {
            std::cout << square << " ";
        }
    }
}

void Board::insertSquare(Square square) {
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

std::vector<std::vector<int>> Board::convertStringToBoard(std::string input) {
    std::vector<std::vector<int>> board;
    int currentCharIndex = 0;

    for(int i = 0; i < 9; i++) {
        std::vector<int> row;

        for(int j = 0; j < 9; j++) {
            row.push_back((input[currentCharIndex] - ASCII_CODE_BASE));
            currentCharIndex++;
        }

        board.push_back(row);
    }

    return board;
}

std::optional<Square> Board::findEmptySquare() {
    for(int rowIndex = 0; rowIndex < data.size(); rowIndex++) {
        for(int columnIndex = 0; columnIndex < data[rowIndex].size(); columnIndex++) {
            if(data[rowIndex][columnIndex] != 0) continue;

            Square square(0, rowIndex, columnIndex);
            return square;
        }
    }

    return {};
}

std::vector<int> Board::getRowByIndex(int index) {
    return data[index];
}