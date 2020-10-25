#include "row-validator.h"

bool RowValidator::isRowValid(Square square, Board board) {
    std::vector<int> columns = board.data[square.rowIndex];

    for(int columnIndex = 0; columnIndex < columns.size(); columnIndex++) {
        int number = columns[columnIndex];

        if(number == square.number && columnIndex != square.columnIndex) return false;
    }

    return true;
}