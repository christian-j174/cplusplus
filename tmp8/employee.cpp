#include "include/employee.hpp"

Employee::Employee(string fullName, double hourlySalary, int hoursWeekly, int years, bool status, int warnings){
    eFullName = fullName;
    eHourlySalary = hourlySalary;
    this->hoursWeekly = hoursWeekly;
    yearService = years;
    workStatus = status;
    this->warnings = warnings;
}
// ! Getters
string Employee::getFullName() { return eFullName; }
double Employee::getHourlySalary() { return eHourlySalary; }
int Employee::getHoursPerWeek() { return hoursWeekly; }
int Employee::getYearsOfService() { return yearService; }
bool Employee::getStatus() { return workStatus; }
int Employee::getWarnings() { return warnings; }
double Employee::getYearlySalary() { return eHourlySalary * hoursWeekly * 4.5 * 12; }

// ! Setters
void Employee::setFullName(string fullName) { eFullName = fullName; }
void Employee::setHourlySalary(double hourlySalary) { eHourlySalary = hourlySalary; }
void Employee::setHoursPerWeek(int hours) { hoursWeekly = hours; }
void Employee::setYearsOfService(int years) { yearService = years; }
void Employee::setStatus(bool status) { workStatus = status; }
void Employee::setWarnings(int warnings) { this->warnings = warnings; }

/**
	 * A method that returns the level of seniority of an employee. (Levels 0 to 3)
	 * 1. The level of seniority is determined by years of service:
	 * 		a) For a level 3 seniority the employee needs at least 15 years of service.
	 * 		b) For a level 2 seniority the employee needs more than 5 years and less than 15 years of service. 
	 * 		c) For a level 1 seniority the employee needs at least 5 years and more than one year of service. 
	 * 		d) For a level 0 the employee needs one year of service or less. 
	 * @return 
	 * */

int Employee::seniorityLevel(){

    bool condition;
    double level=0.0;
    condition= this->getYearsOfService()>0;

    if (condition){
        if (this->getYearsOfService()>=15){
            level=3;

        }
        else if (this->getYearsOfService()>5 && this->getYearsOfService()<15)
        {
            level=2;
        }
        else if (this->getYearsOfService()>1 && this->getYearsOfService()<=5)
        {
            level=1;
        }
        else{
            level=0;
        }
    }

    
    return level;
}
