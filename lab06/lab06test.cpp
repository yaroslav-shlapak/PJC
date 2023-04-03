#include <iostream>
#include <vector>
#include <algorithm>
#include "fmt/ranges.h"

/*
Consider the following code:

auto vec = std::vector<int>{1, 2, 3, 1, 2, 3, 1, 2};
auto count = std::ranges::count(vec, 2);

In the main() function, present code that accomplishes the same thing
 as the presented std::ranges::count() call, but instead use std::ranges::count_if() with a lambda.

Essentially, show how can std::ranges::count_if() and std::ranges::count() achieve the same thing.
 */


int main() {
    std::vector<int> vec = {1, 2, 3, 1, 2, 3, 1, 2};
    int I = 2;
    std::cout << std::ranges::count(vec, I) << "\n";
    std::cout << std::ranges::count_if(vec, [&I](int num) { return num == I; }) << "\n";

    I = 3;
    std::cout << std::ranges::count(vec, I) << "\n";
    std::cout << std::ranges::count_if(vec, [&I](int num) { return num == I; }) << "\n";

    I = 1;
    std::cout << std::ranges::count(vec, I) << "\n";
    std::cout << std::ranges::count_if(vec, [&I](int num) { return num == I; }) << "\n";

    return 0;
}

