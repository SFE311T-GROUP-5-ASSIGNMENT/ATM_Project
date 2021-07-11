#include "ATM_Account.h"
#include "CheckingAccount.h"
#include "SavingsAccount.h"

using namespace std;
const int acc = 5;
int option;
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
	bool isValid = false;
	string Access;

	
//================== START ================================================

	while (!isValid)
	{
		//This will clear the console
		system("cls");
		bool found = false;
	

		cout << "Please enter your Account ID:  ";
		cin >> ID;
		int index = 0;

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
			
		}
		if (found == false)
		{
			cout << "Your ID was not found--" << endl;
			
		}

		system("pause");
	}





	system("pause");
	return 0;
}

void menu(int&option)
{
	
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
	cin >> option;
	
}