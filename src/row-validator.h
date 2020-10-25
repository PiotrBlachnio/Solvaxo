#ifndef ROW_VALIDATOR_H
#define ROW_VALIDATOR_H

    #include "square.h"
    #include "board.h"

    class RowValidator {
        public:
            static bool isRowValid(Square square, Board board);
    };

#endif