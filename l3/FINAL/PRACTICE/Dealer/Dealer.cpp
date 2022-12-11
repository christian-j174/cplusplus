#include <iostream>
#include <string>
#include <vector>
#include "Dealer.h"

/* BONUS PROBLEM (15PTS): Finish the merge algorithm for the Merge Sort with the comparator
*/

void Dealer::merge(CarComparator comp, vector<Car> &S1, vector<Car> &S2, vector<Car> &stock) {

    int i = 0, j = 0;
    while(i + j < stock.size()) {
    if() {
    
    } else {

    }
    }
}



// void merge(vector<Student> left, vector<Student> right, vector<Student> &result) {

//     int leftIndex = 0;
//     int rightIndex =0;
//     int resultIndex = 0;
 
//     while ((leftIndex < left.size()) && (rightIndex < right.size())) {
//         if (left[leftIndex] < right[rightIndex]) {
//             // Move next from left to result
//             result[resultIndex] = left[leftIndex];
//             leftIndex++;
//             resultIndex++;
//         } else {
//             // Move next from left to result
//             result[resultIndex] = right[rightIndex];
//             rightIndex++;
//             resultIndex++;

//         }
//     }
//     while (leftIndex < left.size()) {
//         result[resultIndex] = left[leftIndex];
//         leftIndex++;
//         resultIndex++;
//     }
//     while (rightIndex < right.size()) {
//         result[resultIndex] = right[rightIndex];
//         rightIndex++;
//         resultIndex++;
//     }