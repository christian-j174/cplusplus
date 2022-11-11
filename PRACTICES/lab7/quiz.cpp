#include <iostream>
#include <vector>


using namespace std;

class A {
public:
virtual void foo() {cout << "A1" << endl;}
virtual void bar() {cout << "A2" << endl;}
};


class B : public A {
    void foo() {cout << "B1" << endl;}
    void bar() {cout << "B2" << endl;}

};


class Foo {
    public:
    Foo() {}
};

class Bar : public Foo {
    public:
    Bar() : Foo() {}
};



int main() {
    // Foo f = Bar();
    // //Bar b = Foo(); MALA
    // Foo *f = new Bar();
    // //Bar *b = new Foo(); MALA

    // vector<A> vec{A(), B()};
    // vec[0].bar(); // A
    // vec[1].bar(); //B
}

/*
observacion para problema 2
identificar que opcion va ocasionar un error 

lo que veo es que no puedes usar constructors si estan 
en una jerarquia mayor, pero si estan por debajo si. 

En algunos casos puedes hacer inheritance y los members 
del child class lo puede usar la superclase pero no alreves

*/

/**
 observacion para el primer problema 
 el metodo que ocurre es el que esta relacionado al datatype del vector
 * 
 */