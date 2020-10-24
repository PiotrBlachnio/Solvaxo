#ifndef EXCEPTION_H
#define EXCEPTION_H

    #include <exception>
    #include <string>

    #define extends :

    class InvalidBoardStringException extends std::exception {
        public:
            virtual const char* what() const throw();
    };

#endif