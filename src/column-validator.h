#ifndef COLUMN_VALIDATOR_H
#define COLUMN_VALIDATOR_H

    #include "square.h"
    #include "board.h"

    class ColumnValidator {
        public:
            static bool isColumnValid(Square square, Board board);

        private:
            static bool isDuplicate(int firstNumber, int secondNumber);
            static bool isSameRow(int firstIndex, int secondIndex);
    };

#endif