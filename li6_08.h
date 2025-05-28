#pragma once
#include<iostream>
#include<string>
using namespace std;
class Base
{
public:
	int a;
	Base(int x)
	{
		a = x;
	}
	virtual void Print()
	{
		cout << "Base::a=" << a << endl;
	}
};
class Derived :public Base
{
public:
	int a;
	Derived(int x, int y) :Base(x)
	{
		a = y;
		Base::a *= 2;
	}
	void Print()
	{
		Base::Print();
		cout << "Derived::a=" << a << endl;

	}
};

