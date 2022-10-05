#include<iostream>
#include<cmath>
using namespace std;


/*
DIBUJAR UN TRIANGULO RECTANGULO
example:
@
@@
@@@
@@@@
@@@@@
*/


void rectangleTriangle(int base) {
    for (int i = 0; i < base; i++) {
        cout << char(char(i) * char('@')) << endl;
    }
}

void rectangle(int base, int height) {
    for(int i=0; i <height; i++) {
        for(int j=0; j < base; j++) {
            cout << "* ";
        }
    cout << endl;
    }
}


int main() {
    rectangle(2, 2);
    //rectangleTriangle(5);
    return 0;
    }