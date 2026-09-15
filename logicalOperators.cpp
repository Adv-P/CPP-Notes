#include <iostream>

int main(){

    // && Checks if tow conditions are true
    // || Checks if at least one condition is true 
    // ! Reverse the logical state of the operand (ex. If something is true it becomes false and vice versa)

    // &&
    int temperature;
    std::cout << "Enter the temperature: ";
    std::cin >> temperature;

    if(temperature > 0 && temperature < 20){
        std::cout << "The temperaute is good" << '\n';
    }
    else{
        std::cout << "The temperatue is bad" << '\n'; 
    }

    //Another way of writing
    temperature < 20 && temperature > 0 ? std::cout << "The temperature is good!" << '\n' : std::cout << "The temperature is bad!" << '\n';

    // ||
    int grade;
    std::cout << "What's your grade?: ";
    std::cin >> grade;

    if(grade < 60 || grade > 100 ){
        std::cout << "You falied!" << '\n';
    }
    else{
        std::cout << "You passed!" << '\n'; 
    }


    // !
    char input;
    bool sunny;

    std::cout << "Is it sunny (Y or N):";
    std::cin >> input;

    input == 'Y' ? sunny = true : sunny = false;

    if(!sunny){
        std::cout << "It is not sunny!\n";
    }
    else{
        std::cout << "It is sunny!\n";
    }

    return 0;
}