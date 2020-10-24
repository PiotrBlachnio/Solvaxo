#include "invalid-board-string.exception.h"

const char* InvalidBoardStringException::what() const throw() {
    std::string message = "Board string contains not-numerical characters or its number is not equal to 81.";
    return message.c_str();
}