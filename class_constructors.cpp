// https://beginnersbook.com/2017/08/cpp-constructors/

#include <iostream>

class DefaultConstructor {
public:
    DefaultConstructor() {
        std::cout<<"Default constructor called!"<<std::endl;
    }
};

class ParamConstructor {
public:
    ParamConstructor(int x, int y) {
        printf("(%d, %d)\n", x, y);
    }
};

int main() {
    DefaultConstructor();
    DefaultConstructor defaultConstructor;

    ParamConstructor(1, 2);
    ParamConstructor paramConstructor(3, 4);
}