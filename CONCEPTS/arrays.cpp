#include <iostream>
#include <string>
using namespace std;

void displayPlanets(){
    // EJEMPLO PARA MOSTRAR INFO DENTRO DE UN ARRAY
    string planets[] = {"Mercury", "Venus", "Earth", "Mars", "Jupyter", "Saturn", "Uranus", "Neptune", "Pluto (a dwarf planet)"};
    
    // Display the values of the array 
    cout << "Here are the planets:\n";
    for(string val: planets){
        cout << val << endl;
    }
}


void modifyContentArray(){
    const int side = 5;
    int numbers[side];

    //Get values of the array
    for(int &val: numbers){
        cout << "ENTER A INTEGER VALUE: \n";
        cin >> val;
    }

    // DISPLAY the values of the array

    for(int val: numbers){
        cout << "RESULT: " << val << endl;
    }

    /*
TAKEAWAY FROM THIS EXAMPLE:
recuerda que este simbolo-> & se llama ampersand
---------------------------------------------------------------------------
Segundo, tienes que implementarlo en la variable temporal del for loop
para que modifique la referencia y no la copia.

    */
}



int main(){
    //displayPlanets();
    modifyContentArray();
    return 0;
}

