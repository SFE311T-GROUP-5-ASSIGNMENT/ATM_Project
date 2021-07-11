#pragma once


#ifndef SavingsAccount_H
#define SavingsAccount_H

#include "ATM_Account.h"
#include <iostream>
#include <string>

class SavingsAccount :public Account
{
private:
   static double annualInterestRate; //this variable will store the annual interest rate


public:
	//default constructor
	SavingsAccount();
	//SavingsAccount(double);
	~SavingsAccount();
	
	//Accessors
	double getMonthlyInterestRate(double);
	double getMonthlyInterest(double);
	//Modifiers
	void setMonthlyInterestRate(double);
	void setMonthlyInterest(double);
};
SavingsAccount::SavingsAccount()
{
	annualInterestRate = 35;
}
SavingsAccount::~SavingsAccount()
{

}
double SavingsAccount::getMonthlyInterestRate(double mIRate)
{
	

	return mIRate;
}
double SavingsAccount::getMonthlyInterest(double mInt)
{
	 	
	return mInt;
}
void SavingsAccount::setMonthlyInterest(double mInt)
{
	
}
void SavingsAccount::setMonthlyInterestRate(double mIRate)
{

}

#endif // SavingsAccount_H

