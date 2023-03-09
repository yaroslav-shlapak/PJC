#include <iostream>
#include <vector>
#include <algorithm>

void printLine(char frameSymbol, int maxSize);

auto boxPrint(std::vector<std::string> words, char frameSymbol = '*') -> void {
    int maxSize = 0;
    for (int i = 0; i < words.size(); i++) {
        int size = words[i].size();
        maxSize = std::max(size, maxSize);
    }
    printLine(frameSymbol, maxSize);
    for (auto sentence: words) {
        std::cout << frameSymbol << sentence;
        for (auto i = 0; i < maxSize - sentence.size(); i++) {
            std::cout << ' ';
        }
        std::cout << frameSymbol << '\n';
    }
    printLine(frameSymbol, maxSize);
    std::cout << '\n';
}

void printLine(char frameSymbol, int maxSize) {
    for (int j = 0; j <= maxSize + 1; j++) {
        std::cout << frameSymbol;
    }
    std::cout << '\n';
}

auto boxPrintSolution(std::vector<std::string> sentences, char frameChar = '*') -> void {
    auto longestSentenceLength = 0;

    for (auto sentence: sentences) {
        if (sentences.size() > longestSentenceLength) {
            longestSentenceLength = sentence.size();
        }
    }

    for (auto i = 0; i < longestSentenceLength + 2; i++) {
        std::cout << frameChar;
    }
    std::cout << '\n';

    for (auto sentence: sentences) {
        std::cout << frameChar << sentence;
        for (auto i = 0; i < longestSentenceLength - sentence.size(); i++) {
            std::cout << ' ';
        }
        std::cout << frameChar << '\n';
    }

    for (auto i = 0; i < longestSentenceLength + 2; i++) {
        std::cout << frameChar;
    }
}

auto main() -> int {

    boxPrint({"a", "quick", "brown", "fox"});
    boxPrint({"a", "quick", "brown", "fox"}, '*');
    boxPrint({"a", "quick", "brown", "fox"}, '#');
    boxPrint(std::vector<std::string>{"a", "quick", "brown", "fox"}, '#');
    boxPrint({""});
    boxPrint({});
    boxPrint({}, '#');
    boxPrint({"", "hmmmm", ""});
    boxPrint({"", "", ""});

    return 0;
}

