#include <iostream>
void geography();
void science();
void math();
void history();

int main(){

    std::string subject;
    char playAgain;

    while(true){
        std::cout << "\nPlease choose a subject (math, history, science, geography)? Q to quit: ";
        std::getline(std::cin, subject);

        if (subject == "geography" || subject == "Geography" || subject == "GEOGRAPHY"){
            geography();
            std::cout << "Would you like to play again (y/n)? ";
            std::cin >> playAgain;
            std::cin.ignore(10000, '\n');
            if(playAgain == 'N' || playAgain == 'n'){
                break;
            }
            else{
                continue;
            }
            
        }else if (subject == "science" || subject == "Science" || subject == "SCIENCE"){
            science();
            std::cout << "Would you like to play again (y/n)? ";
            std::cin >> playAgain;
            std::cin.ignore(10000, '\n');
            if(playAgain == 'N' || playAgain == 'n'){
                break;
            }
            else{
                continue;
            }
        }else if (subject == "math" || subject == "Math" || subject == "MATH"){
            math();
            std::cout << "Would you like to play again (y/n)? ";
            std::cin >> playAgain;
            std::cin.ignore(10000, '\n');
            if(playAgain == 'N' || playAgain == 'n'){
                break;
            }
            else{
                continue;
            }
        }else if (subject == "history" || subject == "History" || subject == "HISTORY"){
            history();
            std::cout << "Would you like to play again (y/n)? ";
            std::cin >> playAgain;
            std::cin.ignore(10000, '\n');
            if(playAgain == 'N' || playAgain == 'n'){
                break;
            }
            else{
                continue;
            }
        }else if (subject == "q" || subject == "Q"){
            break;
        }else{
            std::cout << "Invalid subject!";
        }
    }

    return 0;
}

void geography(){
    std::string answer;
    int score = 0;

    std::string geographyQuestions[5][2] =  {{"What's is the capital of Canada?", "Ottawa"},
                                            {"What's the capital of Mexico?", "Mexico City"},
                                            {"What's the capital of China?", "Bejeing."},
                                            {"What's the capital of the UK?", "London"},
                                            {"What's the capital of France?", "Paris"}};

    for(int i = 0; i < 5; i++){
        std::cout << "Question: " << geographyQuestions[i][0] << "\n";
        std::cout << "Answer: ";
        std::getline(std::cin, answer);
        std::cin.ignore(10000, '\n');
        if(answer == geographyQuestions[i][1]){
            std::cout << "Correct!\n";
            score += 1;
            std::cout << "Current Score: " << score << "\n************************\n";
        }
        else{
            std::cout << "Incorrect!\n";
            std::cout << "The correct answer is " << geographyQuestions[i][1] << "\n";
            std::cout << "Current Score: " << score << "\n************************\n";
        }               
    }

    std::cout << "You got a score of " << score << " out of 5! Thank you for playing!\n";
}


void science(){
    std::string answer;
    int score = 0;
    
    std::string scienceQuestions[5][2] = {{"What's the chemical symbol for Gold?", "Au"},
                                         {"What's the chemical symbol for Hassium?", "Hs"},
                                         {"What's the chemical symbol for Uranium?", "U"},
                                         {"What's the chemical symbol for Lutetium?", "Lu"},
                                         {"What's the chemical symbol for Fermium?", "Fm"}};
    
    for(int i = 0; i < 5; i++){
        std::cout << "Question: " << scienceQuestions[i][0] << "\n";
        std::cout << "Answer: ";
        std::cin >> answer;
        if(answer == scienceQuestions[i][1]){
            std::cout << "Correct!\n";
            score += 1;
            std::cout << "Current Score: " << score << "\n************************\n";
        }
        else{
            std::cout << "Incorrect!\n";
            std::cout << "The correct answer is " << scienceQuestions[i][1] << "\n";
            std::cout << "Current Score: " << score << "\n************************\n";
        }               
    }

    std::cout << "You got a score of " << score << " out of 5. Thank you for playing!\n";

}


void math(){
    std::string answer;
    int score = 0;

    std::string mathQuestions[5][2] =  {{"What is the square root of 144?", "12"},
                                       {"What is the cube root of 729?", "9"},
                                       {"What is the factorial of 4?", "24"},
                                       {"What is the square root of 4?", "2"},
                                       {"What is the fourth root of 81?", "3"}};

    for(int i = 0; i < 5; i++){
        std::cout << "Question: " << mathQuestions[i][0] << "\n";
        std::cout << "Answer: ";
        std::cin >> answer;
        if(answer == mathQuestions[i][1]){
            std::cout << "Correct!\n";
            score += 1;
            std::cout << "Current Score: " << score << "\n************************\n";
        }
        else{
            std::cout << "Incorrect!\n";
            std::cout << "The correct answer is " << mathQuestions[i][1] << "\n";
            std::cout << "Current Score: " << score << "\n************************\n";
        }               
    }

    std::cout << "You got a score of " << score << " out of 5! Thank you for playing!\n";
}

void history(){
    std::string answer;
    int score = 0;

    std::string historyQuestions[5][2] = {{"When did World War 1 end?", "1918"},
                                         {"When did World War 2 begin?", "1939"},
                                         {"When did the Magna Carta get signed?", "1215"},
                                         {"When did the Storming of the Bastille occur?", "1789"},
                                         {"When did the first crusade start?", "1096"}};
                                         

    for(int i = 0; i < 5; i++){
        std::cout << "Question: " << historyQuestions[i][0] << "\n";
        std::cout << "Answer: ";
        std::cin >> answer;
        if(answer == historyQuestions[i][1]){
            std::cout << "Correct!\n";
            score += 1;
            std::cout << "Current Score: " << score << "\n************************\n";
        }
        else{
            std::cout << "Incorrect!\n";
            std::cout << "The correct answer is " << historyQuestions[i][1] << "\n";
            std::cout << "Current Score: " << score << "\n************************\n";
        }               
    }

    std::cout << "You got a score of " << score << " out of 5! Thank you for playing!\n";
}