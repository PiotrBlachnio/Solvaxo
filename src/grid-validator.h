#ifndef GRID_VALIDATOR_H
#define GRID_VALIDATOR_H

    #include "square.h"
    #include "board.h"
    #include "validator.h"

    class GridValidator : Validator {
        public:
            static bool isGridValid(Square square, Board board);

        private:
            static bool gridContainsDuplicateNumber(int gridRowIndex, int gridColumnIndex, Square square, Board board);
            static int convertToGridIndex(int index);
            static bool isSamePosition(Square square, int rowIndex, int columnIndex);
    };

#endif