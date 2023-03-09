#include <algorithm>
#include <iostream>
#include <vector>
#include "fmt/ranges.h"
//auto isEven(int n) -> bool {
//    return n % 2 == 0;
//}
auto foo() -> void { }
auto bar(int n) -> void { }
auto main() -> int {
/*    auto numbers = std::vector<int>();
    numbers.push_back(2);
    numbers.push_back(6);
    numbers.push_back(4);*/
/*//    std::cout << numbers;
//    for (auto element : numbers) {
//        std::cout << element << ' ';
//    }

//    fmt::print("Hello world!");

//    fmt::print("Паляниця");
//    fmt::print("This is {}.", "some text");*/
/*    fmt::print("{}\n", numbers);
    numbers.pop_back();
    fmt::print("{}\n", numbers);
    numbers.insert(numbers.begin(), 1);
    fmt::print("{}\n", numbers);
    numbers.insert(numbers.begin() + 2, 3);
    fmt::print("{}\n", numbers);
    numbers.erase(numbers.begin() + 1);
    fmt::print("{}\n", numbers);*/
    std::cout << "Паляниця";
    auto vec = std::vector<int>{3, 2, 3, 3, 3, 5, 4, 3, 5, 2};
    auto numberOf3s = std::ranges::count(vec, 3);
    fmt::print("{}", numberOf3s);
    auto isEven = [](int n) -> bool {
        return n % 2 == 0;
    };
//    auto numberOfEvenNumbers = std::ranges::count_if(vec, isEven);
    auto numberOfEvenNumbers = std::ranges::count_if(vec, [](int n) -> bool {
        return n % 2 == 0;
    });
    fmt::print("{}", numberOfEvenNumbers);

    bar(5);
    auto b = 5;
    bar(b);
    return 0;
}