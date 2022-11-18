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


int lcm(int a, int b){
    if(b ==0) return 0;
  return (a * b) /gcd(a,b); 
}

int fact(int n){
    if(n == 0)
    return 1;
    else{
        return n * fact(n-1);
    }
}



// ----------------------------------------------------------------

float binToDecimalH(int bin, int index) {
    if(bin/10 ==0) return bin * pow(2, index);
    return bin % 10 * pow(2, index) + binToDecimalH(bin/10,index+1);
}



float binToDecimal(int num) {
    return binToDecimalH(num, 0);
}

//----------------------------------------------------------------

void decToBinary(int n){
    //array to store binary number
    int binaryNum[32];
    //counter for binary array
    int i = 0;
    while(n > 0){
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }

    for(int j = i -1; j >=0; j--){
        cout << binaryNum[j];
    }
}




bool recIsPalindrome(string w) {
    if(w.size() <= 1) return true;
    if (w[0] == w[w.size() - 1]) {
        return recIsPalindrome(w.substr(1,w.size() - 2));
    } else {
        return false;
    }
}






/*
returns the sum up to n, recursively
*/


long recSum(long n){
    if(n==0) return 0;
    else {
        return n + recSum(n - 1);
    }
}



int numChars(char search, string str, int subscript){ 
 if (subscript >= str.length()){ // Base case: The end of the string is reached. 
    return 0; 
 } 

 else if (str[subscript] == search){ 
 // Recursive case: A matching character was found. 
 // Return 1 plus the number of times the search 
 // character appears in the rest of the string. 
    return 1 + numChars(search, str, subscript+1); 
 } else { 
 // Recursive case: A character that does not match the 
 // search character was found. Return the number of times 
 // the search character appears in the rest of the string. 
    return numChars(search, str, subscript+1); 
} 
} 


int fib(int n){
    if(n <= 0) {
        return 0;
    }
    else if( n == 1){
        return 1;
    }
    else {
        return fib(n-1) + fib(n -2);
    }
}


int findMaxRec(int A[], int n)
{
    // if n = 0 means whole array has been traversed
    if (n == 1)
        return A[0];
    return max(A[n-1], findMaxRec(A, n-1));
}

int findMinRec(int A[], int n)
{
    // if size = 0 means whole array has been traversed
    if (n == 1)
        return A[0];
    return min(A[n-1], findMinRec(A, n-1));
}