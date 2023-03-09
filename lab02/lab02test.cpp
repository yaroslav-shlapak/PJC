#include <iostream>
#include <vector>
#include <algorithm>

/*
 * Create a function called compare() which will accept two arguments of a type std::vector<int>.
 * The function should return  (bool value) if the first vector's greatest numbers is bigger than the second vector's biggest number.
 */

auto findMax(std::vector<int> arg) -> int {
    int max = arg[0];
    for (auto item : arg) {
        if (item > max) {
            max = item;
        }
    }
    return max;
}

auto compare(std::vector<int> arg1, std::vector<int> arg2) -> bool {
    int arg1max = findMax(arg1);
    int arg2max = findMax(arg2);
    return arg1max > arg2max;
}

auto main() -> int {
    std::cout << compare({0}, {1}) << "\n"; // false
    std::cout << compare({1}, {0}) << "\n"; // true
    std::cout << compare({0, 3, 4, 5}, {0, 0, 0, 1}) << "\n"; // true
    std::cout << compare({0, 3, 4, 5}, {0, 0, 0, 10}) << "\n";  // false
    return 0;
}

