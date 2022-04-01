// https://beginnersbook.com/2017/08/cpp-functions/

#include <iostream>

int sum(int, int);

int main() {
    int x;
    std::cout<<"Enter first number: ";
    std::cin>> x;

    int y;
    std::cout<<"Enter second number: ";
    std::cin>> y;

    std::cout<<"Sum: "<<sum(x, y)<<std::endl;

    return 0;
}

int sum(int a, int b) {
    return a + b;
}