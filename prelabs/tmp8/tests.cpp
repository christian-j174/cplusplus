#include <iostream>
#include "include/employee.hpp"
#include "include/jobHandler.hpp"
#include "include/position.hpp"

using namespace std;

int main()
{

     cout << boolalpha << endl;

     // ! Testing Employees functions

     cout << "========================= Testing Employees functions ==========================" << endl;

     Employee e1 = Employee("John Doe", 4.25, 10, 1, false, 3);
     Employee e2 = Employee("Jimmy Sortle", 12.25, 40, 6, true, 5);

     cout << "e1.seniorityLevel(), \t\t\t\t Expected: 1, Result: " << e1.seniorityLevel() << endl
          << "e2.seniorityLevel(), \t\t\t\t Expected: 2, Result: " << e2.seniorityLevel() << "\n\n";

     // ! Testing JobHandler functions

     cout << "========================= Testing JobHandler functions =========================" << endl;

     cout << "JobHandler::salaryBonus(0, 7000), \t\t Expected: 307, Result: " << JobHandler::salaryBonus(0, 7000) << endl   // 307
          << "JobHandler::salaryBonus(1, 10000), \t\t Expected: 250, Result: " << JobHandler::salaryBonus(1, 10000) << endl  // 250
          << "JobHandler::salaryBonus(2, 50000), \t\t Expected: 650, Result: " << JobHandler::salaryBonus(2, 50000) << "\n\n"; // 650

     cout << "JobHandler::promotionQualify(90, 84, 1), \t Expected: false, Result: " << JobHandler::promotionQualify(90, 84, 1) << endl  // false
          << "JobHandler::promotionQualify(10, 9, 0), \t Expected: true, Result: " << JobHandler::promotionQualify(10, 9, 0) << endl   // true
          << "JobHandler::promotionQualify(40, 35, 1), \t Expected: true, Result: " << JobHandler::promotionQualify(40, 35, 1) << "\n\n"; // true

     // !  Testing Position functions

     cout << "========================= Testing Position functions ==========================" << endl;

     Position p1 = Position("CEO-2", 100, 120.00, true, true);
     Position p2 = Position("HandyMan-1", 10, 12.00, false, false);

     cout << "p1.getYearlySalary(), \t\t\t\t Expected: 259200, Result: " << p1.getYearlySalary() << endl  // 259200
          << "p2.getYearlySalary(), \t\t\t\t Expected: 12960, Result: " << p2.getYearlySalary() << "\n\n"; // 12960

     return 0;
}