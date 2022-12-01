#include <iostream>
#
using namespace std;



bool linearSearch(int arg1[], int size, int key){
    for(unsigned int i = 0; i < size; i++)
        if(arg1[i] == key) return true;
    return false;
}

int binarySearch(){};

int bubbleSort(){};

int SelectionSort(){};

int insertionSort(){};

int mergeSort(){};





int main(){
    const int SIZE = 5;
    int ages1[SIZE] = {0,1,2,3,4}; 
    cout << linearSearch(ages1, SIZE, 2);
    return 0;
}