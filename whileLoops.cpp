#include <iostream>

int main() {

    /*
    // Normal while loop
    std::string name;
    while(name.empty()){
        std::cout << "Enter your name: ";
        std::getline(std::cin, name);
    }
    std::cout << "Hello" << name;
    */

    // Do while loop = do some block of code first then repeat the condition if true
    int number;
        
    do{
        std::cout << "Enter a positive number: ";
        std::cin >> number;
    }while(number < 0);

    std::cout << "The number is " << number << '\n';

    return 0;
}