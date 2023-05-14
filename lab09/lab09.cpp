#include <fmt/core.h>
#include <fmt/format.h>
#include <vector>
#include <algorithm>


#include <algorithm>
#include <exception>
#include <string>
#include <fmt/core.h>
/*auto operator-(std::string const& left, std::string const& right) -> std::string {
    auto result = std::string();
    for (auto const c : left) {
        if (std::ranges::find(right, c) == right.end()) {
            result += c;
        }
    }
    return result;
}*/
struct SomeException : std::exception {
};
auto main() -> int {
    /*auto s1 = std::string("Hoelolo");
    auto s2 = std::string("ol");
    fmt::print("{}\n", s1 + s2);
    fmt::print("{}\n", s1 - s2);*/
//    try {
    throw SomeException();
//    } catch (SomeException const& ex) {
    // ...
//    }
}