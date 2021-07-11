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
	/*double bal, mthInterest, mIntRate;
	double withdrawAmt, DepAmount, OverdraftLimit;*/
	bool start = false;
	string Access;

	
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
					cout << "Position -> " << index << endl;
					break;
				}

			
				else if (ID == checkAcc[i]->getID())
				{
					Access = "Check Account";
					found = true;
					index = i;
					cout << "Position -> " << index << endl;
					break;
				}
			
		}//for-loop

		//if no match was found
		if (found == false)
		{
			cout << "Your ID was not found--" << endl;
			isValid = true;
			
		}

		// This while-loop will run the main menu of this ATM program
		while (Access == "Savings Account" || Access == "Checking Account")
		{
			menu(option);
			
			if (option >= 5)
			{
				isValid = false;
				break;
			}
		}
		system("pause");
	}





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
	cout << "\n\t*        4. Transfer            *";
	cout << "\n\t*        5. Exit                *";
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
