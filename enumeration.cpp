// https://beginnersbook.com/2017/09/cpp-enumeration/

#include <iostream>

enum class PhoneType {
    MOBILE,
    HOME,
    WORK,
    OTHER = 10
};

enum class Direction { North, East, South, West } direction;

struct PhoneNumber {
    char prefix[4] = "+44";
    int number;
    PhoneType type = PhoneType::HOME;
};

void printNumber(PhoneNumber);

int main() {
    PhoneNumber phoneNumber;
    printNumber(phoneNumber);

    phoneNumber.number = 1234567890;
    phoneNumber.type = PhoneType::MOBILE;
    printNumber(phoneNumber);
}

void printNumber(PhoneNumber phoneNumber) {
    std::cout
    <<"Number: "<<phoneNumber.prefix<<" "<<phoneNumber.number<<"\n"
    <<"Type: "<<(int) phoneNumber.type
    <<std::endl;
}