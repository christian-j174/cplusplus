#include <iostream>
using namespace std;

int main() {
// processes an array using pointer notation 
    const int SIZE = 5;
    int numbers[SIZE];
    int count;

    // Get Values
    cout << "Enter " << SIZE << " numbers: ";
    for(count = 0; count < SIZE;count++){
        cin >> *(numbers + count);
    }

    //DISPLAY 
    cout << "NUMBERS THAT YOU ENTERED" <<endl;
    for(count = 0; count < SIZE;count++)
        cout << *(numbers + count) << " ";
    cout << endl;
    return 0;
}


// int main(){
// /** stores the address of a var in a pointer
//  */


// /* Entonces para definir un pointer
// primero creo una variable y el tipo de dato que va almacenar
// le pongo un * al final.

// Si quiero acceder al valor de esa dirreccion en memoria 
// pues cololo el * antes del pointer

// y si deseo ver la dirrecion en memoria simplemente 
// pones la variable pointer
// */
//     int x = 25;
//     int* ptr = nullptr;

//     ptr = &x;
//     cout << "The value in x: is: " << x << endl;
//     cout << "The address of x is: " << *ptr << endl;
//     return 0;  
// }