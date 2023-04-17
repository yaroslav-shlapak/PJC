#include <fmt/core.h>
#include <fmt/format.h>
#include <vector>
#include <algorithm>
#include "../cmake-build-debug/_deps/fmt-src/include/fmt/color.h"

struct Animal {
    virtual auto makeSound() const -> void {
        fmt::print("Generic sounds\n");
    }
};
struct Dog : Animal {
    auto makeSound() const -> void override {
        fmt::print("Bark\n");
    }
};
struct Cat : Animal {
    auto makeSound() const -> void override {
        fmt::print("Meow\n");
    }
};
namespace my {
    template <typename T>
    class Vector {
        int size_ = 0;
        T* storage_ = nullptr;
    public:
        auto pushBack(T const& t) -> void {
            auto* storage = new T[size_ + 1];
            storage[size_] = t;
            std::ranges::copy_n(storage_, size_, storage);
            delete[] storage_;
            storage_ = storage;
            size_ += 1;
        }
        auto print() const -> void {
            for (auto i = 0; i < size_; i++) {
                fmt::print("{} ", storage_[i]);
            }
        }
        ~Vector() {
            delete[] storage_;
        }
    };
}
auto main() -> int {
    /*auto x = 5;
    auto y = 10;
    auto& ref = x;
    ref = 100;
    auto* ptr = &x;
    *ptr = 200;
    ptr = &y;
    *ptr = 300;
    fmt::print("{}\n", x);
    fmt::print("{}\n", fmt::ptr(&x));
    fmt::print("{}\n", fmt::ptr(ptr));
    fmt::print("{}\n", *ptr);
    fmt::print("{}\n", y);
    ptr = nullptr;*/
    auto a1 = Cat();
    auto a2 = Dog();
    auto a3 = Cat();
    auto a4 = Cat();
//    auto animals = std::vector<Animal&>();
    auto animals = std::vector<Animal*>();
    animals.push_back(&a1);
    animals.push_back(&a2);
    animals.push_back(&a3);
    animals.push_back(&a4);
    for (auto animalPtr : animals) {
//        animalPtr->makeSound();
        (*animalPtr).makeSound();
    }
    /* {
         auto vec = my::Vector<int>();
         vec.pushBack(55);
         vec.pushBack(10);
         vec.pushBack(10);
         vec.pushBack(55);
         vec.pushBack(10);
         vec.print();
     }
     fmt::print("here");*/
}

// String s = "abc";
// String s2 = s;
//