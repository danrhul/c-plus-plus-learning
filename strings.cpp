// https://beginnersbook.com/2017/08/strings-in-c/

#include <iostream>

int main() {
    std::string string;
    std::cout<<"Enter a string: ";

    std::getline(std::cin, string);
    std::cout<<"Your string: "<<string<<std::endl;

    std::cout<<"string.append(\" hello!\"): "<<string.append(" hello!")<<std::endl;
    std::cout<<"string.assign(\"new string\"): "<<string.assign("new string")<<std::endl;
    std::cout<<"string.at(2): "<<string.at(2)<<std::endl;
    std::cout<<"string.substr(2, 6): "<<string.substr(2, 6)<<std::endl;

    return 0;
}