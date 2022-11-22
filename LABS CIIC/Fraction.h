  
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
    int percentage();
    /*
    * Return a NEW fraction representing the addition of the target fraction and the inverse
    * of the argument fraction. The resulting fraction may not be expressed in minimal terms.
    * You must create a NEW fraction object and use getNumerator & getDenominator.
    */
    Fraction addInverseOf(Fraction f2);
    /*
    * Return a NEW fraction representing the sqrt of the target object.
    * The resulting fraction may not be expressed in minimal terms.
    * You must create a NEW fraction object.
    */

    Fraction squareRoot();
    /*
    * Returns a NEW fraction representing the division of the target fraction
    * by the argument fraction.  Remember that a/b divided by c/d is equivalent
    * to a/b times d/c.  The resulting fraction may not be expressed in minimal
    * terms. You must create a NEW fraction object and able to use getNumerator 
    * and getDenominator for the tests
    */
    Fraction divide(Fraction f2);
    /*
    * Return a NEW fraction representing the power of n of the target fraction.
    * The resulting fraction may not be expressed in minimal terms.
    * You must create a NEW fraction object.
    */
    Fraction powerOf(int n);
};

