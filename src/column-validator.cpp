#include "column-validator.h"

bool ColumnValidator::isColumnValid(Square square, Board board) {
    for(int index = 0; index < Board::ROW_LENGTH; index++) {
        std::vector<int> row = board.getRowByIndex(index);
        int number = row[square.columnIndex];

        if(number == square.number && index != square.rowIndex) return false;
    }

    return true;
}

bool Columnalidator::isDuplicate(int firstNumber, int secondNumber) {
    return firstNumber == secondNumber;
}

bool ColumnValidator::isSameRow(int firstIndex, int secondIndex) {
    return firstIndex == secondIndex;
}