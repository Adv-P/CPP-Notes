#include <iostream>

int main() {

    double input;
    double output;
    std::string units;

    std::cout << "What units are you using (C or F)? ";
    std::cin >> units; 

    std::cout << "What's the temperature? ";
    std::cin >> input; 

    if(units == "C" || units == "Celsius" || units == "celsius" ){
        output = (input * 9/5) +32;
        std::cout << "The temperature in celsius is " << output << "!\n";

    }
    else if(units == "F" || units == "Farenheit" || units == "farenheit"){
        output = (input - 32) * 5/9;
        std::cout << "The temperature in farenheit is " << output << "!\n";
    }
    else{
        std::cout << "Please enter the appropriate units!\n";
    }

    //Another way to write it
    units == "C" || units == "Celsius" || units == "celsius" 
        ? (std::cout << "The tempereature in farenheit is " << (input * 9/5) +32 << "!\n")
    : (units == "F" || units == "Farenheit" || units == "farenheit")
        ? (std::cout << "The temeperaute in celsius is " << (input - 32) * 5/9 << "!\n")
        : (std:: cout << "Please enter the appropriate units!\n");

    return 0;
}