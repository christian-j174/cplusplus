#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void foo(){
    cout << "TESTING 101 ";
}

/*
contar regresivamente hasta llegar a cero,
y mostrar blastoff
*/

void recCountDown(int n){
    if(n==0) cout << "BlastOff" << endl;
    else {
        cout << n << endl;
        recCountDown(n -1);
    }
}

void recCountDown1(int n){
    if(n==0)
        cout << "BlastOff";
    else {
        cout << n << "...\n";
        recCountDown(n -1);
        
    }
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

int pascal(int row, int col) {
  if (col == 0 || col == row) return 1;
  else if(col == 1 || (col + 1) == row) return row;
  else return pascal(row - 1, col - 1) + pascal(row - 1, col);
}

int gcd(int x, int y){
    if(x % y == 0)
    return y;
    else{
        return gcd(y, x % y);
    }
}

int fact(int n){
    if(n == 0)
    return 1;
    else{
        return n * fact(n-1);
    }
}



float binToDecimalH(int bin, int index) {
    if(bin/10 ==0) return bin * pow(2, index);
    return bin %10 * pow(2, index) + binToDecimalH(bin/10,index+1);
}



float binToDecimal(int num) {
    return binToDecimalH(num, 0);
}