#ifndef SQUARE_H
#define SQUARE_H

    #include "exceptions/invalid-square-input.exception.h"
    
    struct Square {
        int number;
        int rowIndex;
        int columnIndex;

        Square(int number, int rowIndex, int columnIndex);

        private:
            bool isInputValid(int number, int rowIndex, int columnIndex);
            bool isNumberValid(int number);
            bool isRowIndexValid(int rowIndex);
            bool isColumnIndexValid(int columnIndex);
    };

#endif