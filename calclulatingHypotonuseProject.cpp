#include <iostream>
#include <cmath>

int main() {
    double leg;
    double secondLeg;
    double hypotenuse; 

    std::cout << "What's the lenght of one side of the right triangle? ";
    std::cin >> leg;

    std::cout << "What's the lenght of the other side of the right triangle? ";
    std::cin >> secondLeg;

    hypotenuse = sqrt(pow(leg,2)+pow(secondLeg,2));
    
    std::cout << "The hypotenuse of the triangle is " << hypotenuse << "!" << '\n';

    return 0;
}