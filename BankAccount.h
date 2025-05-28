#pragma once
#include<iostream>
#include<string>
using namespace std;
class BankAccount
{
	string fullname;
	string account;
	double deposite;
public:
	BankAccount();
	BankAccount(const string, const string , float);
	~BankAccount();
	void init_account(const string, const string , float);
	void print_info()const;
	void save(float);
	void withdraw(float);

};

