#include <iostream>

//Return = return a value back to the spot where you called the emncompassing function

/*
//Example 1
double square(double lenght); // Change void to specific data set you are reutnring
double cube(double lenght);

int main() {

    double lenght = 5.0;
    double area = square(lenght);
    double volume = cube(lenght);

    std::cout << "The area of the square is " << area << '\n'; 
    std::cout << "The volume of the cube is " << volume << '\n';

    return 0;
}

double square(double lenght){ // Change void to specific data set you are reutnring 
    return lenght * lenght;
}

double cube(double lenght){
    return lenght * lenght * lenght;
}
*/

//Example 2

std::string concatString(std::string string1, std::string string2);

int main() {
    std::string firstName = "Adv";
    std::string lastName = "P";

    std::string name = concatString(firstName, lastName);

    std::cout << "Hello " << name << '\n';

    return 0;
}

std::string concatString(std::string string1, std::string string2){
    return string1 + " " + string2;
}
