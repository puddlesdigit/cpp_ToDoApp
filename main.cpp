#include <iostream>

class MyClass {
public:
    // Constructur
    MyClass(int initialValue) : value(initialValue) {};

    ~MyClass() {};

    void setValue(int newValue) {
        value = newValue;
    }

    int getValue() const {
        return value;
    }

private:
    int value;
};

int main() {
    MyClass obj(10);
    std::cout << "Initial Value: " << obj.getValue() << std::endl;

    obj.setValue(20);
    std::cout << "Initial Value: " << obj.getValue() << std::endl;

    return 0;
}