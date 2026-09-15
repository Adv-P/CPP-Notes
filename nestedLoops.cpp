#include <iostream>

//Nested loop = a loop inside a loop

int main(){

    /*
    for(int i = 1; i <= 5; i++){
        std::cout << "I = " << i << '\n';

        for (int j = 1; j <= 2; j++){
            std::cout << "J = " << j << '\n'; 
        }
    }
    */

    int row;
    int column;
    char symbol;

    std::cout << "How manny rows? ";
    std::cin >> row;

    std::cout << "How many columns? ";
    std::cin >> column;

    std::cout << "What symbol to use? ";
    std:: cin >> symbol;

    for(int i=1; i<=row; i++){
        for(int j=1; j<=column; j++){
            std::cout << symbol;
        }
        std::cout << "\n";
    }

}