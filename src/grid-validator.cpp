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
    for(int rowIndex = gridRowIndex; rowIndex < gridRowIndex + 3; rowIndex++) {
        for(int columnIndex = gridColumnIndex; columnIndex < gridColumnIndex + 3; columnIndex++) {
            int number = board.getNumberByIndexes(rowIndex, columnIndex);

            if(isDuplicate(square.number, number) && !isSamePosition(square, rowIndex, columnIndex)) return true;
        }
    }

    return false;
}

bool GridValidator::isSamePosition(Square square, int rowIndex, int columnIndex) {
    bool isSameRow = square.rowIndex == rowIndex;
    bool isSameColumn = square.columnIndex == columnIndex;

    return isSameRow && isSameColumn;
}