#pragma once
#include<iostream>
#include<string>
using namespace std;
typedef unsigned long Item;
class stack
{
private:
	enum { MAX = 10 }; // 定义栈的最大容量
	Item items[MAX]; // 存储栈元素的数组
	int top; // 栈顶指针
public:
	stack(); // 构造函数，初始化栈
	bool isenputy(); // 判断栈是否为空
	bool isfull(); // 判断栈是否已满
	bool push(const Item& item); // 入栈操作
	bool pop(Item& item); // 出栈操作

};


