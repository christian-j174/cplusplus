#include <iostream>
#include <vector>
#include "Library.h"

using namespace std;

// /*
// * EXERCISE A(20 pts):
// * Binary Algorithm to find the index of a given target. Requires array to be sorted.
// * Divides the array in half and only checks for the half containing the value while discarding the rest.
// * The value is either the middle of the sub-array or in one of the two halves.
// *
// * By diving the vector in half each iteration, the complexity is at the most O(log<img class="icon emoticon" alt="No" title="No" src="https://online.upr.edu/theme/image.php/fordson/core/1669595636/s/no" />)
// * which beats the linear search at O<img class="icon emoticon" alt="No" title="No" src="https://online.upr.edu/theme/image.php/fordson/core/1669595636/s/no" />
// *
// * @param bookshelf = Target vector
// * @param target - Target Element
// * @return - Index of Target Element (-1 if not found)
// */
// // int Library::binarySearch(vector<Book> bookshelf, Book target) {
// //     return binarySearchHelper(bookshelf, target, 0, bookshelf.size() - 1); // TEMP RETURN
// // }

// // int Library::binarySearchHelper(vector<Book> bookshelf, Book target, int left, int right){
// //     if(left > right) return -1;

// //     if(left == right) {
// //         if(bookshelf[left].equals(target)) return left;
// //         else  {return -1; } 
// //     }

// //     int mid = (left + right) / 2;

// //     if (bookshelf[mid].equals(target)) return mid;  

// //     if(bookshelf[mid].getId() < target.getId()) return binarySearchHelper(bookshelf, target, mid + 1, right);
// //     return binarySearchHelper(bookshelf, target, left, mid - 1);
// // }


// /*
//  * EXERCISE B(20 points):
//  * Implement a iterative Bubble Sort for a vector books
//  *
//  * @param bookshelf - Vector to be sorted
//  * @return A sorted copy fo the bookshelf array
//  */
// vector<Book> Library::bubbleSort(vector<Book> bookshelf) {
//     vector<Book> unsortedBookshelf = bookshelf;
//     bool swap = true;
//     // ADD YOUR CODE
//     return  unsortedBookshelf;
// }

// /*
//  * EXERCISE C(20 points):
//  * Implement a recursive Insertion Sort for the vector of books using a helper method
//  * HINT: USE A HELPER METHOD
//  * @param bookshelf - Vector to be sorted
//  * @return A sorted copy of the bookshelf vector
//  */
vector<Book> Library::insertionSort(vector<Book> bookshelf) {
    return insertionSortHelper(bookshelf, 0); // TEMP RETURN
}

vector<Book> Library::insertionSortHelper(vector<Book> bookshelf, int insertIndex) {
    vector<Book> result = bookshelf;
    int i, j;

    for(i = 1;  ) 
    return bookshelf;
}

void insert(int a[], int n) /* function to sort an aay with insertion sort */  
{  
    int i, j, temp;  
    for (i = 1; i < n; i++) {  
        temp = a[i];  
        j = i - 1;  
  
        while(j>=0 && temp <= a[j])  /* Move the elements greater than temp to one position ahead from their current position*/  
        {    
            a[j+1] = a[j];     
            j = j-1;    
        }    
        a[j+1] = temp;    
    }  
}  