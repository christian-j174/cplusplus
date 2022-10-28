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
        point1 = t2.point1;//Assing the points to t2
        point2 = t2.point2;
        point3 = t2.point3;

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
        float perimeter =getSideALength()+getSideBLength()+getSideCLength();
        return perimeter;
        
        /*
        * Returns the area of the target Triangle object
        * HINT: Use Heron's formula of area using 3 sides
        */
        double area();
        float per =getSideALength()+getSideBLength()+getSideCLength();
        float s = per/2;

        return sqrt(s(s-getSideALength())(s-getSideBLength())(s-getSideCLength()));
        

        
        /* 
        * Return a NEW Triangle that represents the multiplication of the target
        * Triangle by k units all around.
        */
        Triangle multiply(double k);
        //you need to make new points. to affect the old points you use triangle created p1... 
        Point2D p1(point1.getX()*k, point1.getY()*k);
        Point2D p2(point2.getX()*k, point2.getY()*k);
        Point2D p3(point3.getX()*k, point3.getY()*k); 
        //rememeber triangles have 2d pints with an x and y part so multple both points//
        
        return Triangle(p1,p2,p3);
        
        /*
        * Return the String equilateral, isosceles or scalene depending
        * on the similarity of the sides of the triangle given.
        */
  string Triangle::findType();

    float a = getSideALength();
    float b = getSideBLength();
    float c = getSideCLength();
    float pa = pow(a,2);
    float pb = pow(b,2);
    float pc = pow(c,2);


    if((pa+pb)>pc){
        return "Acute";
        }
        else if( (pa+pb)< c){
            return "Obtuse";
        }
        else{
            return "Right";
        }
}



    /*Return length of side A of triangle, distance from P1 -> P2*/
    double Triangle::getSideALength(){
    double x1 = getP1().getX();
    double x2 = getP2().getX();
    double y1 = getP1().getY();
    double y2 = getP2().getY();
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));

    }


    /*
    * Return length of side B of triangle, distance from P2 -> P3
    */
    double Triangle::getSideBLength(){

    double x1 = getP2().getX();
    double x2 = getP3().getX();
    double y1 = getP2().getY();
    double y2 = getP3().getY();
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));

    }


    /*
    * Return length of side C of triangle, distance from P3 -> P1
    */
    double Triangle::getSideCLength(){

    double x1 = getP3().getX();
    double x2 = getP1().getX();
    double y1 = getP3().getY();
    double y2 = getP1().getY();
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));

    }