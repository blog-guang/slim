#include <iostream>

#include "src/mesh/Element.h"

void panic(std::string s) {
    std::cout << "slim panic ... " << s << std::endl;
    std::cout.flush();
    std::abort();
}

int main(int, char**) {
    std::cout << "Hello, from slim!\n";

    return 0;
}
