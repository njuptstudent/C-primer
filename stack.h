#pragma once
#include<iostream>
#include<string>
using namespace std;
typedef unsigned long Item;
class stack
{
private:
	enum { MAX = 10 }; // ����ջ���������
	Item items[MAX]; // �洢ջԪ�ص�����
	int top; // ջ��ָ��
public:
	stack(); // ���캯������ʼ��ջ
	bool isenputy(); // �ж�ջ�Ƿ�Ϊ��
	bool isfull(); // �ж�ջ�Ƿ�����
	bool push(const Item& item); // ��ջ����
	bool pop(Item& item); // ��ջ����

};


