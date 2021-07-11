#ifndef ATM_Account_h
#define ATM_Account_h


#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

class Account
{

private:
		
	int ID;
	double balance;
	string dateCreated;


public:
Account();

void setID(int);
void setBalance(double);
int getID();
double getBalance();
		
double withdraw(double);
double deposit(double);

};

Account::Account()
{
	balance = 10000;
	ID = 00000;


}

void Account::setID(int accNo)
{
	ID = accNo;
}

void Account::setBalance(double Bal)
{
	balance = Bal;
}
int Account::getID()
{
	return ID;
}
double Account::getBalance()
{
	return balance;
}	
double Account::withdraw(double wthdrw)
{

	return wthdrw;
}
double Account::deposit(double dep)
{
	return dep;

}
#endif // !Account_h