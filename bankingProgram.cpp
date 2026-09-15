#include <iostream>

void withdraw();
void deposit();

float balance = 0.0;

int main(){

    int choice;

    std::cout << "Welcome to the Banking Program!\n";

    while(true) {
        std::cout << "Please select an option:\n";
        std::cout << "  1. Withdraw\n";
        std::cout << "  2. Check Balance\n";
        std::cout << "  3. Deposit\n";
        std::cout << "  4. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        if(choice > 0 && choice < 5){
            if(choice == 1){
                withdraw();
            }
            if(choice == 2){
                std::cout << "You current balance is " << balance << "!\n";
                std::cout << "*************************\n";
            }
            if(choice == 3){
                deposit();
            }
            if(choice == 4){
                std::cout << "Have a good day!\n";
                break;
            }
        }
        else{
            std::cout << "Invalid choice! Please enter a number between 1-4!\n";
            std::cout << "**************************************************\n";
        }
    }
    return 0;
}

void withdraw() {
    float withdraw; 

    while(true) {
        std::cout << "How much would you like to withdraw from you account? ";
        std::cin >> withdraw;
        if(withdraw < 0){
            std::cout << "You cannot withdraw a negative amount! Please enter a positive value! \n";
        }
        if(withdraw > balance){
            std::cout << "You cannot withdraw $" << withdraw << "! You only have $" << balance << "! Please enter a different value!\n";
            std::cout << "How much would you like to withdraw from you account?";
            std::cin >> withdraw;
        }
        else{
            balance = balance - withdraw;
            for(int i = 1; i < 5; i+=1){
                std::cout << ".";

            }
            std::cout << "Transaction successful! You withdrew $" << withdraw << "! Your new balnce is now $" << balance << "!\n";
            std::cout << "****************************\n";
            break;
        }
    }
}

void deposit() {
    float deposit; 
    while(true) {
        std::cout << "How much would you like to deposit into you account? ";
        std::cin >> deposit;

        if (deposit < 0){
            std::cout << "You cannot deposit a negative value! Please enter a positive value! \n";
        }
        else{
            balance = balance + deposit;
            for(int i = 1; i < 3; i+=1){
                std::cout << ".";
            }
            std::cout << "Transaction successful! You deposited $" << deposit << "! Your new balance is now $" << balance << "!\n";
            std::cout << "****************************\n";
            break;
        }
    }
}

