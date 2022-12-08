#include <iostream>
#include <string>
#include <stack>
#include <map>
#include <set>
#include <vector>

using namespace std;

class Collections
{
public:

    static void removeElement(stack<int> &s, int element);
    static map<string, int> countOccurrences(vector<string> const &v);
    static set<int> makeUnion(set<int> const &s1, set<int> const &s2);


    static void print(stack<int> s) {
        while (!s.empty()) {
            cout << s.top() << " ";
            s.pop();
        }
        cout << endl;
    }

    static void printMap(map<string, int> m) {
        for (auto it = m.begin(); it != m.end(); it++) {
            cout << "Element: " << it->first << ", " << "Times Found: " << it->second << endl;
        }
    }

    template<class Iterable>
    static void print(Iterable i) {
        for (auto it = i.begin(); it != i.end(); it++) {
            cout << *it << " ";
        }
        cout << endl;
    }
};



/*
Given a stack of integers, remove every occurrence of a given integer.
*/
void Collections::removeElement(stack<int> &s, int element) {
    // YOUR CODE HERE
}

/*
Given a vector of strings, return a map of integers to integers where the key is 
the element and the value is the number of occurrences of the element in the vector.

*/
map<string, int> Collections::countOccurrences(vector<string> const &v) {
    
    // YOUR CODE HERE

    return map<string, int>(); // DUMMY RETURN
}

/*
Given 2 sets of integers, return a set of integers that is the union of the 2 sets.
*/
set<int> Collections::makeUnion(set<int> const &s1, set<int> const &s2) {
    
    // YOUR CODE HERE

    return set<int>(); // DUMMY RETURN
}

int main() {
    stack<int> s;
    for (int i = 1; i <= 10; i++) {
        s.push(i);
    }

    vector<string> v1 = {"CIIC", "ICOM",  "CIIC", "INEL", "INEL", "INEL", "ICOM", "ININ"};
    vector<string> v2 = {"Joel", "Juan", "Juan", "Bienvenido", "Bienvenido", "Dionel"};

    set<int> s1 = { 1, 2, 3, 4, 5 };
    set<int> s2 = { 3, 4, 5, 6, 7 };
    set<int> s3 = { 5, 6, 7, 8, 9 };

    // Stack Test Cases
    // cout << "Stack: ";
    // Collections::print(s);
    // cout << "Removing element 5" << endl;
    // Collections::removeElement(s, 5);
    // cout << "Stack: ";
    // Collections::print(s);
    // cout << "Removing element 3" << endl;
    // Collections::removeElement(s, 3);
    // cout << "Stack: ";
    // Collections::print(s);
    
    // Map Test Cases
    // cout << "Vector v1: ";
    // Collections::print(v1);
    // cout << "Vector v2: ";
    // Collections::print(v2);
    
    // cout << "Counting occurrences of each element in v1" << endl;
    // map<string, int> m1 = Collections::countOccurrences(v1);
    // Collections::printMap(m1);
    // cout << "Counting occurrences of each element in v2" << endl;
    // map<string, int> m2 = Collections::countOccurrences(v2);
    // Collections::printMap(m2);


    // Set Test Cases
    // cout << "Set s1: ";
    // Collections::print(s1);
    // cout << "Set s2: ";
    // Collections::print(s2);
    // cout << "Set s3: ";
    // Collections::print(s3);

    // cout << "Union of s1 and s2: ";
    // set<int> s4 = Collections::makeUnion(s1, s2);
    // Collections::print(s4);
    // cout << "Union of s2 and s3: ";
    // set<int> s5 = Collections::makeUnion(s2, s3);
    // Collections::print(s5);

    return 0;
}