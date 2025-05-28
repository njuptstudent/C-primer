#include "mytime.h"
#include<iostream>
#include<string>
using namespace std;
int main()
{
	Time planning;
	Time coding(2, 40);
	Time fixing(5, 55);
	Time total;
	cout << "planning time=";
	planning.show();
	cout << endl;
	cout << "coding time time=";
	coding.show();
	cout << endl;
	cout << "fixing time=";
	fixing.show();
	cout << endl;
	total = coding.sum(fixing);
	cout << "coding.sum(fixing)";
	total.show();
	cout << endl;
	return 0;
}