#include <iostream>

int main(){
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    // .length() = How many charecters in a string
    //name.length() > 8 ? std::cout << "Your name is too long!\n" : std::cout << "Your name is perfect!\n";

    // .empty = If a string is empty or not
    //name.empty() ? std::cout << "You didn't enter a name\n" : std::cout << "Hello " << name << '\n';

    // .clear = Clears a string
    //name.clear();
    //std::cout << "Hello" << name << '\n';

    // .append = Adds something to a list, string, and other data set
    //name.append("@outlook.com");
    //std::cout << "Your email is: " << name << '\n';

    // .at = Returns a charecter at a given string
    //std::cout << name.at(0) << '\n';

    // .insert = Add a charecter to a specific place in string (index, string)
    //name.insert(0,"@");
    //std::cout << name << '\n';

    // .find = Find any specific charecter (first)
    //std::cout << name.find(" ") << '\n';

    // .erase = Removes a specific/specified charecters (staring index, ending index)
    name.erase(0,3);
    std::cout << name << '\n';

    return 0;
}