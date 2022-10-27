#include <iostream>
using namespace std;



class Fruit{
public:
   void increasePrice(float percentage);
   float getPrice(){return price;}
private:
   float price = 10;
};