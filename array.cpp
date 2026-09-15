#include <iostream>

double getTotal(double prices[], int size);

int main(){
    //array = a data structure that can hold multiple values
    //  values are accessed by an index number 
    //  can only contain values of the same data type
    //

    //Declare an array
    std::string cars[3]; //need to set size of an array to avoid an errors
    cars[0] = "Corvette";
    cars[1] = "Mustang";
    cars[2] = "Camaro";

    std::string car[] = {"Corvette", "Mustang", "Camaro"};


    std::string names[] = {"Tom", "Jack", "Mandy", "Sandy"};
    
    for(int i = 0; sizeof(names)/sizeof(std::string); i++){{}
        std::cout << names[i] << '\n';
    }

    std::cout << car[0] << '\n';

    double prices[] = {7.99, 28.99, 2.35, 1.39, 19.90};
    int size = sizeof(prices)/sizeof(prices[0]);
    double total = getTotal(prices,size);
    
    return 0;
}

double getTotal(double prices[], int size){
    double total = 0;
    
    for(int i = 0; i < siz; i++){
        total += prices[i];
    }
}