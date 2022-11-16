#include <iostream>
#include <vector>
using namespace std;

void foo(){
    cout << "TESTING 101 ";
}



long recFactorial(long number){
    if (number <= 1) return 1;
    return number * recFactorial(number - 1);
}

// EJEMPLO DE SUMAR LOS ELEMENTOS DE UN ARREGLO 

// Given a vector of integers return the sum of its elements

int vectorSum(vector<int> v){
    int result = 0;
    for(int i : v){
        result += i;
    }

    return result;
}

