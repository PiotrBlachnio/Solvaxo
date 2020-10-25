#include "square-validator.h"

bool SquareValidator::isSquareValid(Square square, Board board) {
    bool isRowValid = RowValidator::isRowValid(square, board);
    bool isColumnValid = ColumnValidator::isColumnValid(square, board);
    bool isGridValid = GridValidator::isGridValid(square, board);

    return isRowValid && isColumnValid && isGridValid;
}