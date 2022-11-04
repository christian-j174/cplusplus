#include "Planet.h"

/* EXERCISE #1
Finish the declaration of the default constructor.
When a Planet is initially created it has the following default values:
	-> Name: ALPHA
	-> Population: 0
	-> Diameter: 8975
	-> Closest Planet: BETA
	-> It DOES HAVE water
	-> It DOES HAVE oxygen
	-> Galaxy: GUARDIANS
*/
Planet::Planet()
{
	// YOUR CODE HERE
}

///////////////////////////////////////////////////////////////////////////////////////////////////
/*
Exercise #2
Determine if a planet is habitable.
In order for a planet to be habitable, it needs to have ALL of the following requirements:
	-> It HAS water
	-> It HAS oxygen
	-> It's area is greater than 3000
*/
bool Planet::isHabitable()
{
	// YOUR CODE HERE
	return false;
}

///////////////////////////////////////////////////////////////////////////////////////////////////
/*
EXERCISE #3
Return the name of smallest planet (between the target and parameter) based on area, if they
have the same area then return the target.
*/
string Planet::compareArea(Planet &p2)
{
	// YOUR CODE HERE
	return "Dummy String";
}

///////////////////////////////////////////////////////////////////////////////////////////////////
/*
EXERCISE #4
Return the volume of the target planet
Formula: (4*pi*r^3)/3
HINT: Remember that the radius is half the diameter
USE: pi = acos(-1)
*/
double Planet::volumePlanet()
{
	// YOUR CODE HERE
	return -9999.9;
}

///////////////////////////////////////////////////////////////////////////////////////////////////
/*
EXERCISE #5
Return true if the target planet and the parameter planet are in the same galaxy
False otherwise.
HINT: use the compare method of string
*/
bool Planet::sameGalaxy(Planet &p2)
{
	// YOUR CODE HERE
	return false;
}