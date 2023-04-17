#include <string>
#include <filesystem>
#include <fmt/core.h>
#include <fmt/std.h>
struct Base {
    virtual auto print() const -> void {
        fmt::print("Greetings\n");
    }
};
struct Derived : Base {
    auto print() const -> void override {
        fmt::print("Hello There\n");
    }
};
auto callPrint(Base const& b) -> void {
    b.print();
}
struct NewClass {
    int x;
    auto someMethod() const -> void {
//        x = 10;
    }
};
auto main() -> int {
    /*auto dirPath = std::string("C:\\Users\\fk\\Desktop\\D1");
//    auto dirIter = std::filesystem::directory_iterator(dirPath);
    auto dirIter = std::filesystem::recursive_directory_iterator(dirPath);
    for (auto const& entry : dirIter) {
        fmt::print("{}\n", entry.path());
    }*/
/*    auto b = Base();
    callPrint(b);
    auto d = Derived();
    callPrint(d);*/
    auto const v = NewClass();
    v.someMethod();
}
