#include <iostream>
#include <math.h>
#include <string>

using namespace std;

class Alien
{
private:
    string name;
    int numEyes;
    int numVisitedPlanets;
    int numLives;
    string specialPower;

public:
    // Constructor
    Alien(string name, int numEyes, int numVisitedPlanets, int numLives, string specialPower);

    // Copy Constructor
    Alien(const Alien &alien);

    // Getters
    string getName() const { return name; }
    int getNumEyes() const { return numEyes; }
    int getNumVisitedPlanets() const { return numVisitedPlanets; }
    int getNumLives() const { return numLives; }
    string getSpecialPower() const { return specialPower; }

    // Setters
    void setName(string name);
    void setNumEyes(int numEyes);
    void setNumVisitedPlanets(int numVisitedPlanets);
    void setNumLives(int numLives);
    void setSpecialPower(string specialPower);

    string toString()
    {
        return "{Name: " + getName() + ", " + "Eyes: " + to_string(getNumEyes()) + ", " + "Visited Planets: " + to_string(getNumVisitedPlanets()) + ", " + "Lives: " + to_string(getNumLives()) + ", " + "Special Power: " + getSpecialPower() + "}";
    }
    // PART #2 EXERCISES
    Alien determineTheLeader(Alien &alien);
    void addVisitedPlanets(int planetQty);
    void battle(Alien &enemy);
    bool willSurvive(int attackPower);
};