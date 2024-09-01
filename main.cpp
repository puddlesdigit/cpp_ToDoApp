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

    int getValuePtr() const {
        return *ptr;
    }

private:
    int value;
    int* ptr = &value;
};

int main() {
    MyClass obj(10);
    std::cout << "Initial Value: " << obj.getValue() << std::endl;

    std::cout << "Initial Value (ptr): " << obj.getValuePtr() << std::endl;

    obj.setValue(20);
    std::cout << "New Value: " << obj.getValue() << std::endl;

    std::cout << "New Value (ptr): " << obj.getValuePtr() << std::endl;

    return 0;
}