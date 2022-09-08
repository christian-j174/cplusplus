#include<iostream>
using namespace std;


class Example {
    private:
        int id;
        string name;

    public:
        //Default constructor
        Example(){
            cout << "Default constructor called" << endl;
            this -> id = -1;
            this -> name = "N/A";
        }

        //Parameterized constructor
        Example(int ID, string NAME){
            cout << "Parameterized constructor called" << endl;
            this -> id = ID;
            this -> name = NAME;
        }

        //GETTERS AND SETTERS FOR THIS EXAMPLE
        void setID(int ID) {
            this -> id = ID;
        }

        int getID(int ID) {
            return this->id;
        }

        void setName(int NAME) {
            this -> name = NAME;
        }

        string getName(){
            return this->name;
        }

        //print ID is defined inside class definition
        void printID(){
            cout << "ID of example is:" << this->id;
        }

        void printName();
};

// definition of prontName outside of class using scope resolution
void Example::printName() {
    cout << "Name of example is:" << this->name << endl;
}



int main(){
    Example obj1();
    //Example obj2(125, "xyz");
    return 0;
}