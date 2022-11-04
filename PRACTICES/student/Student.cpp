#include "Student.h"

using namespace std;

/*
* EXERCISE: #1A
*
* IMPLEMENT USING AN ENHANCED FOR LOOP (ForEach).
*
* Returns the highest GPA value possessed by any Student in the given list.
*  
*/
double Student::maxStudentGPA(vector<Student>& v)
{
    float gpa = 0;
    for(Student stu : v){
        if(gpa < stu.getGPA()){
            gpa = stu.getGPA();
        }
    }
    return gpa;
}

/*
* EXERCISE: #1B
*
* IMPLEMENT USING A REGULAR FOR LOOP.
*
* Returns the lowest GPA value possessed by any Student in the given list.
*
*/
double Student::minStudentGPA(vector<Student>& v)
{
    //YOUR CODE HERE
    
    return -99.9; //DUMMY RETURN
}

/* 
* Exercise #1C
*
* IMPLEMENT USING A WHILE LOOP
*
* For the first N students, calculate the average gpa
* 
* Formula: average = sum / N
*    Assume N is greater than 0
*/
double Student::averageGPA(vector<Student> &v, int N){
    
    //YOUR CODE HERE
    
    return -99.9; //DUMMY RETURN
}

/**
 * 
* EXERCISE #2
* 
* IMPLEMENT IT USING AN ENHANCED FOR LOOP (ForEach)
*
* Given a course code, you must return a vector that contains 
* only the unique ID of the Students that have that particular course code.
*/
vector<long> Student::countStudents(vector<Student>& v, string code){
    vector<long> result;

    //YOUR CODE HERE

    return result;
}

/*
* EXERCISE #3
* 
* IMPLEMENT USING A DO...WHILE LOOP
* 
* Return a vector that contains all the Students that have a GPA greater
* or equal to the GPA passed as the parameter
* 
* Assume the list contains at least one element
*/
vector<Student> Student::findStudents(vector<Student>& v, float gpa){

    //YOU CODE HERE

    return v;
}

/*
* EXERCISE: #4
*
* IMPLEMENT WITH ANY LOOP
*
* Removes the first occurrence of the specified Student ID,
* if it is present. If not present, then list is unchanged.
*
* HINT: Verify the methods erase() and begin() of the vector
*/
void Student::removeByID(vector<Student> &v, long ID){

    //YOUR CODE HERE
}

/*
* EXERCISE #5
* 
* DO NOT USE WHILE LOOPS
*
* Find the Student record that matches the given Student
* and update its data. If the Student is not present, add it to the list.
* 
* Remember that each Student has an unique identifier
*/
void Student::updateStudent(vector<Student> &v, const Student &s){

    //YOUR CODE HERE

}

/*
* BONUS
*
* IMPLEMENT WITH NESTED LOOPS USING ANY LOOP.
*
* Returns a vector cointaining two Students that has the same name.
* If there is no repeated names, the vector stays empty.
* 
* HINT: Use the compare method of the string library
*/
vector<Student> Student::repeatedStudentNames(vector<Student>& v){

    //YOUR CODE HERE

    return v;
}
