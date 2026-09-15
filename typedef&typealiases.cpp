#include<iostream>

//Typedef are reserved keywords that can be used to create an additional name for another data type.
//New identifier for an existing type
//Helps with readability and redcues typos

//typedef std::string text_t;
//typedef int number_t;

using text_t = std::string; //Better to use using than typedef
using number_t = int;

int main() {

    text_t firstName = "john";
    number_t age = 15;
    std::cout << age << '\n';
    std::cout << firstName << '\n';

    return 0;
}