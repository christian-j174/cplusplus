#include <iostream>
#include <vector>
#include "Library.h"

using namespace std;



int Library::binarySearch(vector<Book> bookshelf, Book target){
    return binarySearchHelper(bookshelf, target, 0, bookshelf.size() - 1);
}

int Library::binarySearchHelper(vector<Book> bookshelf, Book target, int left, int right){
    if(left > right) return -1;

    if(left == right) {
        if(bookshelf[left].equals(target)) return left;
        else  {return -1; } 
    }

    int mid = (left + right) / 2;

    if (bookshelf[mid].equals(target)) return mid;  

    if(bookshelf[mid].getId() < target.getId()) return binarySearchHelper(bookshelf, target, mid + 1, right);
    return binarySearchHelper(bookshelf, target, left, mid - 1);
}



/*
 * EXERCISE B(20 points):
 * Implement a iterative Bubble Sort for a vector books
 *
 * @param bookshelf - Vector to be sorted
 * @return A sorted copy fo the bookshelf array
 */
vector<Book> Library::bubbleSort(vector<Book> bookshelf) {
    vector<Book> unsortedBookshelf = bookshelf;
    bool swap = true;
    // ADD YOUR CODE
    return  unsortedBookshelf;
}



/*
 * EXERCISE C(20 points):
 * Implement a recursive Insertion Sort for the vector of books using a helper method
 * HINT: USE A HELPER METHOD
 * @param bookshelf - Vector to be sorted
 * @return A sorted copy of the bookshelf vector
 */
vector<Book> Library::insertionSort(vector<Book> bookshelf) {
    return insertionSortHelper(bookshelf, 0); // TEMP RETURN
}

// vector<Book> Library::insertionSortHelper(vector<Book> bookshelf, int insertIndex) {
//     vector<Book> result = bookshelf;
//     Book temp;

//     if(len == 1) return;

//     for(int i = 0; i < len - 1; i++) {
//         if(result[i].compareTo(result[i + 1]) > 0) {
//             temp = result[i];
//             Library::swap(result, i + 1, i);
//             Library::swap(result, i +1, i);
//         }
//     }
     

// }



// void recurbublSort(int arr[], int len){
//    int temp;

//    if (len == 1){
//       return;
//    }
//    for (int i=0; i<len-1; i++){
//       if (arr[i] > arr[i+1]){
//          temp=arr[i];
//          arr[i]=arr[i+1];
//          arr[i+1]=temp;
//       }
//    }
//    len=len-1;
//    recurbublSort(arr, len);
// }





vector<Book> Library::bubbleSort(vector<Book> bookshelf) {
    // int size = bookshelf.size(); 
    // vector<Book> sortedBookshelf = bookshelf;

    // for (int step = 0; step < size; ++step) {
    //     for (int i = 0; i < (size-step); ++i) {
    //         if (sortedBookshelf[i].compareTo(sortedBookshelf[i + 1]) > 1) 
    //             Library::swap(sortedBookshelf, i, i+1);    
    //     }
    // }
    return sortedBookshelf;
}








int main() {
    vector<Book> emptyShelf = {};

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


    // vector<Book> bookshelf2 = Library::bubbleSort(bookshelf);
    // for(int i = 1; i < bookshelf.size(); i++) {
    //     if (bookshelf2[i - 1].compareTo(bookshelf2[i]) < 0) {
    //         cout << bookshelf2[i-1].getId() << endl;
    //     }
    // }

    // vector<Book> bookshelf3 = Library::insertionSort(bookshelf);
    // for(int i = 1; i < bookshelf.size(); i++) {
    //     if(bookshelf3[i-1].compareTo(bookshelf3[i]) < 0) {
    //         cout << bookshelf3[i-1].getId() << endl;
    //     }
    // }

    // // After sorting we can do binarySearch 
    // cout << Library::binarySearch(emptyShelf, Book(0, "Somebody once told me", "Shrek", 2001, 1000)) << endl;
    // cout << Library::binarySearch(bookshelf2, Book(10, "So much to do, so much to see", "Princess Charming", 2001, 1000)) << endl;
}