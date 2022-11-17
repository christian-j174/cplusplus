#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * EXERCISE 1:
 * 
 * The least common multiple (lcm) of two numbers is the smallest number which can be divided by both numbers.
 * By example: lcm(2,3) = 6. Find the lcm(a,b) using the relation lcm(a,b) = a*b/gcd(a,b) 
 * 
 * Hint: Use the Euclidean algorithm: The greatest common denominator of values a and b also divides their difference.
 * 
 * For any (a, b) we have: 
 *      If a > b: gcd(a,b) is the same as gcd(b, a%b)
 *      Analyze example: For hints on edge cases. 
 * 
 */




int gcd(int a, int b){
    if(b == 0) return a;
    if(a % b == 0) return b;
    else {
        return gcd(b, a % b);
    }
}


int lcm(int a, int b){
    return a*b/gcd(a,b);
}


/**
 * EXERCISE 2: 
 * 
 * Decimal To Binary: For a given decimal number, calculate it's binary representation.
 * 
 * To convert:
 *      When dec == 0 -> 0
 *      Otherwise 10 * [10 * (...) + dec mod 2] + dec mod 2
 * 
 */
static int decimalToBinary(int dec){
    return 0; // Dummy Return
}

/**
 * EXERCISE 3:
 * 
 * Reverse String: Reverse the characters of a string recursively.
 * 
 * Example: 
 *      string = "ICOM"
 *      reverse string = "MOCI".
 * 
 */
 
string reverseString(const string &str){
    if (str.length() == 0){return str;}
    if (str.length() == 1) {
        return str;
    } else {
        return reverseString(str.substr(1,str.length())) + str.at(0);
    }
}


// string reverseString(const string &str){
    
//     int size = str.size();
//     cout << size << endl;
//     return "";
// }

/**
 * EXERCISE 4:
 * 
 * Sum the digits of a given number.
 * 
 * Example:
 *      Number = 13
 *      Sum_of_digits = 1 + 3 = 4
 * 
 *      Number = 123
 *      Sum_of_digits = 1 + 2 + 3 = 6
 * 
 */

//int sumDigits( int n ) {return ( n == 0 ? 0 : sumDigits( n / 10 ) + n % 10 ); }


int sumDigits( int n ){
    if(n == 0) return 0;
    else {sumDigits( n / 10 ) + n % 10;}

}

int sumDigits( const int n ) {return ( n == 0 ? 0 : sumDigits( n / 10 ) + n % 10 ); }



//{return ( n == 0 ? 0 : sumDigits( n / 10 ) + n % 10 ); }

// int sumDigits(const int num){
//     // YOUR CODE HERE
    
//     return 0; //Dummy return
// }

/**
 * EXERCISE 5:
 * 
 * Reverse the digits of a given number recursively.
 * Example: 
 *      input = 12
 *      output = 21
 * Hint: If the integer number 123 is divided by 10, the quotient is 123 / 10 = 12, but the remainder is 123 % 10 = 3.
 * Hint: Use a helper function.
 * 
 */

int reverseNumber(const int num){
    
    // YOUR CODE HERE
    
    return 0; //Dummy return
}


// int reverse(int x) {
//     int output;
//     for(int i; i< x.size(); i++ ){
//         output += x[i];  
//     }
//     cout<<output;
// }

// void read_and_print()
// {
//     char x;

//     if ((x = std::cin.get()) != '\n')
//     // read some more
//         read_and_print();

//     std::cout << x;
// }




/*
* EXERCISE 6:
* 
* Complete the isPalindrome() method. A string is a palindrome if it can be read 
* the same way frontwards and backwards. 

* For example: "racecar" backwards is just "racecar".
* Return true if the string is a palindrome, false otherwise.

* Hints:
    * Is a string of size 1 a palindrome?
    * What makes a string NOT a palindrome?
    * str.substr( start_index, length) gives the substring of a string

* Assumptions:
    * The string will not have any spaces
    * The string will only contain alphanumeric characters (A-Z, a-z, 0-9)
    * Lowercase letters are not the same as uppercase letters (racecar != Racecar)
*/

bool isPalindrome(const string &s, size_t i = 0) {
    if (i >= s.size() / 2) return true;
    if (toupper(s[i]) != toupper(s[s.size() - i - 1])) return false;
    return isPalindrome(s, i + 1);
}


// bool isPalindrome(const string &str){
//     return true; // DUMMY RETURN
// }

/**
 * EXERCISE 7:
 *
 * Contains function: Given a vector v of strings and a target string, return if the target is in v.
 * If target is in v return the index, otherwise return -1.
 * 
 * HINT: Use a helper function to complete the implementation, search always starts in index 0.
 */

static int findIndex(vector<string> v, string target){
    return -2;
}

