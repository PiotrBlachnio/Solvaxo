#ifndef INVALID_SQUARE_INPUT_EXCEPTION_H
#define INVALID_SQUARE_INPUT_EXCEPTION_H

    #include <exception>
    #include <string>

    class InvalidSquareInputException : std::exception {
        public:
            virtual const char* what() const throw();
    };

#endif