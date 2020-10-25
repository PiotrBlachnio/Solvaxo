#ifndef COLUMN_VALIDATOR_H
#define COLUMN_VALIDATOR_H

    #include "square.h"
    #include "board.h"

    class ColumnValidator {
        public:
            bool isColumnValid(Square square, Board board);
    };

#endif