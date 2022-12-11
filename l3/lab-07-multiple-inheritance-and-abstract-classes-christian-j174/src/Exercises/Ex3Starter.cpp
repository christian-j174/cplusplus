#include "StarterCode.hpp"

/* Exercise 3A
 * Override the method appraise in Painting by calling the super appraise
 * and determining the new price of the painting based on the following remarks:
 *
 * 1. If it is not a replica and its artist fame score is greater than 8,
 *    the price will be raised by 54%.
 * 2. If it is not a replica and its artist fame score is between 5 and 8 (inclusive),
 *    the price will be raised by 27%.
 * 3. If it is not a replica and its artist fame score is lower than 5,
 *    the price will be raised by 11%.
 * 4. If it is a replica the price will remain the same.
 *
 * Hint: Remember that if you want to override a method you must declare it first on the header file of the subclass.
 * */
int Painting::appraise() {
    if(!(isReplica()) && artist.getFameScore() > 8) {return Art::appraise() * 1.54; }
    else if(!(isReplica()) && (artist.getFameScore() >= 5 && artist.getFameScore() <= 8)) {return Art::appraise() * 1.27; }
    else if(!(isReplica()) && artist.getFameScore() < 5) {return Art::appraise() * 1.11; }
    else {return Art::appraise(); }
}

/* Exercise 3B
 * Override the method appraise in Sculpture by calling the super appraise
 * and determining the new price of the painting based on the following remarks:
 *
 * 1. If its material is MARBLE and its artist fame score is greater or equal than 5,
 *    the price will be raised by 67%.
 * 2. If its material is METAL and its artist fame score is greater than 5,
 *    the price will be raised by 33%.
 * 3. If its material is NOT PLASTIC and its fame score is greater than 3,
 *    the price will be raised by 17%.
 * 4. Else the price will remain the same.
 *
 * Hint: Remember that if you want to override a method you must declare it first on the header file of the subclass.
 */

int Sculpture::appraise() {
    if(getMaterial() == MARBLE && artist.getFameScore() >= 5){return Art::appraise() * 1.67; }
    else if(getMaterial() == METAL && artist.getFameScore() > 5){return Art::appraise() * 1.33; }
    else if(!(getMaterial() == PLASTIC) && artist.getFameScore() > 3){return Art::appraise() * 1.17; }
    else {return Art::appraise(); }
}