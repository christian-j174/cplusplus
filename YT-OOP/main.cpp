#include <iostream>
using namespace std;

//private, public, protected
//behaviors vs properties

class AbstractEmployee {        // contract with a pure virtual function
    virtual void AskForPromotion()=0;
};


class Employee:AbstractEmployee {
    //here we define members of this class
private:
    string Name;
    string Company;
    int Age;

public:
        // NAME
    void settName(string name) {Name = name;}
    string getName() {return Name;}

        //COMPANY
    void setCompany(string company) {Company = company;} 
    string getCompany(){ return Company; }

        //AGE 
    void setAge(int age) {Age = age;}
    int getAge(){ return Age; }

        // METHODS
    void introduceYourSelf() {
        cout << " Name: " << Name << endl;
        cout << " Company: " << Company << endl;
        cout << " Age: " << Age << endl;
    }

    void AskForPromotion() {
        if(Age > 30) {
            cout << "Got Promoted" << endl;
        } else {
            cout << ", sorry No promotion for you." << endl;
        }
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
    Employee employee2 = Employee("Idamis", "ChrisTech", 50);
    cout << employee1.getName();
    employee1.AskForPromotion();
    cout << employee2.getName() << endl;
    employee2.AskForPromotion();
    return 0;
}