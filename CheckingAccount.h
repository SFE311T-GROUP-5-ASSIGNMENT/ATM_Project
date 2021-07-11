#pragma once

#ifndef CheckingAccount_h
#define CheckingAccount_h

#include "ATM_Account.h"
#include <iostream>
#include<string>

using namespace std;

class CheckingAccount:public Account
{
private:
	double overdraft; //variable to store the overdraft limit

public:
	//default constructor
	CheckingAccount(double,int,double);
	~CheckingAccount();

	//Accessor
	void setOverdraft(double);
	
	//Modifier
	double getOverdraft();

};

CheckingAccount::CheckingAccount()
{

}

CheckingAccount::~CheckingAccount()
{
}
void CheckingAccount::setOverdraft(double ovd)
{
	overdraft = ovd;
}
double CheckingAccount::getOverdraft()
{
	return overdraft;
}
#endif //CheckingAccount_H