#ifndef ROW_VALIDATOR_H
#define ROW_VALIDATOR_H

    #include "square.h"
    #include "board.h"

    class RowValidator {
        public:
            bool isRowValid(Square square, Board board);
    };

#endif