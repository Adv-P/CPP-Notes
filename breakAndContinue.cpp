#include <iostream>

int main(){

    //break =break out of the loop
    //continue = skip current iteration

    for(int i=1; i <= 20; i++){
        if(i==12){
            break;
        }
        std::cout << i << '\n';
    }

    for(int f = 1; f <=20; f+=1){
        if(f=10){
            continue;
        }
        std::cout << f << '\n';
    }
}