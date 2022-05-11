// https://beginnersbook.com/2017/09/cpp-structures/

#include <iostream>

struct PhoneNumber {
    char prefix[4] = "+44";
    int number;
    char type[10] = "home";
};

void printNumber(PhoneNumber);

int main() {
    PhoneNumber phoneNumber;
    printNumber(phoneNumber);

    phoneNumber.number = 1234567890;
    printNumber(phoneNumber);
}

void printNumber(PhoneNumber phoneNumber) {
    std::cout
    <<"Number: "<<phoneNumber.prefix<<" "<<phoneNumber.number<<"\n"
    <<"Type: "<<phoneNumber.type
    <<std::endl;
}