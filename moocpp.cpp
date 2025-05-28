#include<iostream>
#include<string>
#include<iomanip>
#include<cstring>
#include<cmath>
#include<valarray>
using namespace std;
//class Point
//
//{
//
//private:
//
//	double X, Y;
//
//public:
//
//	Point(double a, double b);
//
//	Point(Point& p);
//
//	double GetX();
//
//	double GetY();
//
//};
//
//class Line
//
//{
//
//private:
//
//	Point A, B;
//
//	double length;
//
//public:
//
//	Line(Point p1, Point p2);
//
//	double GetLength();
//
//};
//
//Point::Point(double a, double b) :X(a), Y(b)
//{
//
//}
//Point::Point(Point& p)
//{
//	X = p.X;
//	Y = p.Y;
//}
//double Point::GetX()
//{
//	return X;
//}
//double Point::GetY()
//{
//	return Y;
//}
//Line::Line(Point p1, Point p2) :A(p1), B(p2)
//{
//	length = sqrt((p1.GetX() - p2.GetX()) * (p1.GetX() - p2.GetX()) + ((p1.GetY() - p2.GetY()) * (p1.GetY() - p2.GetY())));
//}
//double Line::GetLength()
//{
//	return length;
//}
//int main()
//{
//	double a, b, c, d;
//	cin >> a >> b >> c >> d;
//	Point p1(a, b);
//	Point p2(c, d);
//	Line L(p1, p2);
//	cout << setprecision(3) << L.GetLength() << endl;
//	return 0;
//}
//class Student
//{
//	int age;
//	string name;
//	
//public:
//	static int count;
//	Student(int m, string n);
//	Student();
//	void Print()const;
//	~Student();
//};
//int Student::count = 0;
//Student::Student(int m, string n)
//{
//	age = m;
//	name = n;
//	count++;
//}
//
//Student::Student()
//{
//	name = "NoName";
//	age = 0;
//	count++;
//}
//
//void Student::Print() const
//{
//	cout << count << endl;
//	cout << "Name=" << name<<","<< "age=" << age << endl;
//}
//
//Student::~Student()
//{
//	count--;
//}
//int main()
//
//{
//
//	cout << "count=" << Student::count << endl;
//
//	Student s1, * p = new Student(23, "ZhangHong");
//
//	s1.Print();
//
//	p->Print();
//
//	delete p;
//
//	s1.Print();
//
//	Student Stu[4];
//
//	cout << "count=" << Student::count << endl;
//
//	return 0;
//
//}
//class POINT
//{
//protected:
//	int x;
//	int y;
//public:
//	POINT(int a, int b);
//	void change(int,int);
//	void show();
//};
//
//POINT::POINT(int a, int b):x(a),y(b)
//{
//
//}
//
//void POINT::change(int a,int b)
//{
//	x = a;
//	y = b;
//}
//
//void POINT::show()
//{
//	cout << "(" << x << "," << y << ")" << endl;
//}
//class CIRCLE:public POINT
//{
//	int r;
//public:
//	CIRCLE(int a, int b, int c);
//	void show();
//};
//
//CIRCLE::CIRCLE(int a, int b, int c):POINT(a,b),r(c)
//{
//
//}
//
//void CIRCLE::show()
//{
//	cout << "the center of the circle is:\n";
//	POINT::show();
//	cout << "the radius is:" << r << endl;
//
//
//}
//int main()
//{
//	POINT p(2, 3);
//	CIRCLE c(3, 4, 5);
//	cout << "original p:\n";
//	p.show();
//	p.change(20, 30);
//	cout << "changed p:\n";
//	p.show();
//	cout << "original c:\n";
//	c.show();
//	c.change(30, 40);
//	cout << "changed c:\n";
//	c.show();
//	return 0;
//}
//class Date
//{
//protected:
//	string name;
//public:
//	Date(string na)
//	{
//		name = na;
//	}
//	void print();
//};
//
//void Date::print()
//{
//	cout << "name=" << name << endl;
//
//}
//class Student :virtual public Date
//{
//protected:
//	string id;
//public:
//	Student(string na, string pid) :Date(na)
//	{
//		id = pid;
//	}
//	void print()
//	{
//		Date::print();
//		cout << "id=" << id << endl;
//
//	}
//};
//class Teacher :virtual public Date
//{
//protected:
//	float sal;
//public:
//	Teacher(string na, float psal) :Date(na), sal(psal)
//	{
//
//	}
//	void print()
//	{
//		
//		cout << "sal=" << sal << endl;
//	}
//};
//class Postgrad :public Student
//{
//protected:
//	string dn;
//public:
//	Postgrad(string na, string pid, string p) :Date(na), Student(na,pid), dn(p)
//	{
//
//	}
//	void print()
//	{
//		Student::print();
//		cout << "dn=" << dn << endl;
//
//	}
//};
//class Tpost :public Teacher, public Postgrad
//{
//public:
//	Tpost(string na, string pid, string p, float psal) :Date(na), Teacher(na, psal), Postgrad(na, pid, p)
//	{
//
//	}
//	void print()
//	{
//		cout << "The teacher and postgraduate:" << endl;
//		Postgrad::print();
//		Teacher::print();
//		
//	}
//};
//int main()
//{
//	string name, id, dn;
//	float sal;
//	cin >> name >> id >> dn >> sal;
//	Tpost T(name, id, dn, sal);
//	T.print();
//	return 0;
//
//}
//class Student
//{
//	typedef valarray<double> ArrayDb;
//	string name;
//	ArrayDb scores;
//	ostream& arr_out(std::ostream& os)const;
//public:
//	Student():name("Null Student"),scores(){ }
//	explicit Student(const string &s):name(s),scores(){ }
//	explicit Student(int n):name("Nully"),scores(n){ }
//	Student(const string&s,int n):name(s),scores(n){ }
//	Student(const string&s,const ArrayDb&a):name(s),scores(a){ }
//	Student(const char*str,const double*pd,int n):name(str),scores(pd,n){}
//	~Student(){ }
//	double Average()const;
//	const string& Name()const;
//	double& operator[](int i);
//	double operator[](int i)const;
//	friend istream& operator>>(istream& is, Student& stu);
//	friend istream& getline(istream& is, Student& stu);
//	friend ostream& operator<<(ostream& os, Student& stu);
//};
//
//ostream& Student::arr_out(std::ostream& os) const
//{
//	int i;
//	int lim = scores.size();
//	if (lim > 0)
//	{
//		for (i = 0;i < lim;i++)
//		{
//			os << scores[i] << " ";
//			if (i % 5 == 4)
//				cout << endl;
//		}
//		if (i % 5 != 0)
//			os << endl;
//
//	}
//	else
//		os << "empty array";
//	return os;
//}
//
//double Student::Average() const
//{
//	if (scores.size() > 0)
//		return scores.sum() / scores.size();
//	else
//		return 0;
//}
//
//const string& Student::Name() const
//{
//	return name;
//}
//
//double& Student::operator[](int i)
//{
//	return scores[i];
//}
//
//double Student::operator[](int i) const
//{
//	return scores[i];
//}
//
//istream& operator>>(istream& is, Student& stu)
//{
//	is >> stu.name;
//	return is;
//}
//
//istream& getline(istream& is, Student& stu)
//{
//	getline(is, stu.name);
//	return is;
//}
//
//ostream& operator<<(ostream& os, Student& stu)
//{
//	os << "Scores for" << stu.name << ":\n";
//	stu.arr_out(os);
//	return os;
//}
//void set(Student& sa, int n)
//{
//	cout << "Please enter the student's name:";
//	getline(cin, sa);
//	cout << "Please enter " << n << " quze scores:\n";
//	for (int i = 0;i < n;i++)
//	{
//		cin >> sa[i];
//	}
//	while (cin.get() != '\n')
//		continue;
//}
//const int pupils = 3;
//const int quzzes = 5;
//void set(Student& sa, int n);
//int main()
//{
//	Student ada[pupils] = { Student(quzzes),Student(quzzes),Student(quzzes) };
//	int i;
//	for (i = 0;i < pupils;++i)
//		set(ada[i], quzzes);
//	cout << "\nStudent List:\n";
//	for (i = 0;i < pupils;++i)
//		cout << "\nResults:";
//	for (i = 0;i < pupils;++i)
//	{
//		cout << endl << ada[i];
//		cout << "average:" << ada[i].Average() << endl;
//
//	}
//	cout << "Done" << endl;
//	return 0;
//
//}
//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//
//class Matrix {
//private:
//    int row, col;
//    int* m;
//
//public:
//    void disp();
//    Matrix(int r, int c) : row(r), col(c) {
//        m = new int[row * col];
//        for (int i = 0; i < row * col; i++) {
//            cin >> m[i];
//        }
//    }
//
//    Matrix():row(0), col(0), m(nullptr) {
//        
//    }
//
//    Matrix(const Matrix& other) : row(other.row), col(other.col) {
//        m = new int[row * col];
//        for (int i = 0; i < row * col; ++i) {
//            m[i] = other.m[i];
//        }
//    }
//
//    ~Matrix() {
//        delete[] m;
//    }
//
//    Matrix operator+(const Matrix& other) const {
//        if (row != other.row || col != other.col) {
//            cout << " program terminated! " << endl;
//            exit(0);
//        }
//        Matrix result;
//
//        result.row = row;
//
//        result.col = col;
//
//        result.m = new int[row * col];
//
//        for (int i = 0; i < row * col; i++) {
//
//            result.m[i] = m[i] + other.m[i];
//
//        }
//
//        return result;
//    }
//
//    Matrix operator=(const Matrix& other) {
//        if (this == &other) {
//            return *this;
//        }
//        row = other.row;
//        col = other.col;
//        m = new int[row * col];
//        for (int i = 0; i < row * col; ++i) {
//            m[i] = other.m[i];
//        }
//        return *this;
//    }
//
//    
//};
//void Matrix::disp()
//{
//    for (int i = 0;i < row;i++)
//    {
//        cout << '\t';
//        for (int j = 0;j < col;j++)
//            cout << *(m + i * col + j) << '\t';
//        cout << endl;
//    }
//}
//int main() {
//    int row_a, col_a, row_b, col_b;
//    cin >> row_a >> col_a;
//    Matrix A(row_a, col_a);
//    cin >> row_b >> col_b;
//    Matrix B(row_b, col_b), C;
//    C = A + B;
//    C.disp();
//    A = B;
//    A.disp();
//    return 0;
//}
//#include<iostream>
//using namespace std;
//class Time {  
//    int hour, minute, second;  
//public:  
//    Time(int h=0, int m=0, int s=0) : hour(h), minute(m), second(s) {}  
//
//    void show() {  
//           cout << hour << ":" << minute << ":" << second << endl;  
//     }  
//
//
//    Time operator++() {  
//           second++;  
//           if (second >= 60) {  
//               second -= 60;  
//               minute++;  
//           }  
//           if (minute >= 60) {  
//               minute -= 60;  
//               hour++;  
//           }  
//           return *this;  
//     }  
//
//       
//    friend Time operator-( Time& a, Time& b) {
//        Time temp;
//        temp.second = a.hour * 3600 + a.minute * 60 + a.second-( b.hour * 3600 + b.minute * 60 + b.second); 
//        temp.minute = temp.second/ 60;
//        temp.second = temp.second - 60 * temp.minute;
//        temp.hour = temp.minute / 60;
//        temp.minute= temp.minute - 60 * temp.hour;
//        
//        return temp;  
//     }  
//};  
//
//    int main() {  
//       Time t1(1, 59, 59);  
//       Time t2(2, 5, 7);  
//
//       cout << "Original time: t1=";  
//       t1.show();  
//
//       ++t1;  
//       cout << "After increment: t1=";  
//       t1.show();  
//       cout << "Original time: t2=";
//       t2.show();
//       Time diff;
//       diff = t1 - t2;  
//       cout << "diff:t1-t2=\n";
//       diff.show();
//
//       return 0;  
//    }



