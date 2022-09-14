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
    
    // Constructor 
    Employee(string name, string company, int age) {
        Name = name;
        Company = company;
        Age = age;
    }

};



int main(){
    Employee employee1 = Employee("Chris", "ChrisTech", 18);
    employee1.introduceYourSelf();
    return 0;
}