// https://beginnersbook.com/2017/08/cpp-pointers/

#include <iostream>

int main() {
    int i = 99;
    int *pInt = &i;
    std::cout<<"pInt: "<<pInt<<std::endl; // pInt is address of i
    std::cout<<"*pInt: "<<*pInt<<std::endl; // resolve value of address
    std::cout<<"&pInt: "<<&pInt<<std::endl; // show address of variable, not value

    std::cout<<"&i: "<<&i<<std::endl; // address of variable

    std::cout<<"++*pInt: "<<++*pInt<<std::endl; // increment value of resolved address value
    std::cout<<"pInt: "<<pInt<<std::endl;
    std::cout<<"i: "<<i<<std::endl; // incrementing value from resolved address will increment actual value

    pInt = pInt + 1; // incrementing current address reference
    std::cout<<"pInt: "<<pInt<<std::endl;
    std::cout<<"*pInt: "<<*pInt<<std::endl;

    int array[] = {0,2,3,4,5}; // array is a pointer to actual array
    int *pArray = array;
    // [[xxx]]: https://en.cppreference.com/w/cpp/language/attributes
    for ([[maybe_unused]] int value : array) {
        std::cout<<*pArray<<std::endl;

        pArray++;
    }

    return 0;
}