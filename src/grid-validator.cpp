#include "grid-validator.h"

bool GridValidator::isGridValid(Square square, Board board) {
    int gridRowIndex = convertToGridIndex(square.rowIndex);
    int gridColumnIndex  = convertToGridIndex(square.columnIndex);

    return !gridContainsDuplicateNumber(gridRowIndex, gridColumnIndex, square, board);
}

int GridValidator::convertToGridIndex(int index) {
    return (index / 3) * 3;
}

bool GridValidator::gridContainsDuplicateNumber(int gridRowIndex, int gridColumnIndex, Square square, Board board) {
    for(;gridRowIndex < gridRowIndex + 3; gridRowIndex++) {
        for(;gridColumnIndex < gridColumnIndex + 3; gridColumnIndex++) {
            int number = board.getNumberByIndexes(gridRowIndex, gridColumnIndex);

            if(isDuplicate(square.number, number) && !isSamePosition(square, gridRowIndex, gridColumnIndex)) return true;
        }
    }

    return false;
}

bool GridValidator::isSamePosition(Square square, int rowIndex, int columnIndex) {
    bool isSameRow = square.rowIndex == rowIndex;
    bool isSameColumn = square.columnIndex == columnIndex;

    return isSameRow && isSameColumn;
}