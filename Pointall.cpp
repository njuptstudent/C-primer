#include<iostream>
using namespace std;
class Point
{
	double x;
	double y;
public:
	Point(double a=0,double b=0);
	Point operator++();
	Point operator-(const Point& a);
	friend Point operator+(Point& a, Point& b);
	friend Point operator+(Point& a, double );
	friend ostream& operator<<(ostream& out, const Point& com);
};

Point::Point(double a, double b):x(a),y(b)
{

}
Point Point::operator++()
{
	++x;
	++y;
	return*this;
}

Point Point::operator-(const Point& a)
{
	Point temp;
	temp.x = x - a.x;
	temp.y = y - a.y;

	return temp;
}

Point operator+(Point& a, Point& b)
{
	Point temp;
	temp.x = a.x +b.x;
	temp.y = a.y +b.y;

	return temp;
}
Point operator+(Point& a, double b)
{
	Point temp;
	temp = a.x + b;
	temp.y = a.y + b;

	return temp;
}




ostream& operator<<(ostream& out, const Point& com)
{
	out << "(" << com.x << "," << com.y << ")";
	out << endl;
	return out;
	
}
int main()//ÏÔÊ½µ÷ÓÃ
{
	Point pt1(10.5, 20.8), pt2(-5.3, 18.4), pt3;
	cout << "original pt1,pt2,pt3 are:\n";
	operator<<(cout, pt1);
	operator<<(cout, pt2);
	operator<<(cout, pt3);
	pt3 = operator+(pt1 ,100.8);
	cout << "after pt3=pt1+100.8, pt3 is:" << pt3;
	pt3 =operator+(pt1, pt2);
	cout << "after pt3=pt1+pt2, pt3 is:" << pt3;
	pt3 = pt1.operator++();
	pt2.operator++();
	cout << "after ++ pt1,pt2,pt3 are:\n";
	operator<<(cout,pt1);
	operator<<(cout, pt2);
	operator<<(cout, pt3);
	pt3 = pt1.operator-(pt2);
	cout << "after pt3=pt1-pt2, pt3 is:" << pt3;
	return 0;
}
