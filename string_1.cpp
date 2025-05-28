#include "string_1.h"

String::String(const char* s)
{
}

String::String()
{
}

String::String(const String&)
{
}

String::~String()
{
}

String& String::operator=(const String&)
{
	// TODO: 在此处插入 return 语句
}

String& String::operator=(const char*)
{
	// TODO: 在此处插入 return 语句
}

char String::operator[](int i)
{
	return 0;
}

const char& String::operator[](int i) const
{
	// TODO: 在此处插入 return 语句
}

int String::HowMany()
{
	return 0;
}

bool operator<(const String& st, const String& st2)
{
	return false;
}

bool operator>(const String& st1, const String& st2)
{
	return false;
}

bool operator==(const String& st, const String& st2)
{
	return false;
}

ostream& operator<<(ostream& os, const String& st)
{
	// TODO: 在此处插入 return 语句
}

istream& operator>>(ostream& is, const String& st)
{
	// TODO: 在此处插入 return 语句
}
