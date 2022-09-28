#include<iostream>
using namespace std;


/*
1. Write a C++ program to compute the sum of the two given integer values.
If the two values are the same, then return triple their sum. Go to the editor
Sample Input
1, 2
3, 2
2, 2
Sample Output:
3
5
12

*/

void problem1(int arg1, int arg2) {
    if(arg1 == arg2){
        cout << (arg1 * 3 + arg2 * 3)  << endl;
    } else {
        cout << (arg1 + arg2) <<endl;
    }
}

int main() {
    problem1(1, 2);
    problem1(3, 2);
    problem1(2, 2);
    return 0;
}