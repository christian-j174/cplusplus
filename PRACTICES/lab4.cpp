
#include <iostream>
#include <cmath>
using namespace std;
class Fraction
{
private:
    float numerator;
    float denominator;
public:
    Fraction(float num, float den)
    {
        numerator = num;
        denominator = den;
    }
    float getNumerator()
    {
        return numerator;
    }
    float getDenominator()
    {
        return denominator;
    }
    /*
    * Returns the percentage equivalent of the target fraction.
    * HINT: Check the percentage formula. Use the floor method,
    * you may review how the floor works by viewing the API.
    *  Note that the tests expect values that are whole numbers. 
    */
    int Fraction::percentage()
{
	double result = floor((getNumerator()/getDenominator()) *100);
	return result;
}

//     Fraction Fraction::addInverseOf(Fraction f2)
// {
//     int n1 = (this->getNumerator() * f2.getDenominator()) + (this->getNumerator() * f2.getNumerator());
//     int n2 = (this-> getDenominator() * f2.getDenominator());
//     return Fraction(n1, n2);
// }

    Fraction Fraction::squareRoot() 
{
    int n1 = sqrt(this-> getNumerator());
    int n2 = sqrt(this-> getDenominator());
    return Fraction(n1, n2);
}
    Fraction Fraction::divide(Fraction f2){
    float n1 = (this->getNumerator() * f2.getDenominator());
    float n2 = (this->getDenominator() * f2.getNumerator());
    return Fraction(n1, n2);
}

Fraction Fraction::powerOf(int n)
{
    float n1 = pow(this->getNumerator(), n);
    float n2 = pow(this->getDenominator(), n);
    return Fraction(n1,n2);
}

};
