// https://beginnersbook.com/2017/08/cpp-recursion/

#include <iostream>

int fibonacci(int);

int main() {
    int n;
    std::cout<<"Enter n for Fibonacci series: ";
    std::cin>>n;

    std::cout<<"Fibonacci: "<<fibonacci(n)<<"."<<std::endl;

    return 0;
}

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}