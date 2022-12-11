#include <iostream>
#include "Library.h"

using namespace std;

int main() {	
    cout << "Testing" << endl;
    vector<Book> bookshelf = {Book(0, "Somebody once told me", "Shrek", 2001, 1000),
                                Book(14, "Hey, now, you're an all-star, get your game on, go play", "Sadly no Bee Movie reference", 2001, 1000),
                                Book(1, "the world is gonna roll me", "Donkey", 2001, 1000),
                                Book(3, "She was looking kind of dumb", "Puss in boots", 2001, 1000),
                                Book(4, "with her finger and her thumb", "Dragon", 2001, 1000),
                                Book(10, "So much to do, so much to see", "Princess Charming", 2001, 1000),
                                Book(6, "Well, the years start coming and they don't stop coming", "Pinocchio", 2001, 1000),
                                Book(7, "Fed to the rules and I hit the ground running", "Doris", 2001, 1000),
                                Book(17, "And all that glitters is gold", "Cookie", 2001, 1000),
                                Book(8, "Didn't make sense not to live for fun", "Lord Farquaad", 2001, 1000),
                                Book(9, "Your brain gets smart but your head gets dumb", "Fairy Godmother", 2001, 1000),
                                Book(11, "So what's wrong with taking the back streets?", "Captain Hook", 2001, 1000)};

    vector<Book> bookshelf2 = Library::bubbleSort(bookshelf);

    for(int i = 0; i < bookshelf2.size(); i++) {
        cout << bookshelf2[i].getId() << endl;
    }


    // // After sorting we can do binarySearch 
    // cout << Library::binarySearch(emptyShelf, Book(0, "Somebody once told me", "Shrek", 2001, 1000)) << endl;
    // cout << Library::binarySearch(bookshelf2, Book(10, "So much to do, so much to see", "Princess Charming", 2001, 1000)) << endl;
}