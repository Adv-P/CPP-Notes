#include<iostream>

//cout << (insertion opertors)
//cing >> (extraction output) ----- input

int main() {
    std::string name;
    int age;

    std::cout << "What's your age? ";
    std::cin>>age;

    std::cout << "What's your full name? ";
    std::getline(std::cin >> std::ws, name); //ws---whitespace. getline---when there are spaces

    
    std::cout << "Hello " <<name << ". You are " << age << " years old!" << '\n';
    return 0;
}