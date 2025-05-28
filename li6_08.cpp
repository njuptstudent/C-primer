#include "li6_08.h"
void f1(Base &obj)
{
	obj.Print();
}
void f2(Derived& obj)
{
	obj.Print();
}
int main()
{
	Base b(8);
	Derived d(200, 300);
	d.Print();
	d.a = 400;
	d.Base::a = 500;
	d.Base::Print();
	Base* pb;
	pb = &b;
	pb->Print();
	pb = &d;
	pb->Print();
	f1(b);
	f1(d);
	Derived* pd;
	pd = &d;
	pd->Print();
	f2(d);
	return 0;
}