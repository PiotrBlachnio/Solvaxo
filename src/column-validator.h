#ifndef COLUMN_VALIDATOR_H
#define COLUMN_VALIDATOR_H

    #include "square.h"
    #include "board.h"
    #include "validator.h"

    class ColumnValidator : Validator {
        public:
            static bool isColumnValid(Square square, Board board);

        private:
            static bool isSameRow(int firstIndex, int secondIndex);
    };

#endif