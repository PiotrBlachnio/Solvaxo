#include "exception.h"

Exception::Exception(std::string message) {
    _message = message;
}

const char* Exception::what() const throw() {
    return _message.c_str();
}