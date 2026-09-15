#include <iostream>
#include <ctime>

int main(){
    /*
    // psuedo random = Not completely random, but close
    srand(time(NULL));

    int num = (rand() % 6) + 1; // Range = 1 -- 6
    int num2 = (rand() % 100) + 1; // Range = 1 -- 100
    int num3 = (rand() % 12) + 1; // Range = 1 -- 12

    std::cout << num << '\n' << num2 << '\n' << num3 << '\n';
    */

    //Random event generator
    /*
    srand(time(NULL));
    int number = (rand() % 5) + 1;

    switch(number){
        case 1:
            std::cout << "You won a new bike!\n";
            break;
        case 2:
            std::cout << "You won a new phone!\n";
            break;
        case 3:
            std::cout << "You won a new laptop!\n";
            break;
        case 4:
            std::cout << "You won a new car!\n";
            break;
        case 5:
            std::cout << "You won a new airplane!\n";
            break;
    }
    */

    //random number guesing game
    srand(time(NULL));
    int num = (rand() % 100) + 1;
    int inputNumber;
    int tries = 0;

    while(true){
        std::cout << "Guess a number between 1-100: ";
        std::cin >> inputNumber;
        tries++;

        if(inputNumber > 100){
            std::cout << "Number is not between 0-100! Please guess again!\n";
        }
        else if(inputNumber < 0){
            std::cout << "Number is not between 0-100! Please guess again\n";
        }
        else if(inputNumber > num) {
            std::cout << "Too high!\n";
        }
        else if(inputNumber < num){
            std::cout << "Too low!\n";
        }
        else if(inputNumber == num){
            if(tries == 1){
                std::cout << "It took you 1 try\n";
            }
            else{
                std::cout << "You win! It took you " << tries << " tries!\n";
            }
            break;
        }
    }

    return 0;
}