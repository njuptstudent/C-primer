#include "BankAccount.h"

BankAccount::BankAccount()
{
	deposite = 0;
}

BankAccount::BankAccount(const string name, const string id, float f)
{
	fullname = name;
	account = id;
	deposite=f;
}

BankAccount::~BankAccount()
{
	cout << "ALL Done!" << endl;
}

void BankAccount::init_account(const string name, const string id,float f)
{
	cout << "Initalizing Account information...\n";
	if(name!="")fullname = name;
	if (id!="") account= id;
	deposite=f;
}

void BankAccount::print_info() const
{
	cout << "The Account info:\n";
	cout << "Full Name:" << fullname << endl;
	cout << "Account ID:" << account << endl;
	cout << "Deposite:" << deposite << endl;
}

void BankAccount::save(float f)
{
	deposite += f;
}

void BankAccount::withdraw(float f)
{
	deposite -= f;

}
