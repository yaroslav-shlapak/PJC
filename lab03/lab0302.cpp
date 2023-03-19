#include <algorithm>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <fmt/core.h>
#include <fmt/ranges.h>
#include <iostream>
#include <numeric>

/*
 * Create a function called sortBiggerHalf(), which will accept a vec of numbers as its argument.
 * The function should check which half of said vec contains elements with greater sum. Sort that half.
 *
 * 1 2 3 0 1 0
 * 3 2 1 4 5 6
 * 5 4 4 5
 */
auto sortBiggerHalf(std::vector<int>& vec) {
    int h1 = 0, h2 = 0;
    int half = vec.size() / 2;
    for (int i = 0; i < vec.size(); i++) {
        if (i < half) {
            h1 += vec[i];
        } else {
            h2 += vec[i];
        }
    }
    if (h1 > h2) {
        std::ranges::sort(vec.begin(), vec.begin() + half);
    } else {
        std::ranges::sort(vec.begin() + half, vec.end());
    }
}

//auto sortBiggerHalf(std::vector<int>& vec) -> void {
//    auto middle = vec.begin() + vec.size() / 2;
//    auto firstHalfSum = std::accumulate(vec.begin(), middle, 0);
//    auto secondHalfSum = std::accumulate(middle, vec.end(), 0);
//
//    if (firstHalfSum > secondHalfSum) {
//        std::ranges::sort(vec.begin(), middle);
//    } else {
//        std::ranges::sort(middle, vec.end());
//    }
//}

auto main() -> int {
    auto firstHalfBigger = std::vector<int>{3, 2, 1, 0, 1, 0};
    auto secondHalfBigger = std::vector<int>{3, 2, 1, 6, 5, 4};
    auto bothHalvesSame = std::vector<int>{5, 4, 5, 4};

    sortBiggerHalf(firstHalfBigger);
    sortBiggerHalf(secondHalfBigger);
    sortBiggerHalf(bothHalvesSame);

    for (auto element : firstHalfBigger) std::cout << element << ' ';
    std::cout << '\n';
    for (auto element : secondHalfBigger) std::cout << element << ' ';
    std::cout << '\n';
    for (auto element : bothHalvesSame) std::cout << element << ' ';

    return 0;
}