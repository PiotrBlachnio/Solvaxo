#ifndef UTILS_H
#define UTILS_H

    #include <regex>
    #include <string>

    class Utils {
        public:
            static bool isNumerical(std::string input);
        private:
            inline static const std::string IS_NUMERICAL_REGEX = "^[0-9]*$";
    };

#endif