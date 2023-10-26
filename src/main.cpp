#include "calc.h"
#include <iostream>

int main(int argc, char** argv) {
    int x = 1, y = 2;
    Calc c(x, y);
    std::cout << c.plus();
    return 0;
}