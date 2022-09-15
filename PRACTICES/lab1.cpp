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
  
  practiceCharMethod3('L'); // Test with different characters
  
  practiceCharMethod4('a'); // Test with different characters
  
  return 0;
}

void practiceCharMethod1(char character)
{
  char result = 0;
  if (!(isalpha(character))){
    cout << "Inverse Capitalization: " << character << endl;
  }
  else if(islower(character)) {
    result = toupper(character);
    cout << "Inverse Capitalization: " << (char) result << endl;
  }
  else if(isupper(character)){
    result = tolower(character);
    cout << "Inverse Capitalization: " << (char) result << endl;}
}


void practiceCharMethod2(char character)
{
    if(isdigit(character) || isalpha(character)){
        cout << "The character is: " << character;
    }
    else{
        cout << "The character is: none" << endl;
    }
    
}

/* You will need to verify the character passed as an argument. 
  Some times it can only be a space or a punctuation character. Validate it before using it. 
  If the character is other than a space or a punctuation, then it is okay to use it.
*/
  
void practiceCharMethod3(char character)
{
  bool okToUse;
  if(isspace(character) || ispunct(character)){okToUse = false;}
  else{okToUse = true;}
  cout << (okToUse ? "Character is valid" : "Character is not valid") << endl;
}
  
/* You will need to verify if the character passed as an argument is equal to 'x', 'y', or 'z'
  and if so, print "last three letters". 
  It must be CASE INSENSITIVE, so if 'X', 'Y' or 'Z' is given, it must also print "last three letters". Otherwise you must print "none".
*/
  
void practiceCharMethod4(char arg1)
{   
    arg1 = tolower(arg1);
    if (arg1 == 'x' || arg1 == 'y' || arg1 == 'z'){       // this can be simplified toby impleting an array and checking
        cout << "last three letters" << endl;
    }
    else{
        cout << "none" << endl;
    }
}


