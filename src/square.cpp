#include "square.h"

Square::Square(int number, int rowIndex, int columnIndex) {
    this->number = number;
    this->rowIndex = rowIndex;
    this->columnIndex = columnIndex;
}

bool Square::isValid(Board board) {
    bool isRowValid = RowValidator::isRowValid(*this, board);
    bool isColumnValid = ColumnValidator::isColumnValid(*this, board);
    bool isGridValid = GridValidator::isGridValid(*this, board);

    return isRowValid && isColumnValid && isGridValid;
}