#include <iostream>
#include <cmath>
using namespace std;

void radius(double x1, double y1, double xCenter, double yCenter);
void maxRoundedValue(double first, double second);
void degreeAngleCosine (double d);

int main() {

    radius(14.25, 13.68, 25.678, 10.32547);
    maxRoundedValue(12.445, 5.112);
    degreeAngleCosine(30);

    return 0;
}

// ONLY COPY & PASTE THE SPECIFIC METHOD AS YOUR ANSWER

/* It computes the radius r of a circle. Using functions from the Math Library 
  complete the function that computes the radius of a circle  using the 
  formula  r^2=(x-h)^2 +(y-k)^2  (see formula in moodle for reference), 
  given the (x,y) coordinates of one point on its circumference and 
  the (h,k) coordinates of its center.
 */
void radius(double x1, double y1, double xCenter, double yCenter) {
    
    double result = 0;
    double radius = pow((x1- xCenter), 2) + pow((y1- yCenter), 2);
    result = sqrt(radius);
    cout << "The radius is: " << result << endl;
};

/* This function prints the biggest value of two values.
  But first you need to round down the first argument and round up the second one. 
 */
// ONLY COPY & PASTE THE FOLLOWING METHOD AS YOUR ANSWER 
void maxRoundedValue(double first, double second) {
    // first round the arguments
    first = floor(first);
    second = ceil(second);
    // IDENTIFY WICH IS GREATHER
    if(first > second)
    {cout << "The maximum rounded value is: " << first << endl;}
    else
    {cout << "The maximum rounded value is: " << second << endl;}
}
/* It prints the cosine of the angle given d, note that d is 
  given in degrees and that you might want to turn it into radians 
  for it to be useful.
  HINT: The value of pi is given as a variable in the starter code. 
        The equation from degrees to radian is : x radians = (d degreees)* pi/180
*/
void degreeAngleCosine (double d) {
    double pi = 2*acos(0.0);
    cout << "YOUR CODE HERE" << endl;
    
};

