#pragma once
#include<iostream>
#include<string>
using namespace std;
class Time
{
	int hours;
	int minutes;
public:
	Time();
	Time(int h, int m = 0);
	void AddMin(int m);
	void AddHR(int h);
	void Reset(int h = 0, int m = 0);
	Time sum(const Time& t)const;
	void show() const;

};

