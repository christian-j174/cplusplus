#include <iostream>
using namespace std;

int main(){
/** stores the address of a var in a pointer
 */


/* Entonces para definir un pointer
primero creo una variable y el tipo de dato que va almacenar
le pongo un * al final.

Si quiero acceder al valor de esa dirreccion en memoria 
pues cololo el * antes del pointer

y si deseo ver la dirrecion en memoria simplemente 
pones la variable pointer
*/
    int x = 25;
    int* ptr = nullptr;

    ptr = &x;
    cout << "The value in x: is: " << x << endl;
    cout << "The address of x is: " << *ptr << endl;
    return 0;  
}