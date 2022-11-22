#include "Fraction.h"

/*
* Return a NEW fraction representing the addition of the target fraction and the inverse
* of the argument fraction. The resulting fraction may not be expressed in minimal terms.
* You must create a NEW fraction object and use getNumerator & getDenominator.
*
* NOTE: The display of the results are already handled by the test cases. 
* You just need to return the new Fraction.
*/
Fraction Fraction::addInverseOf(Fraction f2)
{
    int Nnumerator = (this->getNumerator() * f2.getNumerator()) + (this->getDenominator()*f2.getDenominator());
    int Ndenominator = (this->getDenominator() * f2.getNumerator());
    return Fraction(Nnumerator, Ndenominator);
}



/*
* Return a NEW fraction representing the division of the target fraction
* by the argument fraction.  Remember that a/b divided by c/d is equivalent
* to a/b times d/c.  The resulting fraction may not be expressed in minimal
* terms. You must create a NEW fraction object and able to use getNumerator 
* and getDenominator for the tests.
*
* NOTE: The display of the results are already handled by the test cases. 
* You just need to return the new Fraction.
*/


Fraction Fraction::divide(Fraction f2)
{
    int n1 = (this->getNumerator() * f2.getDenominator());
    int d1 = (this->getDenominator() * f2.getNumerator());

    return Fraction(n1, d1);
}