/**
 * EXERCISE 8:
 *
 *
 * Complete the findMax() method. This method receives a vector of positive
 * integers, and should return the max value present in the vector.
 * If the vector is empty, return -1
 *
 * NOTE: You must use recursion. Iterative methods will fail test cases.
 *
 * Hint:
 * What is the max value of a vector of size 1?
 * You might want to define a helper method <img class="icon emoticon" alt="sonrisa" title="sonrisa" src="https://online.upr.edu/theme/image.php/fordson/core/1659460725/s/smiley" />
 */
int findMax(vector<int> nums){
    return -1; // DUMMY RETURN
}

int main(){

    cout << boolalpha << endl;

    //test Exercise 1
    // cout << "Exercise 1" << endl;
    // cout << "lcm(" + to_string(30) + "," + to_string(7) + ") = " << lcm(30,7) << endl;
    // cout << "lcm(" + to_string(12) + "," + to_string(8) + ") = " << lcm(12,8) << endl;
    // cout << "lcm(" + to_string(15) + "," + to_string(60) + ") = " << lcm(15,60) << endl;
    // cout << "lcm(" + to_string(7) + "," + to_string(0) + ") = " << lcm(7,0) << endl;
    // cout << "lcm(" + to_string(11) + "," + to_string(121) + ") = " << lcm(11,121) << endl;
    // cout << "\n";

    // //test Exercise 2
    // cout << "Exercise 2" << endl;
    // cout <<  "Decimal to Binary " << 25 << " = " <<  decimalToBinary(25) << endl;
    // cout <<  "Decimal to Binary " << 10 << " = " <<  decimalToBinary(10) << endl;
    // cout <<  "Decimal to Binary " << 7 << " = " <<  decimalToBinary(7) << endl;
    // cout <<  "Decimal to Binary " << 120 << " = " <<  decimalToBinary(120) << endl;
    // cout << "\n";

    //test Exercise 3
    cout << "Exercise 3" << endl;
    string test = "house";
    cout << "Before reverse: "<< test << endl;
    cout << "After reverse: "<< reverseString(test) << endl;
    cout << "\n";

    // //test Exercise 3
    // cout << "Exercise 3" << endl;
    // string test = "house";
    // cout << "Before reverse: "<< test << endl;
    // cout << "After reverse: "<< reverseString(test) << endl;
    // cout << "\n";

    // test = "home alone";
    // cout << "Before reverse: "<< test << endl;
    // cout << "After reverse: "<< reverseString(test) << endl;
    // cout << "\n";

    //test Exercise 4
    cout << "Exercise 4" << endl;
    cout << "Sum of digits 59: " << sumDigits(59) << endl;
    cout << "Sum of digits -4: " << sumDigits(-4) << endl;
    cout << "Sum of digits 7476: " << sumDigits(7476) << endl;
    cout << "\n";

    // //test Exercise 5
    // cout << "Exercise 5" << endl;
    // cout << "Reverse of 8721: " << reverseNumber(8721) << endl;
    // cout << "Reverse of 12: " << reverseNumber(12) << endl;
    // cout << "Reverse of -1: " << reverseNumber(-1) << endl;
    // cout << "Reverse of 987654321: " << reverseNumber(987654321) << endl;
    // cout << "\n";

    // // test Exercise 6
    // cout << "Exercise 6" << endl;
    // cout << "Is Palindrome: " << isPalindrome("racecar") << endl;
    // cout << "Is Palindrome: " << isPalindrome("cheese") << endl;
    // cout << "Is Palindrome: " << isPalindrome("girafarig") << endl;
    // cout << "Is Palindrome: " << isPalindrome("madeyoulook") << endl;
    // cout << "\n";

    // // test Exercise 7
    // cout << "Exercise 7" << endl;
    // vector<string> v{"Cpp", "Is", "The", "Best"};
    // string target = "The";
    // cout << "Index of \"The\"? " << findIndex(v, target) << endl;

    // v = {"Java", "Has", "No", "Pointers", "Though"};
    // target = "What about Python?";
    // cout << "Index of \"What about Python?\" ? " << findIndex(v, target) << endl;
    // cout << "\n";

    // // test Exercise 8
    // cout << "Exercise 8" << endl;
    // vector<int> v1{1, 2, 3, 4, 5};      // 5: End
    // vector<int> v2{8, 9, 10, 6, 7};     // 10: Middle
    // vector<int> v3{15, 14, 13, 12, 11}; // 15: Start

    // cout << "Max of v1: " << findMax(v1) << endl;
    // cout << "Max of v2: " << findMax(v2) << endl;
    // cout << "Max of v3: " << findMax(v3) << endl;
    // cout << "\n";
}

