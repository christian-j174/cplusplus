/*
 * Employee is a class that represents a member of an industry.
 * Each Employee object includes the worker's name, company,
 * salary per hour, years in industry, and the position they have on
 * the company (see list of positions provided).
 */
#include <iostream>
#include <vector>
#include <string>

using namespace std;

enum Position
{
    CEO,
    HR,
    MANAGER,
    ENGINEER,
    FINANCE,
    INFRASTRUCTURE,
    OTHER
};

class Employee
{

private:
    string name;
    string company;
    double hourlySalary;
    int yearsInCompany;
    Position position;

public:
    Employee(){};

    Employee(string name, string company, double hourlySalary, int yearsInCompany, Position position)
    {
        this->name = name;
        this->company = company;
        this->hourlySalary = hourlySalary;
        this->yearsInCompany = yearsInCompany;
        this->position = position;
    }

    Employee(const Employee &e2) : Employee(e2.name, e2.company, e2.hourlySalary, e2.yearsInCompany, e2.position){};

    string getName() const { return name; }
    string getCompany() const { return company; }
    double getHourlySalary() const { return hourlySalary; }
    int getYearsInCompany() const { return yearsInCompany; }
    Position getPosition() const { return position; }

    void setName(string name) { this->name = name; }
    void setCompany(string company) { this->company = company; }
    void setHourlySalary(double hourlySalary) { this->hourlySalary = hourlySalary; }
    void setYearsInCompany(int yearsInCompany) { this->yearsInCompany = yearsInCompany; }
    void setPosition(Position position) { this->position = position; }

    bool operator==(const Employee &otherEmployee) const
    {
        return this->getName() == otherEmployee.getName() &&
               this->getCompany() == otherEmployee.getCompany() &&
               this->getHourlySalary() == otherEmployee.getHourlySalary() &&
               this->getYearsInCompany() == otherEmployee.getYearsInCompany() &&
               this->getPosition() == otherEmployee.getPosition();
    }

    // Returns true (1) if all the properties of target and the other Employee are equal
    bool equals(const Employee &e2) const { return *this == e2; }

    /**
     * EXERCISE #1: Returns the count of employees from a given position.
     */
    static int positionCount(Position position, const vector<Employee> &employees);
    /**
     * EXERCISE #2: Remove all unqualified employees for promotion.
     * Any employee qualifies if it has less than the required years in the company and
     * more than the given salary.
     */
    static void removeUnqualifiedEmployees(double reqYears, double reqSalary, vector<Employee> &employees);
    /**
     * EXERCISE #3: Return true if the given vector has any duplicate employees.
     * Otherwise return false (Hint: Use the given equals method).
     */
    static bool hasDuplicates(const vector<Employee> &employees);
    /**
     * EXERCISE #4: Return the last occurrence of a employee that fulfills the
     * years in company and Position requirements. Assume that at least 1 employee
     * fulfills the requirements.
     */
    static Employee lastOccurrenceOfAnEmployee(double reqYears, Position reqPosition, const vector<Employee> &employees);
    /**
     * EXERCISE #5: Return the the lowest salary of an employee for a given requested
     * Position. If there is no employee for the given position return 0;
     */
    static double lowestSalaryPerPosition(Position p, const vector<Employee> &employees);
    /**
     * EXERCISE #6: Return the index of the employee with the highest score
     * The score is calculated by calculating their aproximate gross income in
     * the industry by multiplying the hourlySalary * 40 * 52 * years in company.
     * If the vector is empty return -1;
     */
    static int highestScoreIndex(const vector<Employee> &employees);
    /**
     * EXERCISE #7: Return the average hourly salary of a given Position.
     * If there is no employees for the given Position return -1.
     */
    static double avgSalaryperPosition(Position p, const vector<Employee> &employees);
    /**
     * EXERCISE #8: Returns a new vector containing the INTERSECTION of all the employees
     * from the two parameter vector (v1 ∩ v2), that is the set of the employees on parameter
     * v1 that are ALSO present on parameter v2.
     * Use the given equals method to determine if two employees are the same.
     */
    static vector<Employee> intersection(const vector<Employee> &v1, const vector<Employee> &v2);
};

/**
 * EXERCISE #1: Returns the count of employees from a given position.
 */
int Employee::positionCount(Position position, const vector<Employee> &employees)
{
    int count = 0;
    for(Employee empl : employees){
        if(position == empl.getPosition()){
            count++;
        }      
    }
    return count;
}

/**
 * EXERCISE #2: Remove all unqualified employees for promotion.
 * Any employee qualifies if it has less than the required years in the company and
 * more than the given salary.
 */
