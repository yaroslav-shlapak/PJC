#include <vector>
#include <string>
#include <algorithm>
#include <fmt/core.h>
#include <fmt/ranges.h>
auto printVector(std::vector<int> const& toPrint) -> void {
//    toPrint.clear();
    // ...
}
auto main() -> int {
    using fmt::print;
    printVector({});
    auto /*const*/ v = std::vector<int>{1, 2, 3};
    /* printVector(v);
     v.push_back(3);
     printVector(v);*/
    auto strings = std::vector<std::string>{
            "one", "two", "three", "four", "five", "six", "seven"
    };
    auto sizes = std::vector<int>(strings.size());
//    std::ranges::transform(strings, sizes.begin(), std::ranges::size);
    auto comparator = [](std::string left, std::string right) {
        return left.size() < right.size();
    };
    auto projection = [](std::string s) {
        return s.size();
    };
//    std::ranges::sort(strings, comparator);
    std::ranges::sort(strings, {}, projection);
    print("{}", strings);
}