//#include<iostream>
//using namespace std;
//int main()
//{
//	int x, y, z;
//	cin >> x  >> y;
//	z = x + y;
//	cout << z;
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int x, y, z;
//	f(x, y, z);
//	return 0;
//}
//void f(int x,int y,int z)
//{
//	scanf("%d%d%d", &x,&y, &z);
//	printf("%d", y);
//}
//#include<iostream>
//using namespace std;
//#define PI 3.14
//class Container
//{
//protected:
//	double radius;
//public:
//	Container(double r) :radius(r)
//	{
//
//	}
//	virtual double area() = 0;
//	virtual double volumn() = 0;
//	virtual void print() = 0;
//};
//class Cube :public Container
//{
//
//public:
//	Cube(double r) :Container(r)
//	{
//
//	}
//	virtual double area()
//	{
//		return  radius * radius;
//	}
//	virtual double volumn()
//	{
//		return radius * radius * radius;
//	}
//	virtual void print()
//	{
//		cout << "面积：" << area() << endl;
//		cout << "体积：" << volumn() << endl;
//	}
//};
//class Sphere :public Container
//{
//public:
//	Sphere(double r) :Container(r)
//	{
//		
//	}
//	virtual double area()
//	{
//		return 4*radius*radius*PI;
//	}
//	virtual double volumn()
//	{
//		return 4.0/3.0*PI*radius*radius*radius;
//	}
//	virtual void print()
//	{
//		cout << "面积：" << area()<<endl;
//		cout << "体积：" << volumn()<<endl;
//	}
//};
//class Cylinder :public Container
//{
//protected:
//	double height;
//public:
//	Cylinder(double r,double h) :Container(r),height(h)
//	{
//
//	}
//	virtual double area()
//	{
//		return 2 * radius* radius * PI+2*PI*radius*height;
//	}
//	virtual double volumn()
//	{
//		return  radius* radius * PI*height;
//	}
//	virtual void print()
//	{
//		cout << "面积：" << area() << endl;
//		cout << "体积：" << volumn() << endl;
//	}
//};
//void TopPrint(Container& r)
//{
//	r.print();
//}
//int main()
//{
//
//	Container* p;
//	Cube cube(2.34);
//	Sphere sphere(5.27);
//	Cylinder cylinder(3.2, 2);
//	p = &cube;
//	cout << p->area() << endl;
//	cout << p->volumn() << endl;
//	p->print();
//	p = &sphere;
//	cout << p->area() << endl;
//	cout << p->volumn() << endl;
//	p->print();
//	p = &cylinder;
//	cout << p->area() << endl;
//	cout << p->volumn() << endl;
//	p->print();
//	return 0;
//
//}
