#include "column-validator.h"

bool ColumnValidator::isColumnValid(Square square, Board board) {
    return !columnContainsDuplicateNumber(square, board);
}

bool ColumnValidator::columnContainsDuplicateNumber(Square square, Board board) {
    for(int index = 0; index < Board::ROW_LENGTH; index++) {
        int number = board.getNumberByIndexes(index, square.columnIndex);

        if(isDuplicate(square.number, number) && !isSameRow(square.rowIndex, index)) return true;
    }

    return false;
}

bool ColumnValidator::isSameRow(int firstIndex, int secondIndex) {
    return firstIndex == secondIndex;
}