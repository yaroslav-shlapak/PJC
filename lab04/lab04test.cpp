#include <iostream>
#include <vector>
#include <algorithm>
#include "fmt/ranges.h"

/*
Create a function called withMinmaxSwapped(), which should accept a single argument of type std::vector<int>.
 The function should swap its greatest and smallest elements position-wise
 (i.e., find the greatest one, the smallest one and swap them,
 so that the index of the smallest one is not the index of the greatest one and vice versa).
 The function should return the modified vector.
 */

auto withMinmaxSwapped(std::vector<int> vec) -> std::vector<int> {
    int indexMax = 0, indexMin = 0;
    int max = vec[0], min = vec[0];

    for (int i = 0; i < vec.size(); i++) {
        int item = vec[i];
        if (item > max) {
            max = item;
            indexMax = i;
        }
        if (item < min) {
            min = item;
            indexMin = i;
        }
    }

    int temp = vec[indexMax];
    vec[indexMax] = vec[indexMin];
    vec[indexMin] = temp;

    return vec;
}

auto main() -> int {
    fmt::print("{}\n", withMinmaxSwapped({1, 2, 3})); // 3, 2, 1
    fmt::print("{}\n", withMinmaxSwapped({1, 2, 4, 3})); // 4, 2, 1, 3
    fmt::print("{}\n", withMinmaxSwapped({4, 3, 2, 1})); // 1, 3, 2, 4
    return 0;
}

