#ifndef SQUARE_VALIDATOR_H
#define SQUARE_VALIDATOR_H

    #include "board.h"
    #include "square.h"
    #include "row-validator.h"
    #include "column-validator.h"
    #include "grid-validator.h"

    class SquareValidator {
        public:
            static bool isSquareValid(Square square, Board board);
    };

#endif