// https://beginnersbook.com/2017/09/friend-class-and-friend-functions/

#include <iostream>

class PrivateBase {
friend class Friend;

private:
    int number = 0;

public:
    friend void globalPrintNumber(PrivateBase privateBase);
};

class Friend: public PrivateBase {
public:
    void printNumber() {
        std::cout<<"(Friend) Number: "<<number<<std::endl;
    }
};

void globalPrintNumber(PrivateBase privateBase) {
    std::cout<<"(Global) number: "<<privateBase.number<<std::endl;
}

int main() {
    Friend friendObject;
    friendObject.printNumber();

    globalPrintNumber(friendObject);
}