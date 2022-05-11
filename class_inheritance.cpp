// https://beginnersbook.com/2017/08/cpp-inheritance/

#include <iostream>

class LivingObject {
protected:
    bool breathing = false;
public:
    LivingObject() {
        std::cout<<"I'm living!"<<std::endl;
    }

    bool isBreathing() {
        return breathing;
    }

    virtual void makeSound() {
        std::cout<<"*silence*"<<std::endl;
    }
};

class Human: public LivingObject {
public:
    Human() {
        std::cout<<"I'm a human!"<<std::endl;
        breathing = true;
    }

    void makeSound() override {
        if (breathing) std::cout << "*chatting*" << std::endl;
        else LivingObject::makeSound();
    }
};

int main() {
    LivingObject plant;
    std::cout<<"Plant breathing: "<<plant.isBreathing()<<std::endl;
    plant.makeSound();

    Human human;
    std::cout<<"Human breathing: "<<human.isBreathing()<<std::endl;
    human.makeSound();
}