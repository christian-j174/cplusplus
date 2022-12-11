#include "StarterCode.hpp"

/*
 * Given a vector of Paintings, return the count of how many paintings
 * qualify with the given style and its year is between the given start
 * and end (inclusive).
 */
int Painting::countPaintings(const vector<Painting *> &collection, Style style, int start, int end) {
    int counter = 0;
    for(int i = 0; i < collection.size(); i++){
        int year = collection[i]->getYear();
        if(style.equals(collection[i]->getStyle()) && (year >= start && year <= end)){counter++; }
    }

    return counter;
}

// vector<Sculpture *> Sculpture::segregateSculptures(const vector<Art *> &collection) {
//     vector<Sculpture *> result;
//     for(int i = 0; i < collection.size(); i++) {
//         Sculpture* tmp = dynamic_cast<Sculpture*>(collection[i]);
//         if(tmp != nullptr) result.push_back(tmp);
//     }
//     return result;
// }
