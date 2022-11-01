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

double result =0;
for(Student s: v){
    if(s.getGPA()>result){
        result =s.getGPA();
    }

}
        
        


    return result; 
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
    double result = 8.0;//no se puede inicialiar a menor que 0. escoge un valor mucho mayor
    for(int i=0;i<v.size();i++)
    {
        if(v[i].getGPA()<result){
            result = v[i].getGPA();
        }

    }
    return result;
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
    int i =0;
    double sum = 0;
    while(i<N){
        sum +=v[i].getGPA();
        i++;
    }
    double avg = sum/N;
    return avg;

  int i=0;
   double sum=0;   
   while(i<N)     //only use N not size and sum must be double   
   {
       sum=sum+v[i].gpa;  
       i++;               
   }
   double avg = sum/N;
   return avg; 
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

    for(Student s: v){
        if(s.getCourseCode()==code) //si sq quiere devolver un vecor se utiliza pushback
        result.push_back(s.getID());
    }

    return result;
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
vector<Student> Student::findStudents(vector<Student>& v, float gpa){
    
    vector<Student> result; //se añadio esta parte
    int i =0;//se necesita el iterador
    //se crea un nuevo vector result al que le añades cada v[i] que sea mayor igual
    do{
        if(v[i].getGPA() >=gpa){
            result.push_back(v[i]);
        }
        i++;//aumentar
    }
    
    while(i<v.size());
    return result;

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

for(int i=0;i<v.size();i++){//se neceita la pos por eso un for 
    if(v[i].getID()==ID){
        v.erase(v.begin()+i);//se le suma el begin la pos
        break;
    }
}

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

        int found = 0;
        for(int i = 0;i < v.size();i++){
            if(v[i].id == s.id)
        {
            v[i]=s;

            found = 1;
            break;
        }
    }
        if(found == 0)
        v.push_back(s);
        
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

  vector<Student>result;
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v.size();i++){
        string s1 = v[i].name;
        string s2 = v[j].name;

        if(s1.compare(s2) == 0)
        {
            result.push_back(s1);
            result.push_back(s2);
            break;
        }
    }
}

        return result;

}
