#include "include/position.hpp"

Position::Position(string pCode, int rank, double salary, bool availability, bool jobType){
    setPositionCode(pCode);
    setRank(rank);
    setSalary(salary);
    setAvailability(availability);
    setFullTime(jobType);
}

// ! Getters
string Position::getPositionCode() { return positionCode; }
int Position::getRank() { return reqRank; }
double Position::getSalary() { return hourlySalary; }
bool Position::isAvailable() { return available; }
bool Position::isFullTime() { return jobType; }

// ! Setters
void Position::setPositionCode(string positionCode) { this->positionCode = positionCode; }
void Position::setRank(int reqRank) { this->reqRank = reqRank; }
void Position::setSalary(double hSalary) { this->hourlySalary = hSalary; }
void Position::setAvailability(bool available) { this->available = available; }
void Position::setFullTime(bool fulltime) { this->jobType = fulltime; }

/**
	 * A method that calculates an average yearly salary.
	 * 1. The calculation depends what type of job it is:
	 * 		a) If the position is part time 20 hours is determined.
	 * 		b) If the position is full time 40 hours is determined.
	 * 
	 * Hint: Given an hourly salary to calculate a yearly salary we 
	 * use the following formula: 
	 * 		totalYearly = payPerHour*Hours*4.5*monthsAYear.
	 * @return 
	 */
double Position::getYearlySalary(){
	bool  condition;
	double salary=0.0;
	condition = this->isFullTime();
	if (condition) {
		salary = this->getSalary()*40*4.5*12;
	
	}
	else {
		salary = this->getSalary()*20*4.5*12;
	}


    return salary;
}