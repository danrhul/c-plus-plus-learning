// https://beginnersbook.com/2017/08/cpp-switch-case/

#include <iostream>

int main() {
    int i = 0;
    switch (i) {
        case 0:
            std::cout<<"Is 0";
            break;
        case 1:
            std::cout<<"Is 1";
            break;
        case 2:
            std::cout<<"Is 2";
            break;
        default:
            std::cout<<"No case";
    }

    std::cout<<".";

    return 0;
}