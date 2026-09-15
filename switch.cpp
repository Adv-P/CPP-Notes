#include<iostream>

int main() {

    //switch is an alternate to using many else if statements

    int month;
    std::cout << "Enter the moth (1-12): ";
    std::cin >> month;

    switch(month){
        case 1:
            std::cout << "It's January" << '\n';
            break;
        case 2:
            std::cout << "It's Febuary" << '\n';
            break;
        case 3:
            std::cout << "It's April" << '\n';
            break;
        case 4:
            std::cout << "It's March" << '\n';
            break;
        case 5:
            std::cout << "It's May" << '\n';
            break;
        case 6:
            std::cout << "It's June" << '\n';
            break;
        case 7:
            std::cout << "It's July" << '\n';
            break;
        case 8:
            std::cout << "It's August" << '\n';
            break;
        case 9:
            std::cout << "It's Septemnber" << '\n';
            break;
        case 10:
            std::cout << "It's October" << '\n';
            break;
        case 11:
            std::cout << "It's November" << '\n';
            break;
        case 12:
            std::cout << "It's December" << '\n';
            break;
        default:
            std::cout << "Please enter only numbers 1-12";
    }

    return 0;
}