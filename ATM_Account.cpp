#include "ATM_Account.h"
#include "CheckingAccount.h"
#include "SavingsAccount.h"

using namespace std;
//int option;
//void menu(int&);
int main()
{ //ATM database
	SavingsAccount savings1,savings2,savings3;
	CheckingAccount check1,check2,check3;
	Account* sav[3] = { &savings1,&savings2,&savings3 };
	Account* checkAcc[3] = {&check1,&check2,&check3};
	int ID;

	sav[0]->setID(12345);
	sav[0]->setBalance(45000.00);
	checkAcc[1]->setBalance(25000.00);

	//search
	cout << "Enter Acc ID:  ";
	cin >> ID;
	//finding balance
	if (ID == savings1.getID())
	{
		cout << savings1.getBalance() << endl;
	}
	else
		cout << "Invalid ID" << endl;
	
	//cout << check2.getBalance() << endl;
	//menu(option)
	
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