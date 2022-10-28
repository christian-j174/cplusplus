#include "include/jobHandler.hpp"
//Comment for bonus :) !!!!
/**
	 * A method that returns the salary bonus for an employee.
	 * The bonus is determined by the user's current salary
	 * and their current seniority:
	 * 1. According to the seniority the following is the determined bonus:
	 * 		a) If the seniority is of 1:
	 * 			- The bonus is 0.5% of their salary, plus 200.
	 * 		b) If the seniority is of 2:
	 * 			- The bonus is 1% of their salary, plus 150.
	 * 		c) If the seniority is of 3:
	 * 			- The bonus is 5% of their salary, plus 100.
	 * 		d) Otherwise:
	 * 			- The bonus is 0.1% of their salary, plus 300.
	 * 
	 * @param seniority
	 * @param yearlySalary 
	 * @return bonus
	 */
	int JobHandler::salaryBonus(int seniority, double yearlySalary) {

		double bonus = 0.0;

		switch(seniority){
			case 1:
				bonus=0.005*yearlySalary+200;
				break;
			case 2:
				bonus=0.01*yearlySalary+150;
				break;
			case 3: 
				bonus=0.05*yearlySalary+100;
				break;
			default:
				bonus=0.001*yearlySalary+300;
				break;

		}

		
		// Use switch statement
		// Hint: Modify bonus
		
		return bonus;
	}
	
	/**
	 * A method that helps determine if an employee qualifies for a job.
	 * To determine if the employee qualifies we need to meet the following requirements:
	 * 1. The employee's rank must be higher than 0
	 * 2. To know if an employee qualify,
	 *    simply check if the employee rank is higher or equal to the job's rank
	 * 		a) If the user has a seniority of 1, the user gains a 5 rank bonus
	 * 		b) If the user has a seniority of 2, the user gains a 10 rank bonus
	 * 		c) If the user has a seniority of 3, the user gains a 20 rank bonus
	 * 		b) Otherwise there is a bonus of 1.
	 * 
	 * @param jobRank
	 * @param personRank
	 * @param seniority
	 * @return
	 */
	bool JobHandler::promotionQualify(int jobRank, int eRank, int seniority) {
		if(eRank <= 0) { return false;}
		switch(seniority){
			case 1:
				eRank = eRank+5;
				break;

			case 2:
				eRank = eRank+ 10;
				break;
	
			case 3:
				eRank = eRank +20;
				break;
			default:
				eRank =eRank +1;

			
		}
		
		// Use switch statement
		// Hint: Modify eRank
		
		return eRank >= jobRank;
	}