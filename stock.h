#pragma once
#include<iostream>
#include<string>
using namespace std;
class stock
{
private:
	string company;
	long shares;
	double share_val;
	double total_val;
	void set_tot()
	{
		total_val = shares * share_val;
	}
public:
	void acquire(const string& co, long n, double pr);
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	void show();



};

