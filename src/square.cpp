#include "square.h"

Square::Square(int number, int rowIndex, int columnIndex) {
    if(!isInputValid(number, rowIndex, columnIndex)) throw InvalidSquareInputException();

    this->number = number;
    this->rowIndex = rowIndex;
    this->columnIndex = columnIndex;
}
         
bool Square::isInputValid(int number, int rowIndex, int columnIndex) {
    return isNumberValid(number) && isRowIndexValid(rowIndex) && isColumnIndexValid(columnIndex);
}

bool Square::isNumberValid(int number) {
    bool isGreaterOrEqualZero = number >= 0;
    bool isLowerOrEqualNine = number <= 9;

    return isGreaterOrEqualZero && isLowerOrEqualNine;
}

bool Square::isRowIndexValid(int rowIndex) {
    bool isGreaterOrEqualZero = rowIndex >= 0;
    bool isLowerOrEqualEight = rowIndex <= 8;

    return isGreaterOrEqualZero && isLowerOrEqualEight;
}

bool Square::isColumnIndexValid(int columnIndex) {
    bool isGreaterOrEqualZero = columnIndex >= 0;
    bool isLowerOrEqualEight = columnIndex <= 8;

    return isGreaterOrEqualZero && isLowerOrEqualEight;
}