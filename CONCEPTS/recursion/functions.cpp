#include <iostream>
#include <vector>
using namespace std;

void foo(){
    cout << "TESTING 101 ";
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

void countDown(int num){
    if(num == 0){
        cout << "BlastOff";
    }
    else{
        cout << num << "...\n";
        countDown(num-1);
        //
    }
}


// https://online.upr.edu/pluginfile.php/3161750/mod_resource/content/0/Chapter14%20Recursion.pdf