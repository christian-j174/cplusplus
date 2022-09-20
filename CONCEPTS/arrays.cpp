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

int main(){
    displayPlanets();
    return 0;
}

