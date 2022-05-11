// https://beginnersbook.com/2017/09/cpp-abstract-class/

#include <iostream>

class Animal {
public:
    virtual void DoSound() = 0;
};

class Dog: public Animal {
public:
    void DoSound() override {
        std::cout<<"Woof"<<std::endl;
    }
};

int main() {
    Dog dog;
    dog.DoSound();
}