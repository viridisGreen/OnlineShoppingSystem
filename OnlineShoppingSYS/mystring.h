#pragma once
#include <iostream>
#include <cstring>
using namespace std;

class mystring
{
public:
	
	mystring();

	mystring(const char*);

	mystring(const mystring&);

	friend ostream& operator << (ostream&, mystring&);
	friend istream& operator >> (istream&, mystring&);

	mystring& operator = (const mystring&);

	mystring operator + (const mystring& str) const;

	bool operator == (const mystring& str) const;

	~mystring();

	char operator[](int ) const;

	size_t size() const;
	char* str() const;

private:

	char* data;
	size_t len;
};

inline bool mystring::operator==(const mystring& str) const
{
	if (len != str.len)	return false;
	return strcmp(data, str.data) ? false : true;
}