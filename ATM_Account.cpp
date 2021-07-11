#include "ATM_Account.h"
#include "CheckingAccount.h"
#include "SavingsAccount.h"

//void menu(int o);
int main()
{
	int option;
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

	cout << option << endl;

	//cout << option<<endl;

	return 0;
}

/*void menu(int option)
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
	
}*/