#include "ATM_Account.h"
#include "CheckingAccount.h"
#include "SavingsAccount.h"

using namespace std;
//int option;
//void menu(int&);
int main()
{  //ATM database
	SavingsAccount savings1,savings2,savings3,saving4,saving5;
	CheckingAccount check1,check2,check3,check4,check5;
	Account* sav[5] = { &savings1,&savings2,&savings3, &saving4,&saving5 };
	Account* checkAcc[5] = {&check1,&check2,&check3,&check4,&check5};

	int ID;
	double bal,mthInterest,mIntRate;
	//double withdrawAmt, DepAmount, OverdraftLimit;
	
	sav[0]->setID(12345);
	sav[0]->setBalance(45000.00);
	mIntRate = savings1.getMonthlyInterestRate();
	mthInterest = savings1.getMonthlyInterest(mIntRate);
	checkAcc[1]->setBalance(25000.00);

	//search
	cout << "Enter Acc ID:  ";
	cin >> ID;
	//finding balance
	if (ID == savings1.getID())
	{
		bal = mthInterest;
		cout << bal << endl;


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