#include <iostream>

int main() {
    // ternary operator ?: = replacement to an if/else statement
    // condition ? expression1 : expression2;

    int grade;

    std::cout << "Enter a your grade: ";
    std::cin >> grade;

    grade >=60 ? std::cout << "You passed!" << '\n' : std::cout << "You failed!" << '\n';

    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    number % 2 == 0 ? std::cout << "It's an even number!" << '\n' : std::cout << "It's an odd number" << '\n';

    char hungry;
    bool starving;
    std::cout << "Are you hungry (Y or N): ";
    std::cin >> hungry;

    starving = (hungry == 'Y' || hungry == 'y');
    starving ? std::cout << "You are hungry!" << '\n' : std::cout << "You are not hungry!" << '\n';

    return 0;
}
