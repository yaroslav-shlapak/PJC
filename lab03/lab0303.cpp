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
Create a function reversedWords() which will take text as argument (std::string)
and return a newly created text, whose words’ order will be reversed.

fox brown Quick
Quick

3 2 1
 */
auto reversedWords(std::string str) -> std::string {
    auto vec = std::vector<std::string>();
    std::string word = "";
    for (auto s : str) {
        if (s == ' ') {
            vec.push_back(word);
            word = "";
        } else {
            word += s;
        }
    }
    vec.push_back(word);
    std::ranges::reverse(vec);
    std::string reversed;
    for (auto item : vec) {
        reversed += item + " ";
    }
    return reversed;
}

auto main() -> int {
    std::cout << reversedWords("Quick brown fox") << '\n'
              << reversedWords("Quick") << '\n'
              << reversedWords("") << '\n'
              << reversedWords("1 2 3") << '\n';

    return 0;
}