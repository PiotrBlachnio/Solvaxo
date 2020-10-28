#include "invalid-square-input.exception.h"

const char* InvalidSquareInputException::what() const throw() {
    std::string message = "Invalid square data. Number parameter should be between 0 - 9, rowIndex and columnIndex should be a number between 0 - 8.";
    return message.c_str();
}