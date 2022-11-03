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
void maxStudentGPA(vector<Student>& v)
{
    float gpa = 0;
    for(Student student : v){
        if(student.getGPA() > gpa){
            gpa = student.getGPA();
        }
    }
    cout << "The highest gpa is: "<< gpa << endl;
}


/*
* EXERCISE: #1B
*
* IMPLEMENT USING A REGULAR FOR LOOP.
*
* Returns the lowest GPA value possessed by any Student in the given list.
*
*/
void minStudentGPA(vector<Student>& v)
{
    double gpa = 4.0;
    for(Student student : v){
        if(student.getGPA() < gpa){
            gpa = student.getGPA();
        }
    }
    cout <<"The lowest gpa was: " << gpa << endl;
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
void averageGPA(vector<Student> &v, int N){
    double avg = 0;
    int acc = 0;
    int NN = N;
    while( N > 0){
        avg += v[acc].getGPA();
        acc++;
        N --;
    }
    // for(int i = 0; i < N; i++){
    //    avg += v[i].getGPA();
    // }
    cout << "The avg is: " << double(avg) / double(NN) << endl;
    
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
void countStudents(vector<Student>& v, string code){
    vector<long> result;
    for(Student student : v){
        if(student.getCourseCode() == code){
            result.push_back(student.getID());
        }
    }

    for(long ids : result){
        cout << ids << endl;
    }
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
void findStudents(vector<Student>& v, float gpa){
    vector<Student> result;
    int size = v.size();
    int i = 0;
    do {
        if(v[i].getGPA() >= gpa){
            result.push_back(v[i]);
        }
        i ++;
        size --;
    }
    while (i < size);

    for(Student s : result){
        cout << s.getName() << endl;
    }
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
void removeByID(vector<Student> &v, long ID){

    cout << v[1].getID() << endl;
    if(v[1].getID() == ID){
        v.erase(v.begin());
    }

    cout << v[1].getName();
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
void updateStudent(vector<Student> &v, const Student &s){
    for(int i=0; i<v.size(); i++){
        if(v[i].getID() == s.getID()){
            v[i] = s;
            return;
    }
    }
    v.push_back(s);
}




int main() {

    Student s1(0, "Bienve", MALE, 3.0);
    Student s2(1, "Jose Juan", MALE, 2.8);
    Student s3(2, "Ana", FEMALE, 3.5);

    Student s4(3, "Ariel", FEMALE,"CIIC", 4.0);
    Student s5(4, "Mulan", FEMALE, "ICOM", 3.56);
    Student s6(5, "Aladdin", MALE, "CIIC", 3.1);

    vector<Student> testVector1{s1, s2, s3};
    vector<Student> testVector2{s4, s5, s6};

    cout << "---------TESTS---------" << endl;

    cout << "\n----Exercise #1A----" << endl;
    maxStudentGPA(testVector1);  // result was 3.5

    cout << "\n----Exercise #1B----" << endl;
    minStudentGPA(testVector1); // result was 2.8


    cout << "\n----Exercise #1C----" << endl;
    averageGPA(testVector1, 2);

    cout << "\n----Exercise #2----" << endl;
    countStudents(testVector2, "ICOM");


    cout << "\n----Exercise #3----" << endl;
    findStudents(testVector2, 3.50);

    cout << "\n----Exercise #4----" << endl;
    removeByID(testVector2, 4l);
    
    cout << "\n----Exercise #5----" << endl;
    Student temp1(6, "Mariela", FEMALE, 2.3);
    cout << testVector1.size() << endl;
    updateStudent(testVector1, temp1);
    cout << testVector1.size() << endl;

    // cout << "\n-------Last Exercise-------" << endl;
    // vector<Student> temp2 = Student::repeatedStudentNames(testVector2);
    // cout << "Students with same name: " << Student::toString(temp2) << endl;
    
}