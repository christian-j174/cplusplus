#include <iostream>

#include "MixedFractionAns.h"

using namespace std;

class Fraction {
   private:
    int numerator;
    int denominator;

   public:
    // Constructors
    Fraction() {
        numerator = 0;
        denominator = 1;
    }
    Fraction(int num, int den) {
        numerator = num;
        denominator = den;
    }
    Fraction(const Fraction& f2) {
        numerator = f2.getNumerator();
        denominator = f2.getDenominator();
    }
    // Getters
    int getNumerator() const { return numerator; }
    int getDenominator() const { return denominator; }

    // Setters
    void setNumerator(int num) { this->numerator = num; }
    void setDenominator(int den) { this->denominator = den; }

    double getNumericalValue() const { return 1.0 * numerator / denominator; }

    Fraction add(const Fraction& f2) const {
        return Fraction(numerator * f2.getDenominator() + f2.getNumerator() * denominator, denominator * f2.getDenominator());
    }
};

class MixedFraction {
   private:
    int integer;
    Fraction fraction;

   public:
    // Constructors
    MixedFraction(int integer, int num, int den);

    MixedFraction(const MixedFraction& mxfr) {
        this->integer = mxfr.getInteger();
        this->fraction = Fraction(mxfr.getFraction().getNumerator(), mxfr.getFraction().getDenominator());
    }
    // Getters
    int getInteger() const { return integer; }
    Fraction getFraction() const { return fraction; }
    void setMixedFraction(int integer, int num, int den);

    Fraction getImproperFraction() const {
        return Fraction(this->fraction.getDenominator() * this->integer + this->fraction.getNumerator(), this->fraction.getDenominator());
    }
    MixedFraction add(const MixedFraction& mf2) const;
    double getNumericalValue() const;
    bool isEquivalentWith(const Fraction& f) const;
    bool isBetweenClosedInterval(double min, double max) const;
    static bool isValidMixedFraction(const MixedFraction& mxfr);
    void reduceFraction();
};

/**
 *
 * EXERCISE #1
 *
 * @brief Implement parameterized constructor of MixedFraction.
 *
 * @param integer
 * @param numerator
 * @param denominator
 * Step 1: Divide the Fraction’s numerator with the denominator, i.e. 15/7.

Step 2: The integer part of the answer will be the integer part for a mixed fraction, i.e. 2 is an integer.

Step 3: The Denominator will be the same as original, i.e 7.


Step 4: So, the improper fraction 15/7 is changed to a Mixed fraction as 2 (1/7)
 */
MixedFraction::MixedFraction(int integer, int num, int den) {
        Fraction
        this->interger =(fraction.getNumerator()/fraction.getDenominator());
        this->num= ((fraction.getNumerator()/fraction.getDenominator())%integer);
        this->fraction(num,den);
  
  

}

/**
 * EXERCISE #2
 *
 * @brief Implement the following setter for target MixedFraction integer,
 * fraction numerator and fraction denominator.
 *
 * @param integer
 * @param numerator
 * @param denominator
 */
void MixedFraction::setMixedFraction(int integer, int num, int den) {
    this->integer= integer;
    this->fraction = Fraction(num,den);
}

/**
 * EXERCISE #3
 *
 * @brief Sum the target MixedFraction and the 2nd MixedFraction
 *
 * HINT: Sum both target and parameter MixedFractions as Improper Fractions,
 *       then convert resulting Fraction into MixedFraction.
 * @param mf2
 * @return (NEW) MixedFraction representing the sum of both target and parameter objects.
 *
 */
MixedFraction MixedFraction::add(const MixedFraction& mf2) const {
    int numera = (this->getNumerator()*mf2.getDenomiator()*+this->getDenominator()*this->getDenominator());
    int deno = =(this->getDenomiator()*mf2.getDenomiator());
    int inte = numera/deno;
    int secnum = inte%2;

    float sum = this->getImproperFraction()+mf2.getImproperFraction();
    float 

    


    return MixedFraction(inte, secnum, deno)
}

/**
 * EXERCISE #4
 *
 * @brief Compute the Numerical Value the target object MixedFraction represents.
 *
 * @return Numerical value as a double.
 */
double MixedFraction::getNumericalValue() const {
  float value = this->getInteger()+ fraction.getNumericalValue();
  return value;
}

/**
 * EXERCISE #5
 *
 * @brief Determine if the target MixedFraction represents the same numeric value as the parameter Fraction
 *
 * @param Fraction f (constant reference)
 * @return true or false
 */
bool MixedFraction::isEquivalentWith(const Fraction& f) const {

    float value1 = this->getInteger()+fraction.getNumericalValue();
    float value2 = f.getNumericalValue();
    if(value1==value2){
        return true;

    }
    else {
        return false;
    }
}

/**
 * EXERCISE #6
 *
 * @brief Determine if the numerical value of the target MixedFraction is in between the interval [min, max]
 *
 * @param min (minimum value)
 * @param max (maximum value)
 * @return true or false
 */
