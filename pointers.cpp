#include <iostream>

int main(){

    //pointers = varaible that stores a memory address of another varibale
    //           sometimes it is easier to work with an address. 

    //& adress-of-operator
    // * deference operator

    std::string name = "Bob";
    std::string *pName = &name; //pointer

    int age = 12;
    int *pAge = &age; //pointer

    std::cout << pName; 
    std::cout << *pAge; //Used to access the variable  (need * to access the variable)

    return 0;
}