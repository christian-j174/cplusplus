#include <iostream>
using namespace std;


class Animal{
    string name;
    int age;
    public:
        Animal(string givenName, int currentAge){
            name = givenName;
            age = currentAge;
        }
    
    string getName(){
        return name;
    }

    int getAge(){
        return age;
    }

    virtual void eat() {
        cout << "Yum!" << endl;
    }

    virtual void greeting() = 0;

};


class Machine {
    string brand;
    int cost;
    public:
        Machine(string brandName, int currentCost){
            brand = brandName;
            cost = currentCost;
        }
    
    virtual void ambientNoise() {
        cout << "Creak Screechh "<< endl;
    }
    virtual void operation() = 0;
    };



class Digger {
    string type;
    int holesDug;
    public:
        Digger(string diggerType){
            type =diggerType;
            holesDug = 0;
        }

        void dig(){
            holesDug ++;
        }

        void cover(){
            if(holesDug > 0){
                holesDug--;
            }
        }

        void currentHoles() {
            cout << "This " << type << "Is responsible for " << holesDug << "hol(s)." << endl;
        }

};



class Dog : public Animal, public Digger {
    public:
        Dog(string givenName, int currentAge) : Animal(givenName, currentAge),
        Digger("Dog") {}
        void greeting() {
            cout << "dogs can't talk >->" << endl;
        }

};


class BackHoe : public Machine, public Digger {
    public:
        BackHoe(string brandName, int currentCost) : Machine(brandName, currentCost) , Digger("BackHoe"){}
        void operation(){
            cout << "You can use this BackHoe to dig" << endl;
        }
};




int main(){
    Dog* goodBoy = new Dog("Rufus", 2);
    BackHoe* metalMonster = new BackHoe("Caterpillar", 150000);

    goodBoy->greeting();
    goodBoy->dig();
    goodBoy->currentHoles();

    metalMonster->operation();
    metalMonster->dig();
    metalMonster->dig();
    metalMonster->currentHoles();


    return 0;
}

