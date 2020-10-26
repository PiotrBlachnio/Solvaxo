#ifndef ROW_VALIDATOR_H
#define ROW_VALIDATOR_H

    #include "board.h"
    #include "square.h"

    class RowValidator {
        public:
            static bool isRowValid(Square square, Board board);

        private:
            static bool rowContainsDuplicateNumber(std::vector<int> row, Square square);
            static bool isDuplicate(int firstNumber, int secondNumber);
            static bool isSameColumn(int firstIndex, int secondIndex);
    };

#endif