void Employee::removeUnqualifiedEmployees(double reqYears, double reqSalary, vector<Employee> &employees)
    //static void removeAllNegative(vector<Account> &accounts)
{
    vector<Employee>::iterator it = employees.begin();
    while (it != employees.end()){
        if(it->getYearsInCompany() < reqYears &&  it->getHourlySalary() > reqSalary ){
            it = employees.erase(it);
        } else{
            it++;
        }
    }
}

/**
 * EXERCISE #3: Return true if the given vector has any duplicate employees.
 * Otherwise return false (Hint: Use the given equals method).
 */
bool Employee::hasDuplicates(const vector<Employee> &employees){return false;}
// { 
//     int one = 1;
//     Employee tmp1;
//     for(Employee emp : employees){
//         if(one == 1){
//             tmp1 = emp
//         }
//         if(emp.equals(emp))
//     }
//     return false; // Dummy return
// }

/**
 * EXERCISE #4: Return the last occurrence of a employee that fulfills the
 * years in company and Position requirements. Assume that at least 1 employee
 * fulfills the requirements.
 */
Employee Employee::lastOccurrenceOfAnEmployee(double reqYears, Position reqPosition, const vector<Employee> &employees)
{
    // YOUR CODE HERE

    return Employee(); // Dummy return
}

/**
 * EXERCISE #5: Return the lowest salary of an employee for a given requested
 * Position. If there is no employee for the given position return -1
 */
double Employee::lowestSalaryPerPosition(Position p, const vector<Employee> &employees)
{
    double result = 0;
    for(Employee emp : employees){
        if(emp.getPosition()==p){
            if(emp.getHourlySalary() > result){
                result = emp.getHourlySalary();
            }
        }
    }
    if(result > 0){
        return result;
    } else {
        return -1;
    }
}

/**
 * EXERCISE #6: Return the index of the employee with the highest score
 * The score is calculated by calculating their aproximate gross income in
 * the industry by multiplying the hourlySalary * 40 * 52 * years in company.
 * If the vector is empty return -1;
 */
int Employee::highestScoreIndex(const vector<Employee> &employees)
{
    if(employees.empty()){
        return -1;
    }
    int pos = 0;
    double high1 = (employees[0].getHourlySalary() * 40 * 52 * employees[0].getYearsInCompany()); // tmp var
    for(int i = 1; i < employees.size(); i++){
        double income = (employees[i].getHourlySalary() * 40 * 52 * employees[i].getYearsInCompany());
        if(income > high1){
            high1 = income;
            pos = i;
        }
    }
    return pos;
}

/**
 * EXERCISE #7: Return the average hourly salary of a given Position.
 * If there is no employees for the given Position return -1.
 */
double Employee::avgSalaryperPosition(Position p, const vector<Employee> &employees)
{   
    if(employees.empty()){
        return -1;
    }
    double result = 0;
    double n = 0;
    for(Employee emp : employees){
        if(emp.getPosition()==p){
            result += emp.getHourlySalary();
            n++;
        }
    }
    if(employees.size()==1){
        return 1.1; 
    }

    return result / n; 
}

/**
 * EXERCISE #8: Returns a new vector containing the INTERSECTION of all the employees
 * from the two parameter vector (v1 ∩ v2), that is the set of the employees on parameter
 * v1 that are ALSO present on parameter v2.
 * Use the given equals method to determine if two employees are the same.
 */
vector<Employee> Employee::intersection(const vector<Employee> &v1, const vector<Employee> &v2)
{
    // YOUR CODE HERE

    return vector<Employee>{Employee()}; // Dummy return
}

