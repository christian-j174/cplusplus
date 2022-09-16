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

        Triangle::Triangle(const Triangle &t2) {
            point1 = t2.point1;
            point2 = t2.point2;
            point3 = t2.point3;
        }

        // Getters
        Point2D getP1() const { return point1; }
        Point2D getP2() const { return point2; }
        Point2D getP3() const { return point3; }

        Triangle Triangle::multiply(double k) {
            double p1X = (point1.getX() * k);
            double p1Y = (point1.getY() * k);
            
            double p2X = (point2.getX() * k);
            double p2Y = (point2.getY() * k);
            
            double p3X = (point3.getX() * k);
            double p3Y = (point3.getY() * k);
            
            Point2D np1 = Point2D(p1X,p1Y);
            Point2D np2 = Point2D(p2X,p2Y);
            Point2D np3 = Point2D(p3X,p3Y);
            
            return Triangle(np1,np2,np3);
        }

        double Triangle::getSideALength(){
            double result = point1.distance(point2);
            return result;
        }
        double Triangle::getSideBLength(){
            double result = point2.distance(point3);
            return result;
        }

        double Triangle::getSideCLength(){
            double result = point3.distance(point1);
            return result;
        }

        Triangle::Triangle(const Triangle &t2) {
            point1 = t2.point1;
            point2 = t2.point2;
            point3 = t2.point3;
        }


        double Triangle::perimeter() {
            double perimeter = getSideALength() + getSideBLength() + getSideCLength();
            return perimeter;  
        }

        double Triangle::area() {
            double s = (getSideALength() + getSideBLength() + getSideCLength()) / 2; 
            double area = sqrt(s * (s - getSideALength()) * (s - getSideBLength()) * (s - getSideCLength()));
            return area;
        }

        string Triangle::findType() {
            string m;
            double a = getSideALength();
            double b = getSideBLength();
            double c = getSideCLength();
            if(pow(a,2) + pow(b,2) > pow(c, 2)){
                m = "Acute";
            } else if(pow(a,2) + pow(b,2) == pow(c,2)){
                m = "Right";
            }else if(pow(a,2) + pow(b,2) < pow(c,2)){
                m = "Obtuse";
            }
            
            return m;
        }


        string Triangle::findType() {
            string m;
            double a = getSideALength();
            double b = getSideBLength();
            double c = getSideCLength();
            if(pow(a,2) + pow(b,2) > pow(c, 2)){
                m = "Acute";
            } else if(pow(a,2) + pow(b,2) == pow(c,2)){
                m = "Right";
            }else if(pow(a,2) + pow(b,2) < pow(c,2)){
                m = "Obtuse";
            }
            
            return m;
        }

};


int main(){
    cout << "COPY/TRY TEST CASES HERE" << endl;
    return 0;
}