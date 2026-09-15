#include <iostream>

int main(){


    // fill = Fills a range of elements with a specified value
        // fill(begin, end, value)

    const int size = 150;
    std::string food[size];

    fill(food, food + (size/3), "Pizza");
    fill(food + (size/3), food + 2*(size/3), "coke");
    fill(food + 2*(size/3), food + 3*(size/3), "hot-dogs");
    for(std::string foods:food){
        std::cout << foods << '\n';
    }

    return 0;
}