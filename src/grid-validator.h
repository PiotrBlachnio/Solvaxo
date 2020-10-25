#ifndef GRID_VALIDATOR_H
#define GRID_VALIDATOR_H

    #include "square.h"
    #include "board.h"

    class GridValidator {
        public:
            static bool isGridValid(Square square, Board board);
    };

#endif