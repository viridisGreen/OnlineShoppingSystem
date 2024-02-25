#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include "mystring.h"
#include <cstring>
using namespace std;

mystring::mystring() : data(new char[1]), len(1)
{
	*data = '\0';
}

mystring::mystring(const char* s)
{
	if (!s)
	{
		data = new char[1];
		len = 0;
		*data = '\0';
	}
	else
	{
		len = strlen(s);
		data = new char[len + 1];
		/*for (size_t i = 0; i < len; i++)
		{
			data[i] = s[i];
		}*/
		strcpy(data, s);
	}
}

mystring::mystring(const mystring& s)
{
	this->len = s.len;
	data = new char[s.len + 1];
	/*for (size_t i = 0; i < s.len; i++)
	{
		data[i] = s[i];
	}*/
	strcpy(data, s.str());
}

mystring& mystring::operator=(const mystring& s)
{
	if (&s != this)
	{
		if (data) delete[] data;
		this->len = s.len;
		data = new char[s.len + 1];
		/*for (size_t i = 0; i < s.len; i++)
		{
			data[i] = s[i];
		}*/
		strcpy(data, s.str());
	}
	return *this;
}

mystring::~mystring()
{
	delete[] data;
	len = 0;
}

char mystring::operator[](int i) const
{
	size_t len = this->len - 1;
	if (i > len)
	{
		return '\0';
	}
	else
	{
		return data[i];
	}
}

size_t mystring::size() const
{
	return this->len;
}

char* mystring::str() const
{
	return data;
}

ostream& operator << (ostream& out, mystring& s)
{
	out << s.data;
	return out;
}

istream& operator >> (istream& in, mystring& s)
{
	char tem[1000];
	in >> tem;
	s.len = strlen(tem);
	s.data = new char[s.len + 1];
	strcpy(s.data, tem);
	return in;
}

mystring mystring::operator+(const mystring& str) const
{
	mystring newstring;
	newstring.len = len + str.size();
	newstring.data = new char[newstring.len + 1];
	strcpy(newstring.data, this->data);
	strcat(newstring.data, str.data);
	return newstring;
}