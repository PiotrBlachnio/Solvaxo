#include "grid-validator.h"

bool GridValidator::isGridValid(Square square, Board board) {
    int gridY = square.rowIndex  / 3;
    int gridX = square.columnIndex / 3; // TODO: Move it to external method

    for(int rowIndex = gridY * 3; rowIndex < gridY * 3 + 3; rowIndex++) {
        for(int columnIndex = gridX * 3; columnIndex < gridX * 3 + 3; columnIndex++) {
            int selectedNumber = board.data[rowIndex][columnIndex];

            if(selectedNumber == square.number && (rowIndex != square.rowIndex || columnIndex != square.columnIndex)) return false;
        }
    }

    return true;
}