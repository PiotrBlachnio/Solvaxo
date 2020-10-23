#include "invalid-board-string.exception.h"

InvalidBoardStringException::InvalidBoardStringException(int characters) {
    _characters = characters;
}

const char* InvalidBoardStringException::what() const throw() {
    std::string message = "Invalid number of characters in the board string. Expected: 81. Received: " + std::to_string(_characters) + ".";
    return message.c_str();
}