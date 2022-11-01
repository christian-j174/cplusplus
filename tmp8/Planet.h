#include <iostream>
#include <math.h>
#include <string>

using namespace std;

class Planet
{

private:
	string name;
	long population;
	double diameter;
	bool hasWater;
	bool hasOxygen;
	string closestPlanet;
	string galaxy;

	/*
	Area of the Planet
	Furmula: area = 4 * pi * r^2
	*/
	double calculateArea() const
	{
		return (2.0 * acos(0.0)) * 4 * pow((getDiameter() / 2), 2);
	}

public:
	// Constructor
	Planet(string name, long population, double diameter, bool hasWater, bool hasOxygen,
		   string closestPlanet, string galaxy)
	{
		this->name = name;
		this->population = population;
		this->diameter = diameter;
		this->hasWater = hasWater;
		this->hasOxygen = hasOxygen;
		this->closestPlanet = closestPlanet;
		this->galaxy = galaxy;
	}

	// Copy constructor
	Planet(const Planet &p2)
	{
		this->name = p2.getName();
		this->population = p2.getPopulation();
		this->diameter = p2.getDiameter();
		this->closestPlanet = p2.getClosestPlanet();
		this->hasWater = p2.getHasWater();
		this->hasOxygen = p2.getHasOxygen();
		this->galaxy = p2.getGalaxy();
	}

	// Default Constructor
	Planet();

	// Getters
	string getName() const { return name; }
	long getPopulation() const{ return population; }
	double getDiameter() const{ return diameter; }
	double getArea() const{ return calculateArea(); }
	bool getHasWater() const{ return hasWater; }
	bool getHasOxygen() const{ return hasOxygen; }
	string getClosestPlanet() const{ return closestPlanet; }
	string getGalaxy() const{ return galaxy; }

	// Setters
	void setName(string name) { this->name = name; }
	void setPopulation(long population) { this->population = population; }
	void setDiameter(double diameter) { this->diameter = diameter; }
	void setHasWater(bool hasWater) { this->hasWater = hasWater; }
	void setHasOxygen(bool hasOxygen) { this->hasOxygen = hasOxygen; }
	void setClosestPlanet(string closestPlanet) { this->closestPlanet = closestPlanet; }
	void setGalaxy(string galaxy) { this->galaxy = galaxy; }

	string toString()
	{
		return "{Name: " + getName() + ", " + "Population: " + to_string(getPopulation()) + ", " + "Diameter: " + to_string(getDiameter()) + ", " + (getHasWater() ? "Water: True" : "Water: False") + ", " + (getHasOxygen() ? "Oxygen: True" : "Oxygen: False") + ", " + "Closest Planet: " + getClosestPlanet() + ", " + "Galaxy: " + getGalaxy() + "}";
	}

	// PART #1 EXERCISES
	bool isHabitable();
	string compareArea(Planet &p2);
	double volumePlanet();
	bool sameGalaxy(Planet &p2);
};
