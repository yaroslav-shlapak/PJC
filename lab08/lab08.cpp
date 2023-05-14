#include <fmt/core.h>
#include <fmt/format.h>
#include <vector>
#include <algorithm>

#include "another.hpp"

int main() {
    pjc::doSomething();
    pjc::doSomething1();
    pjc::doSomething2();

    auto point = new Point();
    point->doPointStuff();
    return 0;
}