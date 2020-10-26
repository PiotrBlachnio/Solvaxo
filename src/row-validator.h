#ifndef ROW_VALIDATOR_H
#define ROW_VALIDATOR_H

    #include "board.h"
    #include "square.h"
    #include "validator.h"

    class RowValidator : Validator {
        public:
            static bool isRowValid(Square square, Board board);

        private:
            static bool rowContainsDuplicateNumber(std::vector<int> row, Square square);
            static bool isSameColumn(int firstIndex, int secondIndex);
    };

#endif