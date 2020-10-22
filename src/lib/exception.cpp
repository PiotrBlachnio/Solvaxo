#include "exception.h"

Exception::Exception(char* message) {
    _message = message;
}

const char* Exception::what() const throw() {
    return _message;
}