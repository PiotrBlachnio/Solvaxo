#include "utils.h"

bool Utils::isNumerical(std::string input) {
    std::smatch match;
    std::regex reg(IS_NUMERICAL_REGEX);

    return std::regex_search(input, match, reg);
}