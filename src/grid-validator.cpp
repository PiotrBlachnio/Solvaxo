#include "grid-validator.h"

bool GridValidator::isGridValid(Square square, Board board) {
    int gridY = (square.rowIndex + 1) / 3;
    int gridX = (square.columnIndex + 1) / 3; // TODO: Move it to external method

    for(int rowIndex = gridY; rowIndex < gridY + 4; rowIndex++) {
        for(int columnIndex = gridX; columnIndex < gridX + 4; columnIndex++) {
            int selectedNumber = board.data[rowIndex][columnIndex];

            if(selectedNumber == square.number && (rowIndex != square.rowIndex || columnIndex != square.columnIndex)) return false;
        }
    }

    return true;
}