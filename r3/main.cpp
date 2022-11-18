#include <iostream>
#include <vector>

using namespace std;


class A {
    int x,y,z;

    void foo(){
        //
    }
    
    virtual int appreaise() = 0;

    int getPrice()
};




class B : public A {
    int i;
    void maya(){}
    int appraise() {return 1000;}
};

class C : public A{
    int j;
    void bar(){}
    int appraise() {return 2000;}
};


int main() {
    return 0;
}