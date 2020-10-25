#ifndef SQUARE_H
#define SQUARE_H
 
    #include "board.h"
    #include "row-validator.h"
    #include "column-validator.h"
    #include "grid-validator.h"

    struct Square {
        int number;
        int rowIndex;
        int columnIndex;

        Square(int number, int rowIndex, int columnIndex);
        bool isValid(Board board);
    };

#endif