#include "Student.h"

using namespace std;


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
    cout << "Maximum GPA: " << Student::maxStudentGPA(testVector1) << endl;

    // cout << "\n----Exercise #1B----" << endl;
    // cout << "Minimum GPA: " << Student::minStudentGPA(testVector1) << endl;

    // cout << "\n----Exercise #1C----" << endl;
    // cout << "Average GPA of N Students: " << Student::averageGPA(testVector1, 2) << endl;

    // cout << "\n----Exercise #2----" << endl;
    // vector<long> result =  Student::countStudents(testVector2, "ICOM");
    // cout << "ID of Students with code: " << Student::toString(result) << endl;

    // cout << "\n----Exercise #3----" << endl;
    // vector<Student> temp = Student::findStudents(testVector2, 3.50);
    // cout << "Students with a high GPA: " << Student::toString(temp) << endl;

    // cout << "\n----Exercise #4----" << endl;
    // cout << "Before removing ID: " << Student::toString(testVector2) << endl;
    // Student::removeByID(testVector2, 5l);
    // cout << "After removing: " << Student::toString(testVector2) << endl;

    // cout << "\n----Exercise #5----" << endl;
    // Student temp1(6, "Mariela", FEMALE, 2.3);
    // cout << "Before Updating: " << Student::toString(testVector1) << endl;
    // Student::updateStudent(testVector1, temp1);
    // cout << "After Updating: " << Student::toString(testVector1) << endl;

    // cout << "\n-------Last Exercise-------" << endl;
    // vector<Student> temp2 = Student::repeatedStudentNames(testVector2);
    // cout << "Students with same name: " << Student::toString(temp2) << endl;
    
}