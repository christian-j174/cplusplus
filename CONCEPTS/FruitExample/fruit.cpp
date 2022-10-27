#include "fruit.h"

void Fruit::increasePrice(float percentage)
{
   price *= 1.0 + (percentage / 100);
}

//void Fruit:: setPrice(float sprice){price = sprice;}


int main(){
   Fruit banana;
   cout << banana.getPrice();
   banana.increasePrice(10);
   cout << banana.getPrice();
   return 0;
}