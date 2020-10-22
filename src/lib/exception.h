#ifndef EXCEPTION_H
#define EXCEPTION_H

    #include <exception>
    #include <string>

    #define extends :

    class Exception extends std::exception {
        public:
            Exception(char* message) {}

            virtual const char* what() const throw();
        private:
            char* _message;
    };

#endif