#include <iostream>

int getDigit(const int number);
int sumOddDigit(const std::string creditCardNumber);
int sumEvenDigit(const std::string creditCardNumber);

int main(){

    std::string cardNumber;
    int result = 0;

    std::cout << "Enter a credit card number: "
    std::cin >> cardNumber;


    result = sumEvenDigit(cardNumber) + sumOddDigit(cardNumber);

    return 0;
}


int getDigit(const int number){
    
    return number % 10 + (number / 10 % 10);
}
int sumOddDigit(const std::string creditCardNumber){

    int sum = 0;

    for(int i = cardNumber.size() - 1; i >= 0; i-=2){
        sum+= cardNumber[i]-'0';
    }

    if (result % 10 == 0){
        std::cout << "Valid Credit Card Number";        
    }
    else{
        std::cout << "Invalid Credit Card Number";
    }

    return sum;
 
}
int sumEvenDigit(const std::string creditCardNumber){

    int sum = 0;

    for(int i = cardNumber.size() - 2; i >= 0; i-=2){
        sum+=getDigit((cardNumber[i]-'0')*2);
    }

    return sum;
}
