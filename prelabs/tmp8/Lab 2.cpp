#include<iostream>
using namespace std;

void practiceCharMethod1(char c);
void practiceCharMethod2(char c);
void practiceCharMethod3(char c);
void practiceCharMethod4(char c);

int main()
{
  practiceCharMethod1('f'); // Test with different characters
  
  practiceCharMethod2('%'); // Test with different characters
  
  practiceCharMethod3('L'); // Test withn different characters
  
  practiceCharMethod4('a'); // Test with different characters
  
  return 0;
}

// ONLY COPY & PASTE THE SPECIFIC METHOD AS YOUR ANSWER

/* The function must print the inverse capitalization of the character passed as an argument */
  
void practiceCharMethod1(char character)
{
 
    int result = 0;
    
  if(isupper(character)){
    result =tolower(character); // pendiente de añadir result; no solo assign upper and lower
  }
  else{
    result =toupper(character);
  }
    
    cout << "Inverse Capitalization: " << (char) result << endl;
}
  
/* Print only digits or alphanumeric characters. If other print "none". */
  
void practiceCharMethod2(char character)

{
 
  if (isdigit(character) || isalpha(character)){// leer instruccion y verificar operador. Salio erro al ser &&
    cout << "The character is: "<< character <<endl;
  }
  else {
    cout <<"The character is: none"<<endl;
  }

    
}
  
/* You will need to verify the character passed as an argument. 
  Some times it can only be a space or a punctuation character. Validate it before using it. 
  If the character is other than a space or a punctuation, then it is okay to use it.
*/
  
void practiceCharMethod3(char character)
{
  bool okToUse = !ispunct(character)&&!isspace(character);

    
  //YOUR CODE GOES HERE
    
  cout << (okToUse ? "Character is valid" : "Character is not valid") << endl;
}
  
/* You will need to verify if the character passed as an argument is equal to 'x', 'y', or 'z'
  and if so, print "last three letters". 
  It must be CASE INSENSITIVE, so if 'X', 'Y' or 'Z' is given, it must also print "last three letters". Otherwise you must print "none".
*/
  
void practiceCharMethod4(char character)
{
  if(character == 'x'|| character == 'y'||character == 'z'){
    cout<< "last three letters"<<endl;
  }
  else if(character == 'X'|| character == 'Y'||character == 'Z'){
    cout<< "last three letters"<<endl;

  }
  else{
      cout << "none" << endl;
  }
  //recordar que un signo de igualda asigna y dos verifican
  
  
}

