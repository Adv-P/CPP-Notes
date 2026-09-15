#include <iostream>
#include <ctime>
#include <cctype>

void drawBoard(char *spaces);
void playerMove(char *spaces, char player);
void computerMove(char *spaces, char computer);
char choice(char player,char computer);
bool checkWinner(char *spaces, char player, char computer);
bool checkTie(char *spaces);
void playAgain();

int main() {

    char spaces [9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char computer;
    char player;
    
    choice(player, computer);
    drawBoard(spaces);

    return 0;
}

char choice(char player, char computer){
    std::cout << "Do you want to be 'X' or 'O'? ";
    std::cin >> player;
    player = std::toupper(player);
    
    srand(time(NULL));
    int turn = (rand() % 2) + 1;

    if(player == 'X' && turn == 1){
        std::cout << "You are 'X' and you go first!\n";
    }
    else if(player == 'X' && turn == 2){
        std::cout << "You are 'X' and the compuer goes first!\n";
    }
    else if(player == 'O' && turn == 1){
        std::cout << "You are 'O' and you go first!\n";
    }
    else if(player == 'O' && turn == 2){
        std::cout << "You are 'O' and the computer goes first!\n";
    }
    else{
        std::cout << "Invalid choice\n";
        //playAgain();
    }

    return 'A';
}

void drawBoard(char *spaces){
    std::cout << "      |     |      \n";
    std::cout << "  " << spaces[0] << "   |  " << spaces[1] << "  |  " << spaces[2] << "   \n";
    std::cout << "______|_____|______\n";
    std::cout << "      |     |      \n";
    std::cout << "  " << spaces[3] << "   |  " << spaces[4] << "  |  " << spaces[5] << "   \n";
    std::cout << "______|_____|______\n";
    std::cout << "      |     |      \n";
    std::cout << "  " << spaces[6] << "   |  " << spaces[7] << "  |  " << spaces[8] << "   \n";
    std::cout << "      |     |      \n";

}

void playerMove(char *spaces, char player){
    int move;
    std::cout << "Enter a number between 1-9 to move your : ";
    


}

void computerMove(char *spaces, char computer){



}

bool checkWinner(char *spaces, char player, char computer){



    return 0;
}
bool checkTie(char *spaces){



    return 0;
}
