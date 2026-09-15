#include<iostream>
#include<cmath>

int calculate(double firstNumber, double secondNumber, char operation) {
    switch(operation){
        case '+':
            return firstNumber + secondNumber;
        case '/':
            return firstNumber / secondNumber;
        case '*':
            return firstNumber * secondNumber;
        case '-':
            return firstNumber - secondNumber;
        default:
            std::cout << "Please enter a valid operator!" << '/n';
            return 0;
    }   
}

int main() {

    double firstNumber;
    double secondNumber;
    char operation;

    std::cout << "Enter the first number: ";
    std::cin >> firstNumber;

    std::cout << "Enter the second number: ";
    std::cin >> secondNumber;

    std::cout << "Enter an operator(+,-,*,/): ";
    std::cin >> operation;

    double output = calculate(firstNumber, secondNumber, operation);
    std::cout << "The value of " << firstNumber << " " << operation << " " << secondNumber << " is " << output << "!" << '\n';

    return 0;
}