#include "grid-validator.h"

bool GridValidator::isGridValid(Square square, Board board) {
    int gridRowIndex = convertToGridIndex(square.rowIndex);
    int gridColumnIndex  = convertToGridIndex(square.columnIndex);

    for(;gridRowIndex < gridRowIndex + 3; gridRowIndex++) {
        for(;gridColumnIndex < gridColumnIndex + 3; gridColumnIndex++) {
            /*
            ! TO external method!
                std::vector<int> row = board.getRowByIndex(gridRowIndex);
                int number = row[gridColumnIndex];
            
            */
            if(isDuplicate(square.number, number) && !isSamePosition(square, gridRowIndex, gridColumnIndex)) return false;
        }
    }

    return true;
}

int GridValidator::convertToGridIndex(int index) {
    return (index / 3) * 3;
}

bool GridValidator::isSamePosition(Square square, int rowIndex, int columnIndex) {
    bool isSameRow = square.rowIndex == rowIndex;
    bool isSameColumn = square.columnIndex == columnIndex;

    return isSameRow && isSameColumn;
}