#include "operations/add.h"

#include <fmt/core.h>

int math::add(int a, int b) {
    fmt::print("Adding {} and {}\n", a, b);
    return a + b;
}
