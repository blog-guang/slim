#include "util.h"

void panic(const std::string s) {
    std::cout << "slim panic ... " << s << std::endl;
    std::cout.flush();
    std::abort();
}