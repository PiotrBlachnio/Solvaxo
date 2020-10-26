#include "column-validator.h"

bool ColumnValidator::isColumnValid(Square square, Board board) {
    for(int index = 0; index < Board::ROW_LENGTH; index++) {
        std::vector<int> row = board.getRowByIndex(index);
        int number = row[square.columnIndex];

        if(isDuplicate(square.number, number) && !isSameRow(square.rowIndex, index)) return false;
    }

    return true;
}

bool ColumnValidator::isSameRow(int firstIndex, int secondIndex) {
    return firstIndex == secondIndex;
}