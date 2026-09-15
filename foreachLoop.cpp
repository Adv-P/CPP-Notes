#include <iostream>

int main(){

    //foreach loop  = loop that asses the traversal over an iterable data set
    
    std::string names[] = {"Tom", "Jack", "Mandy", "Sandy"};

    int grades[] = {60, 70, 80, 90, 10, 100};

    for(int grade : grades){
        std::cout << grade << '\n';
    }

    for(std::string name:names){
        std::cout << name << '\n';
    }

    return 0;
}