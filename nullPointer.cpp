#include <iostream>

int main(){

    //Null Value = a special value that means something has no value
    //             When a pointer is holding null value that means the pointer is not pointing to anything (null pointer)

    //nullptr = keyword that represents a null pointer literal

    //nullptr are helpful when determing if an adress  was sucessufully assigned to the pointer


    int *pointer = nullptr;
    int x = 123;

    pointer = &x;

    if(pointer = nullptr){
        std::cout << "address was not assigned\n";
    }
    else{
        std::cout << "address was  assigned\n";
    }
    


    return 0;
}