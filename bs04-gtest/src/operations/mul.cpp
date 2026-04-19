#include "operations/mul.h"

#include <fmt/core.h>

int math::mul(int a, int b) {
    fmt::print("Multiplying {} and {}\n", a, b);
    return a * b;
}
