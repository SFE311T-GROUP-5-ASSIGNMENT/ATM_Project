#pragma once


#ifndef SavingsAccount_H
#define SavingsAccount_H

#include "ATM_Account.h"
#include <iostream>
#include <string>

class SavingsAccount :public Account
{
private:
	double annualInterestRate; //this variable will store the annual interest rate


public:
	//default constructor
	SavingsAccount();
	
	//Accessors
	double getMonthlyInterestRate(double);
	double getMonthlyInterest(double);
	//Modifiers
};
SavingsAccount::SavingsAccount()
{
	annualInterestRate = 0.0;
}
double SavingsAccount::getMonthlyInterestRate(double mIRate)
{


	return mIRate;
}
double SavingsAccount::getMonthlyInterest(double mInt)
{
	//
	
	return mInt;
}
#endif // SavingsAccount_H
