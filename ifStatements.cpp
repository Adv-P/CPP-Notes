#include<iostream>

int main() {

    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if(age>100){
        std::cout << "You are above 75!";
    }
    else if(age>=18){
        std::cout << "You are above 18 years old!";
    }
    else if(age<0){
        std::cout << "You are too young!";
    }
    else{
        std::cout << "You too young!";
    }

    return 0;
}