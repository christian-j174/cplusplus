#include<iostream>
#include<string>
using namespace std;

void stringPractice1(string password);
void stringPractice2(string name, string department, string college);
void stringPractice3(string twoWords);
void stringPractice4(string word);

int main() {
  stringPractice1("1234");
  stringPractice2("Pedro", "CIIC", "Engineering");
  stringPractice3("Two Words");
  stringPractice4("Vehicle");
  
  return 0;
}

/* The function must verify the length of the string passed as an argument. 
If it is too long (more than 16 characters), or too short (less than 8 characters) it should print 
"password does not meet requirements", otherwise print "none".
*/

void stringPractice1(string password) {
    if(password.length()>16||password.size()<8){
  
  cout << "password does not meet requirements" << endl;
  }
  else{
     cout << "none" << endl;

  }
 
}

/* The function must concatenate the string arguments in order to print a string in the following way:
"Welcome <name> to the <department> department in the College of <college>"
So if the name were "Pedro", the department were "CIIC", and the college were "Engineering", your function would print:
"Welcome Pedro to the CIIC department in the College of Engineering"
*/

void stringPractice2(string name, string department, string college) {
 cout << "Welcome "<<name << " to the " <<department << " department in the College of " <<college << endl;//be mindful of spaces to spearte the strings
}

/* The function must receive the string and replace the space in it with "&"  (you may assume that the string has only one space) and then print the word with the space replaced by "&"
*/

void stringPractice3(string twoWords) {
  for(int i=0;i<twoWords.size();i++){ //remeber to set i = 0.
    if(twoWords[i] == ' '){
        twoWords[i] = '&';
    }
  }
  cout << twoWords << endl;
}

/* This function must erase the first 4 characters of a string, and append "***" at the end of the string.
If given the word is "Vehicle", the result would be: "cle***".
The altered string must be printed.
*/

void stringPractice4(string word) {
  word = word.erase(0,4);
  word = word.append(3,'*');
  cout << word << endl;

  //could also make a var add = * and use(3,*);
}


