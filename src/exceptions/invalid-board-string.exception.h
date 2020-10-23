#ifndef EXCEPTION_H
#define EXCEPTION_H

    #include <exception>
    #include <string>

    #define extends :

    class InvalidBoardStringException extends std::exception {
        public:
            InvalidBoardStringException(int characters) {}

            virtual const char* what() const throw();
        private:
            int _characters;
    };

#endif