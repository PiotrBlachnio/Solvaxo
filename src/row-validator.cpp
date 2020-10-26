#include "row-validator.h"

bool RowValidator::isRowValid(Square square, Board board) {
    std::vector<int> row = board.getRowByIndex(square.rowIndex);

    return !rowContainsDuplicateNumber(row, square);
}

bool RowValidator::rowContainsDuplicateNumber(std::vector<int> row, Square square) {
    for(int index = 0; index < Board::ROW_LENGTH; index++) {
        int number = row[index];

        if(isDuplicate(square.number, number) && !isSameColumn(index, square.columnIndex)) return true;
    }

    return false;
}

bool RowValidator::isDuplicate(int firstNumber, int secondNumber) {
    return firstNumber == secondNumber;
}

bool RowValidator::isSameColumn(int firstIndex, int secondIndex) {
    return firstIndex == secondIndex;
}