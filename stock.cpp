#include "stock.h"

void stock::acquire(const string& co, long n, double pr)
{
	company = co;
	if (n < 0)
	{
		cout << "Numbers of shares can't be negative!" << company << " shares set to 0.\n";
		shares = 0;

	}
	else
	{
		shares = n;
	}
	share_val = pr;
	set_tot();
}

void stock::buy(long num, double price)
{
	if (num < 0)
	{
		cout << "Number of shares purchased can't be nagative. " << "Transation is absorbed.\n";
	}
	else {
		shares += num;
		share_val = price;
		set_tot();
	}
}

void stock::sell(long num, double price)
{
	if (num < 0)
	{
		cout << "You can't sell more than you have!" << "Transaction is adsorbed.\n";
	}
	else if (num > shares)
	{
		cout << "You can't sell morer than you have!" << "Transaction is absorbed.\n";
	}
	else {
		shares -= num;
		share_val = price;
		set_tot();
	}
}

void stock::update(double price)
{
	share_val = price;
	set_tot();
}

void stock::show()
{
	cout << "Company name: " << company << endl;
	cout << "Number of shares: " << shares << endl;
	cout << "Share price: " << share_val << endl;
	cout << "Total value: " << total_val << endl;
}
