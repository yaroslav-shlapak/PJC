#include <algorithm>
#include <iostream>
#include <string>
//int main() {
//    std::cout << "Hello world";
//
//    return 0;
//}

auto main() -> int {
//    std::cout << "Hello world";
    using namespace std;
    auto word = string();
    cin >> word;
//    std::cout << word;
    cout << word[0] << '\n';
    cout << "'" << word[word.size() - 1] << "'" << '\n';
    cout << word.size() << '\n';
    cout << "\"" << word[word.size() / 2] << '"' << '\n';
    cout << '[' << word << "]\n";
    ranges::sort(word);
    cout << word;
    return 0;
}
// java.util.Scanner s = new java.util.Scanner(System.in);