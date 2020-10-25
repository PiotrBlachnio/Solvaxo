#include "column-validator.h"

bool ColumnValidator::isColumnValid(Square square, Board board) {
    for(int rowIndex = 0; rowIndex < board.data.size(); rowIndex++) {
        int number = board.data[rowIndex][square.columnIndex];

        if(number == square.number && rowIndex != square.rowIndex) return false;
    }

    return true;
}