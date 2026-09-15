#include <iostream>
//Arthimetic operators (+,-,*,/)

int main() {

    //Addition
    int restuarants = 5;
    restuarants = restuarants + 1;
    restuarants+=1; 
    restuarants++; //Only for adding one

    //Substraction
    int students = 20;
    students = students - 2;
    students-=2;
    students--; //Only for subtracting one

    //Multipliation
    int cities = 50;
    cities = cities * 2;
    cities*=2;

    //Division
    int money = 250;
    money = money / 5;
    money/=5;

    //Remainder
    int cars = 100;
    int remainder = cars % 3; //Will display a remainder if printed out

    //An decimals are rounding since we are working with int. Use double for decimal portions
    return 0;
}