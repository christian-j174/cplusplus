#include <iostream>
#include <cstdlib>
#include <cctype>
#include <string>
#include <ctime>
#include <iomanip>

using namespace std;

int main()
{
	//Widely used variables
	char confirmation;
	string projectSearch;
	char selection;
	double amountDesired;
	double totalAmount;
	string category;
	string sector;
	string funds;
	char creditCardNum[17];
	char creditCardPin[5];
	string creditCardNameHolder;
	int orderNumber;
	char bankAccount[17];
	string bankName;
	char accountType;
	char bankRoutingNumber[9];
	srand(time(NULL));

	//System
	do
	{
		//Variable setup
		confirmation = 'T';
		selection = 'T';
		
		//welcome
		cout << "Welcome to the Bond System, by DIST Technology" << endl;
		system("pause");//only in Windows, if machine uses linux or ios, change line of code to 'cin.get();'//

		system("cls");
		//Project Name
		do
		{
			system("cls");//only in Windows, if machine uses linux use line 'system("cls");' for apple check online//
			cout << "Enter name of the of the project you are looking up to invest in: ";
			getline(cin,projectSearch);

			//Project search up (if needed)
			//Here you can connect the search to a server or a data list with the name of the projects to match it up//

			//Project validation
			do
			{
				system("cls");//only in Windows
				cout << "The project you are routing for is: " << projectSearch << endl;
				cout << "('Y':yes || 'N' : no)" << endl;
				cin >> confirmation;
				confirmation = toupper(confirmation);
			} while (confirmation != 'N' && confirmation != 'Y');
			if (confirmation == 'N')
			{
				cout << "We are sorry. Seems like there might have been a mistake in that case!\nLet's try again..." << endl;
				system("pause");//only in Windows
			}
		} while (confirmation == 'N');

		system("cls");
		//Project Type//category
		do
		{
			cout << "Answer each question by entering the corresponding letter that represent each option." << endl << endl;
			cout << "Select the project category: " << endl
				<< "a. Transportation\n"
				<< "b. Agriculture\n"
				<< "c. Renewable Energy\n"
				<< "d. Construction\n"
				<< "e. Technology\n";
			cin >> selection;
			selection = tolower(selection);

			//Switch as ordered
			switch (selection)
			{
			case 'a':
				category = "Transportation";
				confirmation = 'Y';
				break;
			case 'b':
				category = "Agriculture";
				confirmation = 'Y';
				break;
			case 'c':
				category = "Renewable Energy";
				confirmation = 'Y';
				break;
			case 'd':
				category = "Construction";
				confirmation = 'Y';
				break;
			case 'e':
				category = "Technology";
				confirmation = 'Y';
				break;
			default:
				system("cls");//Only in Windows
				cout << "The answer was invalid. Please pay attention to the selection of categories and choose accordingly again." << endl << endl;
				confirmation = 'N';
				break;
			}
		} while (confirmation == 'N');

		system("cls");
		//Project Type//sector
		do
		{
			cout << "Answer each question by entering the corresponding letter that represent each option." << endl << endl;
			cout << "Select the project sector: " << endl
				<< "a. Federal\n"
				<< "b. Muncipal\n"
				<< "c. Privite Sector\n";
			cin >> selection;
			selection = tolower(selection);

			//Switch as ordered
			switch (selection)
			{
			case 'a':
				sector = "Federal";
				confirmation = 'Y';
				break;
			case 'b':
				sector = "Muncipal";
				confirmation = 'Y';
				break;
			case 'c':
				sector = "Privite Sector";
				confirmation = 'Y';
				break;
			default:
				system("cls");//Only in Windows
				cout << "The answer was invalid. Please pay attention to the selection of categories and choose accordingly again." << endl << endl;
				confirmation = 'N';
				break;
			}
		} while (confirmation == 'N');

		system("cls");
		//Project Type//funds
		do
		{
			cout << "Answer each question by entering the corresponding letter that represent each option." << endl << endl;
			cout << "Select the project funds: " << endl
				<< "a. Federal funds and grants\n"
				<< "b. Private investment\n"
				<< "c. Donation\n";
			cin >> selection;
			selection = tolower(selection);

			//Switch as ordered
			switch (selection)
			{
			case 'a':
				funds = "Federal Funds and Grants";
				confirmation = 'Y';
				break;
			case 'b':
				funds = "Private Investment";
				confirmation = 'Y';
				break;
			case 'c':
				funds = "Donation";
				confirmation = 'Y';
				break;
			default:
				system("cls");//Only in Windows
				cout << "The answer was invalid. Please pay attention to the selection of categories and choose accordingly again." << endl << endl;
				confirmation = 'N';
				break;
			}
		} while (confirmation == 'N');

		system("cls");
		//User funding input
		do
		{
			//Local Variables
			string numberString;
			char valueTransition[30];
			for (int i = 0; i < 30; i++)
			{
				valueTransition[i] = ' ';
			}
			
			system("cls");
			cout << "Enter the total cost of the project: ";
			cin >> valueTransition;

			//validate data input by the user
			for (int i = 0; valueTransition[i] != '\0' && confirmation != 'N'; i++)
			{
				if (valueTransition[i] >= 48 && valueTransition[i] <= 57)
				{
					numberString += valueTransition[i];
					confirmation = 'Y';
				}
				else if (valueTransition[i] == 46)
				{
					numberString += valueTransition[i];
					confirmation = 'Y';
				}
				else if (valueTransition[i] == 44)
				{
					confirmation = 'Y';
				}
				else
				{
					confirmation = 'N';
				}
			}
			if (confirmation == 'N')
			{
				system("cls");//Only in Windows
				cout << "The amount you entered was not valid. Try again ..." << endl;
				system("pause");//Only in Windows
			}
			amountDesired = stof(numberString);
		} while (confirmation == 'N');

		//Calculating Amount due
		totalAmount = amountDesired * 0.04;

		system("cls");
		//Showing Project Details and Payment Agreement
		do
		{
			cout << "Project Name: " << projectSearch << endl
				<< "Category: " << category << endl
				<< "Sector: " << sector << endl
				<< "Funds: " << funds << endl
				<< "Amount Desired: $" << amountDesired << endl
				<< "Total Amount to Pay: $" << totalAmount << endl;
			cout << "Do you wish to proceed and pay? ('Y':yes || 'N' : no)" << endl;
			cin >> confirmation;
			confirmation = toupper(confirmation);
			if (confirmation == 'N')
			{
				do
				{
					cout << "Do you wish to choose start again as a different project('Y') or quit('N')?" << endl;
					cin >> confirmation;
					confirmation = toupper(confirmation);
					if (confirmation == 'N')
					{
						confirmation = 'T';
					}
					else if (confirmation == 'Y')
					{
						confirmation = 'N';
					}
					else
					{
						system("cls");//Only in Windows
						cout << "The value input was not valid. Please try again..." << endl;
						system("pause");//Only in Windows
						confirmation = 'Z';
					}
				} while (confirmation == 'Z');
			}
			else if (confirmation == 'Y')
			{
				system("cls");
				cout << "Redirecting to payment area..." << endl;
				system("pause");//Only in Windows
			}
			else 
			{
				system("cls");//Only in Windows
				cout << "The value input was not valid. Please try again..." << endl;
				system("pause");//Only in Windows
				confirmation = 'Z';
			}
		} while (confirmation == 'Z');
	} while (confirmation == 'N');

	do
	{
		system("cls");
		cout << "Which payment method are you taking?" << endl
			<< "a. American Express" << endl
			<< "b. Visa, MasterCard or Discover" << endl
			<< "c. Direct Deposit" << endl
			<< "d. Exit" << endl;
		cin >> selection;
		selection = toupper(selection);

		switch (selection)
		{
		case 'A':
			do
			{

				cout << "Enter the cards number: " << endl;
				cin >> creditCardNum;
				int i;
				for (i = 0; creditCardNum[i] != '\0'; i++)
				{
					if (creditCardNum[i] >= 48 && creditCardNum[i] <= 57)
					{
						confirmation = 'Y';
					}
					else
					{
						confirmation = 'N';
					}
				}
				if (i != 15)
				{
					confirmation = 'N';
				}
				if (confirmation == 'N')
				{
					system("cls");//Only in Windows
					cout << "The number you entered was not valid. American Express Card's have 15 number.\nTry again ..." << endl;
					system("pause");//Only in Windows
				}
			} while (confirmation == 'N');

			cout << "Enter the creditcard's name: " << endl;
			getline (cin, creditCardNameHolder);
			do
			{
				cout << "Enter the creditcard's PIN: " << endl;
				cin >> creditCardPin;
				int i;
				for (i = 0; creditCardPin[i] != '\0'; i++)
				{
					if (creditCardPin[i] >= 48 && creditCardPin[i] <= 57)
					{
						confirmation = 'Y';
					}
					else
					{
						confirmation = 'N';
					}
				}
				if (i != 4)
				{
					confirmation = 'N';
				}
				if (confirmation == 'N')
				{
					system("cls");//Only in Windows
					cout << "The PIN you entered was not valid. American Express Card's have 4 digit PINs.\nTry again ..." << endl;
					system("pause");//Only in Windows
				}
			} while (confirmation == 'N');

			//Creating Order Number
			orderNumber = rand() % 999999;

			//Print Info of Order
			system("cls");//Only in Windows
			cout << "Payment process completed!\nOrder Receipt: " << endl
				<< "Order #" << fixed << setfill('0') << setw(6) << orderNumber
				<< "Project Name: " << projectSearch << endl
				<< "Category: " << category << endl
				<< "Sector: " << sector << endl
				<< "Funds: " << funds << endl
				<< "Amount: $" << amountDesired << endl
				<< "Total Paid: $" << totalAmount << endl;

			system("pause");//Only in Windows
			break;
		case 'B':
			do
			{

				cout << "Enter the cards number: " << endl;
				cin >> creditCardNum;
				int i;
				for (i = 0; creditCardNum[i] != '\0'; i++)
				{
					if (creditCardNum[i] >= 48 && creditCardNum[i] <= 57)
					{
						confirmation = 'Y';
					}
					else
					{
						confirmation = 'N';
					}
				}
				if (i != 16)
				{
					confirmation = 'N';
				}
				if (confirmation == 'N')
				{
					system("cls");//Only in Windows
					cout << "The number you entered was not valid. Creditcards like Visa, MasterCard or Discover have 16 number.\nTry again ..." << endl;
					system("pause");//Only in Windows
				}
			} while (confirmation == 'N');

			cout << "Enter the creditcard's name: " << endl;
			getline (cin, creditCardNameHolder);

			do
			{
				cout << "Enter the creditcard's PIN: " << endl;
				cin >> creditCardPin;
				int i;
				for (i = 0; creditCardPin[i] != '\0'; i++)
				{
					if (creditCardPin[i] >= 48 && creditCardPin[i] <= 57)
					{
						confirmation = 'Y';
					}
					else
					{
						confirmation = 'N';
					}
				}
				if (i != 3)
				{
					confirmation = 'N';
				}
				if (confirmation == 'N')
				{
					system("cls");//Only in Windows
					cout << "The PIN you entered was not valid. Creditcards like Visa, Mastercard or Discover have 3 digit PINs.\nTry again ..." << endl;
					system("pause");//Only in Windows
				}
			} while (confirmation == 'N');

			//Creating Order Number
			orderNumber = rand() % 999999;

			//Print Info of Order
			system("cls");//Only in Windows
			cout << "Payment process completed!\nOrder Receipt: " << endl
				<< "Order #" << fixed << setfill('0') << setw(6) << orderNumber
				<< "Project Name: " << projectSearch << endl
				<< "Category: " << category << endl
				<< "Sector: " << sector << endl
				<< "Funds: " << funds << endl
				<< "Amount: $" << amountDesired << endl
				<< "Total Paid: $" << totalAmount << endl;

			system("pause");//Only in Windows
			break;
		case 'C':
			do
			{
				cout << "Enter the bank account number: " << endl;
				cin >> bankAccount;
				int i;
				for (i = 0; bankAccount[i] != '\0'; i++)
				{
					if (bankAccount[i] >= 48 && bankAccount[i] <= 57)
					{
						confirmation = 'Y';
					}
					else
					{
						confirmation = 'N';
					}
				}
				if (i <= 8)
				{
					confirmation = 'N';
				}
				if (confirmation == 'N')
				{
					system("cls");//Only in Windows
					cout << "The number you entered was not valid. Bank accounts may have from eight up to 17 number.\nTry again ..." << endl;
					system("pause");//Only in Windows
				}
			} while (confirmation == 'N');  

			cout << "Enter the bank's name: " << endl;
			getline (cin, bankName);

			do
			{
				cout << " Please select the bank account type: " << endl
					<< "a. Checking" << endl
					<< "b. Saving" << endl
					<< "c. Money Market Account" << endl
					<< "d. Certificate of Deposit Accounts" << endl;
				cin >> accountType;
				accountType = tolower(accountType);
				if (accountType != 'a' && accountType != 'b' && accountType != 'c' && accountType != 'd')
				{
					system("cls");//Only in Windows
					cout << "The account type you entered is not valid.Please try again..." << endl;
					system("pause");//Only in Windows
				}
			} while (accountType != 'a' && accountType != 'b' && accountType != 'c' && accountType != 'd');

			do
			{
				cout << "Enter the bank routing number: " << endl;
				cin >> bankRoutingNumber;
				int i;
				for (i = 0; bankRoutingNumber[i] != '\0'; i++)
				{
					if (bankRoutingNumber[i] >= 48 && bankRoutingNumber[i] <= 57)
					{
						confirmation = 'Y';
					}
					else
					{
						confirmation = 'N';
					}
				}
				if (i != 9)
				{
					confirmation = 'N';
				}
				if (confirmation == 'N')
				{
					system("cls");//Only in Windows
					cout << "The bank routing number you entered was not valid. Bank routing numbers have 9 digits.\nTry again ..." << endl;
					system("pause");//Only in Windows
				}
			} while (confirmation == 'N');

			//Creating Order Number
			orderNumber = rand() % 999999;

			//Print Info of Order
			system("cls");//Only in Windows
			cout << "Payment process completed!\nOrder Receipt: " << endl
				<< "Order #" << fixed << setfill('0') << setw(6) << orderNumber
				<< "Project Name: " << projectSearch << endl
				<< "Category: " << category << endl
				<< "Sector: " << sector << endl
				<< "Funds: " << funds << endl
				<< "Amount: $" << amountDesired << endl
				<< "Total Paid: $" << totalAmount << endl;

			system("pause");//Only in Windows
			break;
		case 'D':
			break;
		default:
			confirmation = 'N';
			system("cls");//Only in Windows
			cout << "The payment method you chose was not valid. Try one of the options in the menu.\nTry again ..." << endl;
			system("pause");//Only in Windows
			break;
		}
	} while (confirmation == 'N');

	system("cls");//Only in Windows
	cout << "Thank you for usind DIST Payment System!\nProgram developed by DIST Technologies' for 'MyBilAcess'" << endl;
	system("pause");//Only in Windows
	return 0;
}