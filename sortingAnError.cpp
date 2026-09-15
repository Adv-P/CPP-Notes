#include <iostream>
void sort(int array[], int size);


int main(){

    int array[] = {1,5,3,6,9,10,8,4,2,7};
    int size = sizeof(array)/sizeof(array[0]);

    sort(array,size);
   
    for(int element:array){
        std::cout << element << " \n";
    }

    return 0;
}

void sort(int array[], int size){

    int temporary;
    for(int i = 0; i < size -1; i++){
        for(int j = 0; j < size -i -1;j++){
            if(array[j] > array[j+1]){
                temporary = array[j];
                array[j] = array[j+1];
                array[j+1] = temporary;
            }
        }
    }

}