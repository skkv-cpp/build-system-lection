#include "operations/add.hh"

#include <fmt/core.h>

int math::add(int a, int b) {
    fmt::print("Adding {} and {}\n", a, b);
    return a + b;
}
