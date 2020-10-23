#ifndef EXCEPTION_H
#define EXCEPTION_H

    #include <exception>
    #include <string>

    #define extends :

    class Exception extends std::exception {
        public:
            Exception(std::string message) {}

            virtual const char* what() const throw();
        private:
            std::string _message;
    };

#endif