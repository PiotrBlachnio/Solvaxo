#ifndef GRID_VALIDATOR_H
#define GRID_VALIDATOR_H

    #include "square.h"
    #include "board.h"
    #include "validator.h"

    class GridValidator : Validator {
        public:
            static bool isGridValid(Square square, Board board);

        private:
            static int convertToGridIndex(int index);
            static bool isSamePosition(Square square, int rowIndex, int columnIndex);
    };

#endif