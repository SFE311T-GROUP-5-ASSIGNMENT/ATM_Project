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
	CheckingAccount();
	~CheckingAccount();

	
	
	//Modifier
	double getOverdraft();

};

CheckingAccount::CheckingAccount()
{
	overdraft = 0.00;
}
CheckingAccount::~CheckingAccount()
{
}
double CheckingAccount::getOverdraft()
{
	return overdraft;

}
#endif //CheckingAccount_H