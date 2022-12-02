// #include <iostream>
// #include <vector>
// #include "Library.h"

// using namespace std;

// int Library::binarySearch(vector<Book> bookshelf, Book target) {
//     return binarySearchHelper(bookshelf, target, 0, bookshelf.size() - 1); // TEMP RETURN
// }


// int Library::binarySearchHelper(vector<Book> bookshelf, Book target, int left, int right) {
//     if (left > right) {
//         return -1;
//     }

//     else if (left == right) {
//         if (bookshelf[left].equals(target)) {
//             return bookshelf[left].compareTo(target);
//         } else {
//             return -1;
//         }
//     }
//     else{
//         int mid = (left + right) / 2; 
    
//         if (bookshelf[mid].equals(target)) 
//             return mid;
    
//         else if (bookshelf[mid].compareTo(target) < mid)
//             return binarySearchHelper(bookshelf, target, mid + 1, right);
            
//         else return binarySearchHelper(bookshelf, target, left, mid - 1);

//     }

// }


// /*
//  * EXERCISE B(20 points):
//  * Implement a iterative Bubble Sort for a vector books
//  *
//  * @param bookshelf - Vector to be sorted
//  * @return A sorted copy fo the bookshelf array
//  */

// void bubbleSort(int array[], int size) {
    
//   // loop to access each array element
//   for (int step = 0; step < (size-1); ++step) {
      
//     // check if swapping occurs
//     int swapped = 0;
    
//     // loop to compare two elements
//     for (int i = 0; i < (size-step-1); ++i) {
        
//       // compare two array elements
//       // change > to < to sort in descending order
//       if (array[i] > array[i + 1]) {

//         // swapping occurs if elements
//         // are not in intended order 
//         int temp = array[i];
//         array[i] = array[i + 1];
//         array[i + 1] = temp;
        
//         swapped = 1;
//       }
//     }

//     // no swapping means the array is already sorted
//     // so no need of further comparison
//     if (swapped == 0)
//       break;
//   }
// }


// vector<Book> bubbleSort(vector<Book> bookshelf) {
//     int size = bookshelf.size(); 
//     vector<Book> unsortedBookshelf = bookshelf;

//   for (int step = 0; step < (size-1); ++step) {
//     for (int i = 0; i < (size-step-1); ++i) {

//       if (unsortedBookshelf[i].compareTo(unsortedBookshelf[i + 1]) > 1) {
//         Library::swap(unsortedBookshelf, i, i+1);

//       }
//     }
//       return unsortedBookshelf;

// }


// /*
//  * EXERCISE C(20 points):
//  * Implement a recursive Insertion Sort for the vector of books using a helper method
//  * HINT: USE A HELPER METHOD
//  * @param bookshelf - Vector to be sorted
//  * @return A sorted copy of the bookshelf vector
//  */
// vector<Book> Library::insertionSort(vector<Book> bookshelf) {
//     return insertionSortHelper(bookshelf, 0); // TEMP RETURN
// }

// vector<Book> Library::insertionSortHelper(vector<Book> bookshelf, int insertIndex) {
//     // ADD YOUR CODE
//     return bookshelf;
// }

// int main() {
//     vector<Book> emptyShelf = {};

//     vector<Book> bookshelf = {Book(0, "Somebody once told me", "Shrek", 2001, 1000),
//                               Book(14, "Hey, now, you're an all-star, get your game on, go play", "Sadly no Bee Movie reference", 2001, 1000),
//                               Book(1, "the world is gonna roll me", "Donkey", 2001, 1000),
//                               Book(3, "She was looking kind of dumb", "Puss in boots", 2001, 1000),
//                               Book(4, "with her finger and her thumb", "Dragon", 2001, 1000),
//                               Book(10, "So much to do, so much to see", "Princess Charming", 2001, 1000),
//                               Book(6, "Well, the years start coming and they don't stop coming", "Pinocchio", 2001, 1000),
//                               Book(7, "Fed to the rules and I hit the ground running", "Doris", 2001, 1000),
//                               Book(17, "And all that glitters is gold", "Cookie", 2001, 1000),
//                               Book(8, "Didn't make sense not to live for fun", "Lord Farquaad", 2001, 1000),
//                               Book(9, "Your brain gets smart but your head gets dumb", "Fairy Godmother", 2001, 1000),
//                               Book(11, "So what's wrong with taking the back streets?", "Captain Hook", 2001, 1000)};

//     vector<Book> bookshelf2 = Library::bubbleSort(bookshelf);
//     for(int i = 1; i < bookshelf.size(); i++) {
//         if (bookshelf2[i - 1].compareTo(bookshelf2[i]) < 0) {
//             cout << bookshelf2[i-1].getId() << endl;
//         }
//     }

//     vector<Book> bookshelf3 = Library::insertionSort(bookshelf);
//     for(int i = 1; i < bookshelf.size(); i++) {
//         if(bookshelf3[i-1].compareTo(bookshelf3[i]) < 0) {
//             cout << bookshelf3[i-1].getId() << endl;
//         }
//     }

//     // After sorting we can do binarySearch 
//     cout << Library::binarySearch(emptyShelf, Book(0, "Somebody once told me", "Shrek", 2001, 1000)) << endl;
//     cout << Library::binarySearch(bookshelf2, Book(10, "So much to do, so much to see", "Princess Charming", 2001, 1000)) << endl;
// }
