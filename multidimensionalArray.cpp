#include <iostream>

int main(){


    //First index is num of rows and the second index is the number of columns
    //When declarin a 2d array, row size is not needed, nut column size is required
    std::strings cars[][3] = {"Mustang", "Escape", "F-150"},
                             {"Corvette", "Silverado", "Camaro"},
                             {"Charger", "Durango", "Ram"};


    std::cout << cars[0][0] << " \n";
    
    int rows = sizeof(cars)/sizeof(cars[0]);
    int column = sizeof(cars[0])/sizeof(cars[0][0]);

    for(int i = 0; i < rows; i++){

        for(int j = 0; j < column; j++){
            std::cout << cars[i][j] << ' ';
        }
        std::cout << '\n';
    }

    return 0;
}

