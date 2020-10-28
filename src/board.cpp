#include "board.h"

Board::Board(std::string boardString) {
    int charactersNumber = boardString.size();

    if(!hasValidCharactersNumber(charactersNumber)) throw InvalidBoardStringException();
    if(!Utils::isNumerical(boardString)) throw InvalidBoardStringException();

    data = convertStringToBoard(boardString);
}

void Board::insertSquare(Square square) {
    data[square.rowIndex][square.columnIndex] = square.number;
}

std::vector<int> Board::getRowByIndex(int index) {
    return data[index];
}

int Board::getNumberByIndexes(int rowIndex, int columnIndex) {
    std::vector<int> row = getRowByIndex(rowIndex);
    int number = row[columnIndex];
    
    return number;
}

std::string Board::convertBoardToString() {
    std::string output = "";
    
    appendBoardToString(output);

    return output;
}

std::vector<std::vector<int>> Board::convertStringToBoard(std::string inputString) {
    std::vector<std::vector<int>> board;
    
    appendStringToBoard(board, inputString);

    return board;
}

std::optional<Square> Board::findEmptySquare() {
    for(int rowIndex = 0; rowIndex < ROW_LENGTH; rowIndex++) {
        for(int columnIndex = 0; columnIndex < ROW_LENGTH; columnIndex++) {
            int number = getNumberByIndexes(rowIndex, columnIndex);
            if(number != 0) continue;

            Square square(0, rowIndex, columnIndex);
            return square;
        }
    }

    return {};
}

bool Board::hasValidCharactersNumber(int charactersNumber) {
    return charactersNumber == BOARD_CHARACTERS_NUMBER;
}

void Board::appendBoardToString(std::string& output) {
    for(int rowIndex = 0; rowIndex < ROW_LENGTH; rowIndex++) {
        for(int columnIndex = 0; columnIndex < ROW_LENGTH; columnIndex++) {
            int number = getNumberByIndexes(rowIndex, columnIndex);
            output += std::to_string(number);
        }
    }
}

void Board::appendStringToBoard(std::vector<std::vector<int>>& board, std::string inputString) {
    int currentCharIndex = 0;

    for(int i = 0; i < 9; i++) {
        std::vector<int> row;

        for(int j = 0; j < 9; j++) {
            char character = inputString[currentCharIndex];
            row.push_back(convertCharToNumber(character));

            currentCharIndex++;
        }

        board.push_back(row);
    }
}

int Board::convertCharToNumber(char input) {
    return input - ASCII_CODE_BASE;
}