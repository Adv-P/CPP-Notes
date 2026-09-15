#include <iostream>
#include <ctime>
#include <cstdlib>

std::string assignChoice();
std::string getResult(int userChoiceNum, std::string compChoice);

int main() {
    std::string playAgain;
    int userChoiceNum;

    std::cout << "Welscome to the Rock Paper Scissors Game!\n";
    std::cout << "\n" << "The computer either rock, paper or scissors. Please choose from the options below (1-3) " << '\n';
    std::cout << "  1. Rock\n" << "  2. Paper\n" << "  3. Scissors\n";
    std::cout << "Your choice? ";
    std::cin >> userChoiceNum;
    char playAgain;

    while(true){
        std::string compChoice = assignChoice();
        std::string result = getResult(userChoiceNum, compChoice);
        if(userChoiceNum > 3 || userChoiceNum < 1){
            result = "Invalid input!\n";
            continue;
        }
        std::cout << result;
        std::cout << "Would you like to play again? (y/n): \n";
        std::cin >> playAgain;
        if(playAgain == 'y'){
            continue;
        }
        else{
            break;
        }
    }
    return 0;
}

std::string assignChoice(){    
    srand(time(0));
    int randNum = (rand() % 3) + 1; 
    std::string choice;
    
    if (randNum == 1){
        return "Rock";
    }
    if (randNum == 2){
        return "Paper";
    }
    if (randNum == 3){
        return "Scissors";
    }
}

std::string getResult(int userChoiceNum, std::string compChoice){
    std::string userChoice;

    if(userChoiceNum == 1){
        userChoice = "Rock";
    }
    if(userChoiceNum == 2){
        userChoice = "Paper";
    }
    if(userChoiceNum == 3){
        userChoice = "Scissors";
    }

    std::cout << "You chose: " << userChoice << '\n';

    std::string result = "";

    if(userChoice == compChoice){
        result = "The computer chose " + compChoice + "! It's a tie!\n";
    }
    if((userChoice == "Rock" || userChoice == "rock") && compChoice == "Paper"){
        result = "The computer chose " + compChoice + "! You lose!\n";
    }
    if((userChoice == "Rock" || userChoice == "rock") && compChoice == "Scissors"){
        result = "The computer chose " + compChoice + "! You win!\n";
    }
    if((userChoice == "Paper" || userChoice == "paper") && compChoice == "Rock"){
        result = "The computer chose " + compChoice + "! You win!\n";
    }
    if((userChoice == "Paper" || userChoice == "paper") && compChoice == "Scissors"){
        result = "The computer chose " + compChoice + "! You lose!\n";
    }
    if((userChoice == "Scissors" || userChoice == "scissors") && compChoice == "Rock"){
        result = "The computer chose " + compChoice + "! You lose!\n";
    }    
    if((userChoice == "Scissors" || userChoice == "scissors") && compChoice == "Paper"){
        result = "The computer chose " + compChoice + "! You win!\n";
    }
    return result;
}