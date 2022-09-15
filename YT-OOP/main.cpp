#include <iostream>
using namespace std;

//private, public, protected

//behaviors vs properties

class Employee {
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
    employee1.setAge(119);
    cout << employee1.getName() << endl;
    cout << employee1.getAge() << endl;
    return 0;
}