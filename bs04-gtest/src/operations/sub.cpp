#include "operations/sub.h"

#include <fmt/core.h>

int math::sub(int a, int b) {
    fmt::print("Subtracting {} from {}\n", b, a);
    return a - b;
}
