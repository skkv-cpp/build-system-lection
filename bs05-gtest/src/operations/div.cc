#include "operations/div.hh"

#include <fmt/core.h>

int math::div(int a, int b) {
    fmt::print("Dividing {} by {}\n", a, b);
    return a / b;
}
