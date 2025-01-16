#include "functions.hpp"

std::string toString(int value) {
    std::stringstream ss;
    ss << value;
    return ss.str();
}
