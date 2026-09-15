#include <iostream>

int main(){

    //Memory address = a location in memory where data is stroed; can be acessed with & (address-of operator)

    std::string name = "John";
    int age = 21;
    bool student = true;

    std::cout << "Address of name: " << &name << "\n";
    std::cout << "Address of age: " << &age << "\n";
    std::cout << "Address of student: " << &student << "\n";

    return 0; 
}