#include "Planet.h"
#include "Alien.h"

int main()
{

    //----------------------PART 1-------------------------------
    cout << "--------- PART #1 ---------" << endl;
    Planet p0("KRYPTON", 1403024135, 34.66, true, true, "AZGARD", "RAO"); // using normal constructor
    Planet p1("PLUTO", 0, 40.2, false, true, "URANUS", "MILKY WAY");      // using normal constructor
    Planet p2(p1);                                                        // using copy constructor
    Planet p3;                                                            // using default constructor

    cout << "\n------ EX1 Default constructor ------" << endl;
    cout << p3.toString() << endl;

    cout << "\n------ EX2 Is Habitable? ------" << endl;
    cout << (p0.isHabitable() ? "true" : "false") << endl;
    cout << (p1.isHabitable() ? "true" : "false") << endl;

    cout << "\n------ EX3 Compare Area ------" << endl;
    cout << p0.compareArea(p1) << endl;

    cout << "\n------ EX4 Volume ------" << endl;
    cout << p1.volumePlanet() << endl;

    cout << "\n------ EX5 Same Galaxy ------" << endl;
    cout << (p2.sameGalaxy(p3) ? "true" : "false") << endl;

    //----------------------PART 2-------------------------------

    cout << "\n------ EX6A Parameter Constructor ------" << endl;
    Alien alien1("YODA", 2, 45, 100, "telepathy");
    cout << alien1.toString() << endl;

    cout << "\n------ EX6B Copy Constructor ------" << endl;
    Alien alien2(alien1);
    cout << alien2.toString() << endl;

    cout << "\n------ EX7 Setters ------" << endl;
    cout << "Before: " + alien2.toString() << endl;
    alien2.setName("LULU");
    alien2.setNumEyes(4);
    alien2.setNumVisitedPlanets(257);
    alien2.setNumLives(10);
    alien2.setSpecialPower("strength");
    cout << "After: " + alien2.toString() << endl;

    cout << "\n------ EX8 Determine the Leader ------" << endl;
    cout << alien1.determineTheLeader(alien2).toString() << endl;

    cout << "\n------ EX9 Add Visited Planets ------" << endl;
    alien1.addVisitedPlanets(3);
    cout << alien1.toString() << endl;

    cout << "\n------ EX10 Battle ------" << endl;
    cout << "Before: " + alien1.toString() << endl;
    cout << "Before: " + alien2.toString() << endl;
    alien1.battle(alien2);
    cout << "After: " + alien1.toString() << endl;
    cout << "After: " + alien2.toString() << endl;

    cout << "\n------ EX11 Will Survive ------" << endl;
    cout << "Before: " + alien1.toString() << endl;
    cout << "Will survive? " << (alien1.willSurvive(100) ? "true" : "false") << endl;
    cout << "After: " + alien1.toString() << endl;

    return 0;
}