bool MixedFraction::isBetweenClosedInterval(double min, double max) const {
  float value = this->getInteger()+(this->fraction.getNumerator()/this->fraction.getDenominator());


  return value;
  if(value > min && value<max){
    return true;
    }
    else{
        return false;
    }
  

/**
 * EXERCISE #7
 *
 * @brief Determine if the parameter is a valid MixedFraction.
 *        A valid MixedFraction has an integer greater than 0 and a Proper Fraction a/b where a<b.
 *
 * @param mxfr
 * @return true or false
 */

bool MixedFraction::isValidMixedFraction(const MixedFraction& mxfr) {
    if(mxfr.getInteger()!=0&&mxfr.getFraction().getNumerator()>mxfr.getFraction().getDenominator()){
        return true;
    }
    else if{
        return false;
    }
}


int gcd(int a, int b) {
    int gcd = 1;
    for (int i = 1; i <= min(a, b); i++)
        if (a % i == 0 && b % i == 0)
            gcd = i;
    return gcd;
}

/**
 * EXERCISE #8
 *
 * Simplify the Fraction property of target MixedFraction.
 *
 * Hint: Use gcd(a, b) given function to modify target object fraction attributes
 * by dividing both numerator and denominator by the greatest common divisor of both numbers.
 *
 **/
void MixedFraction::reduceFraction() {
    // YOUR CODE HERE
}

int main() {
    cout << boolalpha;

    MixedFraction f1(3, 1, 2) /* 7/2 */, f2(1, 1, 4) /* 5/4 */, f3(0, 0, 9) /* 0/9 */;

    MixedFraction addition = f1.add(f2) /* 38/8 = 4(6/8) = 4(3/4)*/,
                  noChange = f1.add(f3) /* 63/18 = 3(9/18) = 3(1/2)*/;
    cout << "---------------TESTING CONSTRUCTOR---------------" << endl;
    cout << f1.getInteger() << ", "
         << f1.getFraction().getNumerator()
         << ", " << f1.getFraction().getDenominator() << endl;

    cout << f2.getInteger() << ", "
         << f2.getFraction().getNumerator()
         << ", " << f2.getFraction().getDenominator() << endl;

    cout << f3.getInteger() << ", "
         << f3.getFraction().getNumerator()
         << ", " << f3.getFraction().getDenominator() << endl;

    cout << "---------------TESTING ADD---------------" << endl;
    cout << addition.getInteger() << ", "
         << addition.getFraction().getNumerator()
         << ", " << addition.getFraction().getDenominator() << endl;

    cout << noChange.getInteger() << ", "
         << noChange.getFraction().getNumerator()
         << ", " << noChange.getFraction().getDenominator() << endl;

    cout << "---------------TESTING NUMERIC VALUE---------------" << endl;
    cout << f1.getNumericalValue() << endl;
    cout << f2.getNumericalValue() << endl;
    cout << f3.getNumericalValue() << endl;
    cout << addition.getNumericalValue() << endl;

    cout << "---------------TESTING ISEQUIVALENTWITH---------------" << endl;
    Fraction sameF1(7, 2);
    cout << f1.isEquivalentWith(sameF1) << endl;
    cout << f1.isEquivalentWith(f1.getImproperFraction()) << endl;
    cout << f1.isEquivalentWith(addition.getImproperFraction()) << endl;

    cout << "---------------TESTING ISBETWEENCLOSEDINTERVAL---------------" << endl;
    cout << f2.isBetweenClosedInterval(1, 2) << endl;
    cout << f2.isBetweenClosedInterval(1.245, 1.255) << endl;
    cout << f2.isBetweenClosedInterval(1.25, 1.25) << endl;
    cout << f2.isBetweenClosedInterval(2, 5) << endl;

    cout << "---------------TESTING ISVALIDMIXEDFRACTION---------------" << endl;
    cout << MixedFraction::isValidMixedFraction(MixedFraction(0, 1, 2)) << endl;
    cout << MixedFraction::isValidMixedFraction(MixedFraction(1, 3, 5)) << endl;
    cout << MixedFraction::isValidMixedFraction(MixedFraction(8, 2, 1)) << endl;
    cout << MixedFraction::isValidMixedFraction(MixedFraction(0, 2, 1)) << endl;
    cout << MixedFraction::isValidMixedFraction(MixedFraction(1, 17, 13)) << endl;
    cout << MixedFraction::isValidMixedFraction(MixedFraction(56, 99, 100)) << endl;

    cout << "---------------TESTING REDUCEFRACTION---------------" << endl;
    MixedFraction b1(1, 5, 10), b2(3, 4, 16), b3(14, 36, 40);
    b1.reduceFraction();
    b2.reduceFraction();
    b3.reduceFraction();
    cout << b1.getFraction().getNumerator() << endl;
    cout << b1.getFraction().getDenominator() << endl;
    cout << b2.getFraction().getNumerator() << endl;
    cout << b2.getFraction().getDenominator() << endl;
    cout << b3.getFraction().getNumerator() << endl;
    cout << b3.getFraction().getDenominator() << endl;
}
  
