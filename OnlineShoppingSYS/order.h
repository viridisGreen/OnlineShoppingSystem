#pragma once
#include "mystring.h"
using namespace std;

class order
{

	friend istream& operator >> (istream& in, order& o);
	friend ostream& operator << (ostream& out, order& o);

public:

	int id; //�������

	int good_id; //�������Ʒ���
	
	int good_number; //�������Ʒ����
	
	double good_price; //�������Ʒ����
	
	double total; //�����ܼ۸�

	mystring time; //��������

	mystring good_name; //�������Ʒ����
};

static istream& operator >> (istream& in, order& o)
{
	in >> o.id >> o.good_id >> o.good_number >> o.good_price >> o.total >> o.time >> o.good_name;
	return in;
}

static ostream& operator << (ostream& out, order& o)
{
	out << o.id << " " << o.good_id << " " << o.good_number << " " << o.good_price << " " <<  o.total << " " << o.time << " " << o.good_name;
	return out;
}

