#include <iostream>
#include <string>

class Person {
public:
    std::string name;
    int age;

    void introduce() {
        std::cout << "Hi, I'm " << name << " and I'm " << age << " years old" << std::endl;
    }
};

int main() {
    std::string greeting = "Hello";
    std::string name = "Alice";
    std::string fullGreeting = greeting + ", " + name + "!";

    std::cout << fullGreeting << std::endl;

    std::cout << "Length: " << fullGreeting.length() << std::endl;

    std::cout << "First letter of greeting: " << fullGreeting[0] << std::endl;

    return 0;
}