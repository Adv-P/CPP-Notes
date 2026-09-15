#include<iostream>
//Converion of one data type to another
//implicit = automatic
//explicit = precede value with new data type (int)

int main() {

    //Implicit
    double x = (int) 50.58; //Converting double to int
    char x = 100; //Output 'd' (ASCII table)
    std::cout << x << '\n';

    //Explicit
    std::cout << (char) 100;

    return 0;
}