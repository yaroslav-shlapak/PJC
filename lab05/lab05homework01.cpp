#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include "fmt/ranges.h"

/*
Write a program that will read words from the user until the word stop is entered.
 Display all these words by grouping them by their lengths.
 Display each group on a separate line. Skip the word stop.
 Do not display a word more than once.

For example, if the user enters the following sequence of words:
 a quick brown fox jumped over a very lazy dog to impress others stop
 the following groups of words will be displayed:

a
to
fox
over very lazy
quick brown
jumped others
impress
The order of groups and the words appearing in a group does not have to be the same as in the example.
 */


auto groupByLength(std::map<int, std::set<std::string>> &grouped, std::string input) {
    if (grouped.empty() || grouped[input.size()].empty()) {
        auto group = {input};
        grouped[input.size()] = group;
    } else {
        grouped[input.size()].insert(input);
    }
}

auto main() -> int {
    std::string input = "";
    std::string stop_word = "stop";
    char c;
    auto grouped = std::map<int, std::set<std::string>>();
    auto inputs = {"a", "quick", "brown", "fox", "jumped", "over", "a", "very", "lazy", "dog", "to", "impress", "others", "stop"};
    for (auto input : inputs) {
        groupByLength(grouped, input);
    }

    for (auto group : grouped) {
        fmt::print("{}", group.second);
        std::cout << "\n";
    }
    grouped.clear();
    while (input.find(stop_word) == std::string::npos) {
        c = std::cin.get();
        if (c == '\n') {
            std::cout << "You typed: " << input << "\n";
            groupByLength(grouped, input);
            input = "";
        } else {
            input += c;
        }
    }
    for (auto group : grouped) {
        fmt::print("{}", group.second);
    }
}

