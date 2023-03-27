#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <ranges>
#include <algorithm>
#include <fmt/core.h>
auto change(int& n) -> void {
    n = 7;
}
//auto print(std::vector<int>& toPrint) -> void {
//    for (auto e : toPrint) std::cout << e << ' ';
//    std::cout << '\n';
//}
//
//auto print(std::vector<float>& toPrint) -> void {
//    for (auto e : toPrint) std::cout << e << ' ';
//    std::cout << '\n';
//}
//auto print(auto& toPrint) -> void {
//    for (auto e : toPrint) std::cout << e << ' ';
//    std::cout << '\n';
//}
template <typename T>
auto print(std::vector<T>& toPrint) -> void {
    for (auto e : toPrint) std::cout << e << ' ';
    std::cout << '\n';
}
template <typename T>
auto myCountIf(std::vector<T> vec, auto predicate) -> int {
    auto counter = 0;
    for (auto e : vec) {
        if (predicate(e)) {
            counter++;
        }
    }
    return counter;
}
auto main() -> int {
//    using fmt::print;
    auto file = std::fstream(
            "data.txt"
    );
    auto word = std::string();
/*    if (file) {
    }*/
    /*
    file >> word;
    print("{}\n", word);
    file >> word;
    print("{}\n", word);*/
//    file << "###";
//    while (file >> word) {
//        print("{}\n", word);
//    }
//    for (auto line = std::string(); std::getline(file, line); ) {
/*//        print("{}\n", line);
//        auto stream = std::stringstream(line);
//        auto counter = 0;
//        while (stream >> word) ++counter;*/
//        auto wordCount = std::ranges::distance(
//            line | std::views::split(' ')
//                 | std::views::filter([](auto&& rng) { return not rng.empty(); })
//        );
//        print("Line \"{}\" contains {} words.\n", line, wordCount);
//    }
/*    auto x = int();
    auto z = 15;
    auto& r = x;
//    x = 10;
//    r = 10;
    r = z;
    x = 15;*/
/*    auto x = 5;
    auto y = 3;
    change(x);
    change(y);
    print("{} {}", x, y);*/
    auto vec = std::vector<int>{1, 2, 3};
    auto vec1 = std::vector<int>{1, 2, 3, 4};
    auto vec2 = std::vector<float>{1, 2, 3, 4};
//    print(vec);
//    print(vec1);
//    print(vec2);
//    auto x = 5;
//    print(x);
    fmt::print("{}\n", myCountIf(vec, [](int n) { return n % 2 == 0; }));
    fmt::print("{}\n", myCountIf(vec2, [](float n) { return n > 2; }));
}