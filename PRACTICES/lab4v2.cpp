#include<iostream>
#include<string>
#include<cmath>

using namespace std;

/*
  Base class Point2D represents a point in two dimensional space
*/
class Point2D { // coordenanda
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
        double distance(Point2D p2){ // SIMILAR A LA PENDIENTE , 
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
    point1 = t2.point1;
    point2 = t2.point2;
    point3 = t2.point3;
}



/*
* Returns the perimeter of the target Triangle object
* The perimeter is the sum of the lengths of the sides
* HINT: You may assume that the functions: getSideALength(), 
* getSideBLength() and getSideCLength() are available for use 
* for this question.
*/
double Triangle::perimeter() {
    double perimeter = getSideALength() + getSideBLength() + getSideCLength();
    return perimeter;  
}



/*
* Returns the area of the target Triangle object
* HINT 1: Use Heron's formula of area using 3 sides
* HINT 2: You may assume that the functions: getSideALength(), 
* getSideBLength() and getSideCLength() are available for use 
* for this question.
*/
double Triangle::area() {
    double s = (getSideALength() + getSideBLength() + getSideCLength()) / 2; 
    double area = sqrt(s * (s - getSideALength()) * (s - getSideBLength()) * (s - getSideCLength()));
    return area;
}



/* 
* Return a NEW Triangle that represents the multiplication of the target
* Triangle by k units all around.
*/
// Triangle Triangle::multiply(double k) {
//     int np1 = this->getSideALength() * k;
//     int np2 = this->getSideBLength() * k;
//     int np3 = this->getSideCLength() * k;
//     return Triangle(np1, np2, np3); // Dummy return
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
    double result = point1.distance(point2);
    return result;
}


/*
* Return length of side B of triangle, distance from P2 -> P3
*/
double Triangle::getSideBLength(){
    double result = point2.distance(point3);
    return result;
}

/*
* Return length of side C of triangle, distance from P3 -> P1
*/
double Triangle::getSideCLength(){
    double result = point3.distance(point1);
    return result;
}


int main()
{
    cout << "COPY/TRY TEST CASES HERE" << endl;

    return 0;
}
