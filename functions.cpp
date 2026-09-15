#include <iostream>
// function = a block of resuable code

void happyBirthday(std::string name, int age); // defines a function

int main(){
    std::string name = "Ad";
    int age = 12;

    happyBirthday(name, age ); //call a function

    return 0;
}


void happyBirthday(std::string name, int age){ // To use a variable in another funciton
    std::cout << "Happy Birthday to "<< name << "!\n";
    std::cout << "Happy Birthday to "<< name << "!\n";
    std::cout << "You are " << age << " years old!\n";

}