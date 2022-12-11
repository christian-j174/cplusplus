 
#include <iostream>
#include <cmath>
using namespace std;




class Fraction{
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

        int percentage(){
            return (getNumerator() / getDenominator()) * 100;

        }

        Fraction addInverseOf(Fraction f2){
            float num, dem = 0;
            num = (this->getDenominator() * f2.getDenominator()) + (this->getNumerator() * f2.getNumerator());
            dem = this->getDenominator() * f2.getNumerator();

            return Fraction(num, dem);
        }

        Fraction squareRoot(){
            return Fraction(sqrt(getNumerator()), sqrt(getDenominator()));
        }

        Fraction divide(Fraction f2){
            float num, dem = 0;
            num = this->getNumerator() * f2.getDenominator();
            dem = this->getDenominator() * f2.getNumerator();
            return Fraction(num, dem);
        }

        Fraction powerOf(int n){return Fraction(pow(getNumerator(), n), pow(getDenominator(), n)); }

};


class Point2D {
    private:
        double x; 
        double y;   

    public:     
        Point2D(){
            x = 0.0;
            y = 0.0;
        }

        Point2D(double x1, double y1){
            this->setX(x1);
            this->setY(y1);
        }
        
        // Setters
        void setX(double x2){x = x2;}
        void setY(double y2){y = y2;}

        // Getters 
        double getX() const {return x;}
        double getY() const {return y;}

        double distance(Point2D p2){
            double deltaX = p2.getX() - this->getX();
            double deltaY = p2.getY() - this->getY();
            return sqrt(deltaX * deltaX + deltaY * deltaY);
        } 
};


class Triangle {
    private:
        Point2D point1;
        Point2D point2;
        Point2D point3;
    
    public:

        Triangle(Point2D p1, Point2D p2, Point2D p3) {
            point1 = p1;
            point2 = p2;
            point3 = p3;
        }

        Triangle(const Triangle &t2){
            point1 = t2.getP1();
            point2 = t2.getP2();
            point3 = t2.getP3();   
        }

        // Getters
        Point2D getP1() const { return point1; }
        Point2D getP2() const { return point2; }
        Point2D getP3() const { return point3; }

        double getSideALength(){return getP1().distance(getP2()); }

        double getSideBLength(){ return getP2().distance(getP3()); }

        double getSideCLength(){return getP3().distance(getP1()); }

        double perimeter() {return getSideALength()+ getSideBLength()+ getSideCLength(); }

        double area() {
            double a,b,c,s, result = 0;
            a = getSideALength();
            b = getSideBLength();
            c = getSideCLength();
            s = (a + b + c) / 2;
            result = sqrt(s * (s -a) * (s -b) * (s - c));
            return result;
        }
    
        Triangle multiply(double k) {
            Point2D p1,p2,p3;
            p1.setX(this->getP1().getX() * k);
            p1.setY(this->getP1().getY() * k);

            p2.setX(this->getP2().getX() * k);
            p2.setY(this->getP2().getY() * k);

            p3.setX(this->getP3().getX() * k);
            p3.setY(this->getP3().getY() * k);

            return Triangle(p1,p2,p3);
        }

        string findType() {
            double a,b,c,s, result = 0;
            a = pow(getSideALength(), 2);
            b = pow(getSideBLength(), 2);
            c = pow(getSideCLength(), 2);

            if(a + b > c)return "Acute";
            else if(a + b == c) return "Right";
            return "Obtuse";
        }

};



int main(){
    cout << "CREATE AN FRACTION OR TRIANGLE" << endl;
    return 0;
}