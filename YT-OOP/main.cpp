#include <iostream>
using namespace std;

//private, public, protected

//behaviors vs properties

class Employee {
    //here we define members of this class
public:
    string Name;
    string Company;
    int Age;

    void introduceYourSelf() {
        cout << " Name: " << Name << endl;
        cout << " Company: " << Company << endl;
        cout << " Age: " << Age << endl;
    }
    

};




int main(){
    Employee employee1;
    employee1.Name = "Christian";
    employee1.Company = "ChrisTech";
    employee1.Age = 18;
    employee1.introduceYourSelf();
    return 0;
}