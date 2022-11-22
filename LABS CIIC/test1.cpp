/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<cmath>
using namespace std;
/*
first: calculate the sine of the two parameters
second: sum the two sines result 
third:calculate the binary log 
forth: print the three nombers

Functions Names:
sin(), log2()

*/
void sinlog(double number1, double number2){
    
    //PART 1
    double sin1 = sin(number1);
    double sin2 = sin(number2);
    
    //PART 2
    double totalSine = sin1 + sin2;
    
    //PART 3
    double log2Result = log2(totalSine);
    
    //PART 4 
    cout << "The sine of number1 is: " << sin1 << endl;
    cout << "The sine of number2 is: " << sin2 << endl;
    cout << "The binary Logarithm is: " << log2Result << endl;
    
    
}


int main(){
    sinlog(1, 1);
    return 0;
}


