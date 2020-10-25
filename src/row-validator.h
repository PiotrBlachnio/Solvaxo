#ifndef ROW_VALIDATOR_H
#define ROW_VALIDATOR_H

    #include "board.h"
    #include "square.h"

    class RowValidator {
        public:
            static bool isRowValid(Square square, Board board);
    };

#endif