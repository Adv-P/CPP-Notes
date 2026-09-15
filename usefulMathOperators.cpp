#include <iostream>
#include <cmath>

int main() {

    double x = 2.242141253;
    double y = 7.8;
    double z;

    z = std::max(x,y); //max displays the greater number,only 2 varibales/values
    z = std::min(x,y); //min displays the lower number, only 2 varibles/values
    z = pow(2, 3); //pow is the power fucnction. the 1st value is the 2 and 2nd the exponent
    z = sqrt(9); //sqrt is the square root function
    z = abs(-3); //abs is the absulute value function
    z = round(x); //rounds the number 
    z = ceil(x); //rounds the number up
    z = floor(x); //rounds the number up
    
    
    return 0;
}