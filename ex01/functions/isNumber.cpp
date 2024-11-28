#include "functions.hpp"

int isNumber(const char* str) {
    if (!str || *str == '\0') {
        return (0);
    }
    while (*str) {
        if (!std::isdigit(*str)) {
            return (0);
        }
        ++str;
    }
    return (1);
}