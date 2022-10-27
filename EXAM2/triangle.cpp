#include<iostream>
#include<string>
#include<cmath>

using namespace std;

/*
  Base class Point2D represents a point in two dimensional space
*/
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

        /*
        *   Returns the distance of the target object and the parameter Point2D p2.
        */
        double distance(Point2D p2){
            double deltaX = p2.getX() - this->getX();
            double deltaY = p2.getY() - this->getY();
            return sqrt(deltaX * deltaX + deltaY * deltaY);
        } 
};


/*
  Triangle class without side lengths methods implemented
*/
class Triangle {
    private:
        Point2D point1;
        Point2D point2;
        Point2D point3;
    
    public:

        /*
        * Constructs a Triangle object with the given parameters
        */
        Triangle(Point2D p1, Point2D p2, Point2D p3) {
            point1 = p1;
            point2 = p2;
            point3 = p3;
        }

        /*
        * Constructs a Triangle object with the same properties (points)
        * as the parameter Triangle, e.g. copies the target Triangle.
        */
        Triangle(const Triangle &t2);

        // Getters
        Point2D getP1() const { return point1; }
        Point2D getP2() const { return point2; }
        Point2D getP3() const { return point3; }

        /*
        * Returns the perimeter of the target Triangle object
        * The perimeter is the sum of the lengths of the sides
        * HINT: Check for useful methods in the Point2D class
        */
        double perimeter();
        
        /*
        * Returns the area of the target Triangle object
        * HINT: Use Heron's formula of area using 3 sides
        */
        double area();
        
        /* 
        * Return a NEW Triangle that represents the multiplication of the target
        * Triangle by k units all around.
        */
        Triangle multiply(double k);
        
        /*
        * Return the String equilateral, isosceles or scalene depending
        * on the similarity of the sides of the triangle given.
        */
        std::string findType();

        /*
        * Return length of side A of triangle, distance from P1 -> P2
        */
        double getSideALength();

        /*
        * Return length of side B of triangle, distance from P2 -> P3
        */
        double getSideBLength();

        /*
        * Return length of side C of triangle, distance from P3 -> P1
        */
        double getSideCLength();
};

/*
* Constructs a Triangle object with the same properties (points)
* as the parameter Triangle, e.g. copies the target Triangle.
*/
Triangle::Triangle(const Triangle &t2) {
    // YOUR CODE HERE

}


/*
* Returns the perimeter of the target Triangle object
* The perimeter is the sum of the lengths of the sides
* HINT: You may assume that the functions: getSideALength(), 
* getSideBLength() and getSideCLength() are available for use 
* for this question.
*/
double Triangle::perimeter() {
    // YOUR CODE HERE
    return 0.0;  
}


/*
* Returns the area of the target Triangle object
* HINT 1: Use Heron's formula of area using 3 sides
* HINT 2: You may assume that the functions: getSideALength(), 
* getSideBLength() and getSideCLength() are available for use 
* for this question.
*/
double Triangle::area() {
    // YOUR CODE HERE
    return 0.0;
}


/* 
* Return a NEW Triangle that represents the multiplication of the target
* Triangle by k units all around.
*/
// Triangle Triangle::multiply(double k) {
//     // YOUR CODE HERE
//     return -1; // Dummy return
// }

/*
* Return the String "Acute", "Obtuse" or "Right" depending
* on the sides of the triangle given. You may assume that getSideALength(), 
* getSideBLength(), and getSideCLength() are implemented.
*/
string Triangle::findType() {
    // YOUR CODE HERE
    return ""; // Dummy return
}



/*
* Return length of side A of triangle, distance from P1 -> P2
*/
double Triangle::getSideALength(){
    // YOUR CODE HERE
    return 0.0;
}


/*
* Return length of side B of triangle, distance from P2 -> P3
*/
double Triangle::getSideBLength(){
    // YOUR CODE HERE
    return 0.0;
}


/*
* Return length of side C of triangle, distance from P3 -> P1
*/
double Triangle::getSideCLength(){
    // YOUR CODE HERE
    return 0.0;
}


int main()
{
    cout << "COPY/TRY TEST CASES HERE" << endl;

    return 0;
}


/*
Triangle::Triangle(const Triangle &t2) {
    point1 = t2.getP1();
    point2 = t2.getP2();
    point3 = t2.getP3();
}

double Triangle::getSideALength(){
    return getP1().distance(getP2());
}



double Triangle::getSideBLength(){
    return getP2().distance(getP3());
}

double Triangle::getSideCLength(){
    return getP3().distance(getP1());
}

double Triangle::perimeter() {
    return getSideALength() + getSideBLength() + getSideCLength(); 
}


double Triangle::area() {
    double s = (getSideALength() + getSideBLength() + getSideCLength()) / 2;
    double area = s * (s - getSideALength()) * (s - getSideBLength()) * (s-getSideCLength());
    area = sqrt(area);
    return area;
}

Triangle Triangle::multiply(double k) {
    double xx1 = this->getP1().getX() * k;
    double yy1 = this->getP1().getY() * k;

    double xx2 = this->getP2().getX() * k;
    double yy2 = this->getP2().getY() * k;

    double xx3 = this->getP3().getX() * k;
    double yy3 = this->getP3().getY() * k;

    return Triangle(Point2D(xx1,yy1), Point2D(xx2,yy2), Point2D(xx3,yy3));
}



string Triangle::findType() {
    double a,b,c;
    a = pow(getSideALength(),2);
    b = pow(getSideBLength(),2);
    c = pow(getSideCLength(),2);
    
    if(a + b > c){return "Acute";}
    else if(a + b == c){return "Right";}
    else{return "Obtuse";}

}


*/