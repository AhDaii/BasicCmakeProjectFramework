#include "calc.h"

Calc::Calc(int a, int b)
    : a(a), b(b) {}

int Calc::plus() {
    return a + b;
}