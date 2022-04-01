// https://beginnersbook.com/2017/08/cpp-for-loop/

#include <iostream>

int main() {
    int array[] = {1,2,3,4,5,6,7,8,9};
    for (int i = 0; i < 9; i++) { // NOLINT(modernize-loop-convert)
        std::cout<<array[i]<<std::endl;
    }

    std::cout<<std::endl;
    std::cout<<"Range loop."<<std::endl;

    for (int i : array) {
        std::cout<<i<<std::endl;
    }

    return 0;
}