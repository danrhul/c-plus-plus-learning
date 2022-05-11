// https://beginnersbook.com/2017/08/cpp-destructors/

#include <iostream>

class Example {
private:
    std::string name;
public:
    Example(std::string name) {
        this->name = name;
    }

    ~Example() {
        std::cout<<"In destructor: "<<name<<std::endl;
    }
};

int main() {
    Example assignExample("assignment");

    Example("no assignment");

    if (true) {
        Example ifExample("if");
    }
}