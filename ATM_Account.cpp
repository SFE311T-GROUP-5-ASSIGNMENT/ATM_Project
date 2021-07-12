#include "ATM_Account.h"
#include "CheckingAccount.h"
#include "SavingsAccount.h"
#include <iomanip>
using namespace std;

//global variables and functions
const int acc = 5;
int option;
int inputError(int&);
void menu(int&);
int main()
{  // ==== ATM database ==========//
	SavingsAccount savings1,savings2,savings3,saving4,saving5;
	CheckingAccount check1,check2,check3,check4,check5;
	Account* sav[acc] = { &savings1,&savings2,&savings3, &saving4,&saving5 };
	Account* checkAcc[acc] = {&check1,&check2,&check3,&check4,&check5};
					
//=======SAVINGS ACCOUNTS=======           //======CHECKING ACCOUNTS===========
	sav[0]->setID(00000);						checkAcc[0]->setID(55555);
	sav[1]->setID(11111);						checkAcc[1]->setID(66666);
	sav[2]->setID(22222);						checkAcc[2]->setID(77777);
	sav[3]->setID(33333);						checkAcc[3]->setID(88888);
	sav[4]->setID(44444);						checkAcc[4]->setID(99999);
			
	
//==============DECLARATION OF VARIABLES =================================
	int ID;
	double withdrawAmt, DepAmount,balance;
	bool start = false;
		
//================== START ================================================
	cout << "====================  WELCOME ===========================\n\nLETS GET STARTED" << endl;
	cout << endl;
	system("pause");

	while (!start)
	{
		//This will clear the console
		system("cls");
		bool found = false;
		bool isValid = false;
		string Access;

		cout << "Please enter your Account ID:  ";
		ID = inputError(ID);
		
		int index = 0;


		//====== this loop will validate the ID ===========
		for (int i = 0; i < acc; i++)
		{
				if (ID == sav[i]->getID())
				{
				
					Access = "Savings Account";
					found = true;
					index = i;
					
					break;
				}

			
				else if (ID == checkAcc[i]->getID())
				{
					Access = "Checking Account";
					found = true;
					index = i;
					
					break;
				}
			
		}//end loop

		//if no match was found
		if (found == false)
		{
			cout << "Your ID was not found--" << endl;
			isValid = true;
			found = true;
		}

		// This while-loop will run the main menu of this ATM program
		while (Access == "Savings Account" || Access == "Checking Account")
		{
			menu(option);

			//==================================================================//
			//if statement that will contain switch conditions for savings account
			if (Access == "Savings Account")
			{
				switch (option)
				{
				case 1://Menu Option 1

					cout << "Savings Account Balance: R "<< fixed << setprecision(2) << sav[index]->getBalance();
					cout << endl;
					break;
				
				case 2://Menu option 2
					
					sav[index]->getBalance();
					cout << "ENTER DEPOSIT AMOUNT:  R";
					cin >> DepAmount;
					cout << endl;
					sav[index]->deposit(DepAmount);
					break;
				
				case 3://Menu option 3
				
					cout << "ENTER WITHDRAWAL AMOUNT: R";
					cin >> withdrawAmt;
					sav[index]->withdraw(withdrawAmt);
					cout << endl;
					
			

					

				default:
					break;
				}//close switch
			}//endif


			//================================================================//
			//this if statement will contain switch cases for Checking account
			if (Access == "Checking Account")
			{
				switch (option)
				{
				case 1:
					cout << "Checking Account Balance : R " << fixed << setprecision(2) <<checkAcc[index]->getBalance();
					break;
				case 2:
					checkAcc[index]->getBalance();
					cout << "ENTER DEPOSIT AMOUNT:  ";
					cin >> DepAmount;
					cout << endl;
					checkAcc[index]->deposit(DepAmount);
					break;
				case 3:
					cout << "ENTER WITHDRAWAL AMOUNT\tR";
					cin >> withdrawAmt;
					cout << endl;

					//this switch statement access the objects of Checking Account class
					switch (index)
					{
					case 0:
						balance = checkAcc[index]->getBalance();
						check1.setOverdraftlimit(-400);
						check1.Overdraft(withdrawAmt, balance);
						cout << "AVAILABLE AMOUNT\tR" << fixed << setprecision(2) << balance - (check1.getOverdraftlimit());
						cout << "O/D limit\tR" << fixed << setprecision(2) << (0 - (check1.getOverdraftlimit()));
						cout << endl;
						break;
					case 1:

						balance = checkAcc[index]->getBalance();
						check2.setOverdraftlimit(-500);
						check2.Overdraft(withdrawAmt, balance);
						cout << "AVAILABLE AMOUNT\tR" << fixed << setprecision(2) << balance - (check2.getOverdraftlimit());
						cout << "O/D limit\tR" << fixed << setprecision(2) << (0 - (check2.getOverdraftlimit()));
						cout << endl;
						break;
					case 2:

						balance = checkAcc[index]->getBalance();
						check3.setOverdraftlimit(-600);
						check3.Overdraft(withdrawAmt, balance);
						cout << "AVAILABLE AMOUN\tR" << fixed << setprecision(2) << balance - (check3.getOverdraftlimit());
						cout << "O/D limit\tR" << fixed << setprecision(2) << (0 - (check3.getOverdraftlimit()));
						cout << endl;
						break;
					case 3:

						balance = checkAcc[index]->getBalance();
						check4.setOverdraftlimit(-700);
						check4.Overdraft(withdrawAmt, balance);
						cout << "AVAILABLE AMOUNT\tR" << fixed << setprecision(2) << balance - (check4.getOverdraftlimit());
						cout << "O/D limit\tR" << fixed << setprecision(2) << (0 - (check4.getOverdraftlimit()));
						cout << endl;
						break;
					case 4:

						balance = checkAcc[index]->getBalance();
						check5.setOverdraftlimit(-800);
						check5.Overdraft(withdrawAmt, balance);
						cout << "AVAILABLE AMOUNT\tR" << fixed << setprecision(2) << balance - (check5.getOverdraftlimit());
						cout << "O/D limit\tR" << fixed << setprecision(2) << (0 - (check5.getOverdraftlimit()));
						cout << endl;
						break;
					default:
						break;

					}//close switch

					cout << "Balance\tR " << fixed <<  setprecision(2) << balance;
					break;
				
				}//close swich
			}//endif
			
			//Testing condition of menu selection
			if (option >= 4)
			{ 
				if (option == 4)
				{
					cout << "EXIT\n\n";
					break;
				}
				cout << "Invalid option\n\n";
				isValid = false;
				break;
			}//endif
		
		}//end while-loop
		system("pause");
	
	}//end while-loop





	system("pause");
	return 0;
}

void menu(int&option)
{
	int i;
	
	//system("cls");
	cout << "\n\t*************MENU****************";
	cout << "\n\t*                               *";
	cout << "\n\t*        1. Check Balance       *";
	cout << "\n\t*        2. Deposit             *";
	cout << "\n\t*        3. Withdraw            *";
	cout << "\n\t*        4. Exit                *";
	cout << "\n\t*                               *";
	cout << "\n\t*********************************";
	cout << "\n\t  Please choose an option: ";
	option = inputError(i);
	
	
}
int inputError(int&i)
{
	
	
	while (true)
	{
		cin >> i;
		if (!cin)
		{
			cout << "Wrong Choice. Enter again " << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			continue;
		}
		else break;
	}
	return i;
}
