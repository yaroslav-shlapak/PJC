#include <algorithm>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <fmt/core.h>
#include <fmt/ranges.h>
auto main() -> int {
    auto vec = std::vector<int>{3, 2, 3, 1, 1, 1, 1, 8};
/*//    vec.erase(vec.begin(), vec.begin() + 3);
//    vec.erase(vec.begin(), vec.end());
//    fmt::print("{}", vec);
//    auto it = vec.begin() + 4;
//    fmt::print("{}\n", *(vec.end() + 1'000'000)); // BAD
//    fmt::print("{}\n", *it);
//    *it = 7;
//    fmt::print("{}\n", *it);
//    fmt::print("{}\n", vec);*/
/*//    auto it = vec.begin() + 1;
//    fmt::print("{}\n", *it);
//    vec.erase(vec.begin());
//    fmt::print("{}\n", *it);
    auto it = vec.end() - 1;
    fmt::print("{}\n", *it);
    vec.clear();
    fmt::print("{}\n", *it);*/
//    auto set = std::set<int>(vec.begin(), vec.end());
//    fmt::print("{}", set);
/*    std::ranges::sort(vec);
//    auto toErase = std::ranges::unique(vec);
//    vec.erase(toErase.begin(), toErase.end());
    auto [begin, end] = std::ranges::unique(vec);
    vec.erase(begin, end);
    fmt::print("{}", vec);*/
    auto s = std::string("text");
    auto occurrences = std::map<char, int>();
    for (auto chr : s) {
        occurrences[chr] += 1;
    }
//    fmt::print("{}", occurrences);
    for (auto [key, value] : occurrences) {
        fmt::print("{} - {}\n", key, value);
    }
}