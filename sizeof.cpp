#include <iostream>

int main(){

    //sizeof() = determines the size in bytes of a variable, data type, class, object, etc
    
    double gpa = 2.5; // The size of a double is always 8 bytes
    char letter = 'A'; //The size of a char is always 1 byte
    int num = 100; // The size of an int is always 4 bytes
    bool isStudent = true; //The size of a bool is 1 byte
    std::string car = "Mustang"; //The ize of a string is usually 32 bytes
    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    std::string names[0] = {"Tom", "Jack", "Mandy", "Sandy"};


    std::cout << sizeof(names)/sizeof(std::string);
    std::cout << sizeof(grades)/sizeof(grades[0]) << '\n';


}