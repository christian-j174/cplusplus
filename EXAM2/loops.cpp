#include <iostream>
#include <string>
#include <vector>
using namespace std;


// void show(string[] x) {
//     cout << l1[0] << " " << endl;
// }

int main(){
    //string names[] = {"chris", "chris1", "chris2", "chris3", "chris4"};
    string names1[] = {"chris11", "chris12", "chris2", "chris3", "chris4"};
    int counter = 0;
    vector<int> numbers (5, 10);
    vector<string> names (3);

    // add names to vector using a for each loop

    for(string &name: names) {
        cout << "Enter name: " << endl;
        cin >> name;
    }

    // display names

    for(string name: names) {
        cout << name << " ";
    }


    // USSE A FOR EACH LOOP 
    // for(int i: numbers){
    //     cout << i << " ";
    // }



    // mostrar las parejas juntas de ambas listas
    // for(int i =0; i <5; i++) {
    //     for(int j = 0; j < 5; j++) {
    //         counter++;
    //         //cout << "(" << names[i] << "," << names[j] << ") " << endl;
    //     }
    // }


// Testing para interlace elements 
    // for(int i =0; i <5; i++) {
    //     for(int j = 0; j < 5; j++) {
    //         cout << i << " " << j << endl;
    //         //cout << "(" << names[i] << "," << names[j] << ") " << endl;
    //     }
    // }
    // //cout << counter << endl;
    return 0;
}