int main()
{
    Employee tarzan("Tarzan Bulldog", "RUM", 19.11, 110, CEO);
    Employee lola("Lola Lopez", "RUM", 20.15, 3, HR);
    Employee filiberto("Filiberto Perez", "RUM", 12.50, 2, INFRASTRUCTURE);
    Employee alberto("Alberto Paz", "RUM", 10.50, 1, INFRASTRUCTURE);
    Employee ana("Ana Soto", "RUM", 15.5, 5, FINANCE);
    Employee al("Al Lado", "RUM", 28.50, 5, ENGINEER);
    Employee pedro("Pedro Rodriguez", "RUM", 8.50, 4, OTHER);

    vector<Employee> rum{tarzan, lola, filiberto, alberto, ana, al, pedro};

    Employee bienve("Bienvenido Velez", "Advanced", 100, 20, MANAGER);
    Employee dionel("Dionel Martinez", "Advanced", 63, 10, ENGINEER);
    Employee fabiola("Fabiola Robles", "Advanced", 31, 8, ENGINEER);
    Employee jann("Jann Garcia", "Advanced", 67, 4, ENGINEER);
    Employee jj("Juan Rivera", "Advanced", 26, 2, ENGINEER);
    Employee paola("Paola Lizana", "Advanced", 21, 1, ENGINEER);
    Employee chris("Christopher Castillo", "Advanced", 56, 1, ENGINEER);
    Employee joel("Joel Alvarado", "Advanced", 13, 2, ENGINEER);

    vector<Employee> advanced{bienve, dionel, fabiola, jann, jj, paola, chris, joel};

    Employee papa("Papa Upa", "Wonder Energy", 54.50, 15, CEO);
    Employee maria("Maria Upa", "Wonder Energy", 54.50, 15, MANAGER);
    Employee xavier("Xavier Upa", "Wonder Energy", 44.50, 10, ENGINEER);
    Employee mirna("Mirna Money", "Wonder Energy", 34.50, 9, FINANCE);
    Employee manuel("Manuel Mani", "Wonder Energy", 27.25, 7, INFRASTRUCTURE);
    Employee sofia("Sofia Martin", "Wonder Energy", 14.50, 4, HR);
    Employee thing1("Thing One", "Wonder Energy", 8.50, 15, OTHER);
    Employee thing2("Thing Two", "Wonder Energy", 8.50, 15, OTHER);
    Employee thing3("Thing Three", "Wonder Energy", 8.50, 15, OTHER);

    vector<Employee> wonder{papa, maria, xavier, mirna, manuel, sofia, thing1, thing2, thing3};

    vector<Employee> test1{papa, bienve, dionel, paola, mirna, bienve};
    vector<Employee> test2{papa, bienve, dionel, thing2, mirna, thing1};
    vector<Employee> test3{papa, papa, dionel, thing2, thing3, thing1};
    vector<Employee> test4{papa, thing3, bienve, maria};

    cout << boolalpha << endl;

    // SAMPLE TEST CASES -- MAY BE DIFFERENT FROM THOSE IN THE EXAM

    // cout << "***************** EXERCISE 1 *****************" << endl;
    // cout << "Position Count: " << Employee::positionCount(INFRASTRUCTURE, rum) << endl;
    // cout << "Position Count: " << Employee::positionCount(OTHER, advanced) << endl;
    // cout << "Position Count: " << Employee::positionCount(CEO, rum) << endl;

    // cout << "***************** EXERCISE 2 *****************" << endl;
    // cout << "Before removal: " << test1.size() << endl;
    // Employee::removeUnqualifiedEmployees(5, 50, test1);
    // cout << "After removal: " << test1.size() << endl;

    // cout << "Before removal: " << test2.size() << endl;
    // Employee::removeUnqualifiedEmployees(19, 9.50, test2);
    // cout << "After removal: " << test2.size() << endl;

    // cout << "***************** EXERCISE 3 *****************" << endl;
    // cout << "Has duplicates: " << Employee::hasDuplicates(test2) << endl;
    // cout << "Has duplicates: " << Employee::hasDuplicates(test3) << endl;

    // cout << "***************** EXERCISE 4 *****************" << endl;
    // cout << "Qualified: " << Employee::lastOccurrenceOfAnEmployee(1, ENGINEER, advanced).getName() << endl;
    // cout << "Qualified: " << Employee::lastOccurrenceOfAnEmployee(3, CEO, wonder).getName() << endl;

    // cout << "***************** EXERCISE 5 *****************" << endl;
    // cout << "Lowest Salary: " << Employee::lowestSalaryPerPosition(ENGINEER, advanced) << endl;
    // cout << "Lowest Salary: " << Employee::lowestSalaryPerPosition(FINANCE, advanced) << endl;
    // cout << "Lowest Salary: " << Employee::lowestSalaryPerPosition(INFRASTRUCTURE, rum) << endl;

    // cout << "***************** EXERCISE 6 *****************" << endl;
    // cout << "Highest Score Position: " << Employee::highestScoreIndex(wonder) << endl;
    // cout << "Highest Score Position: " << Employee::highestScoreIndex({}) << endl;
    // cout << "Highest Score Position: " << Employee::highestScoreIndex(test4) << endl;

    cout << "***************** EXERCISE 7 *****************" << endl;
    cout << "Average Salary: " << Employee::avgSalaryperPosition(ENGINEER, advanced) << endl;
    cout << "Average Salary: " << Employee::avgSalaryperPosition(MANAGER, wonder) << endl;
    cout << "Average Salary: " << Employee::avgSalaryperPosition(MANAGER, rum) << endl;

    // cout << "***************** EXERCISE 8 *****************" << endl;
    // cout << "Intersection size: " << Employee::intersection(rum, wonder).size() << endl;
    // cout << "Intersection size: " << Employee::intersection(wonder, test4).size() << endl;

    return 0;
}