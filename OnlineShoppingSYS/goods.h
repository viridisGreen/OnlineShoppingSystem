#pragma once
#include <iostream>
#include "mystring.h"
using namespace std;

class goods //��Ʒ��
{
public:

	goods(mystring, double, double, int, int, double, mystring, mystring, mystring);
	goods();

	friend istream& operator >> (istream& in, goods& o);
	friend ostream& operator << (ostream& out, goods& o);

	void operator = (const goods&);

	mystring id; //��Ʒ��
	
	double pur_price; //�����۸�
	
	double sell_price; //���ۼ۸�
	
	int number; //����
	
	int stock; //���
	
	double discount; //�ۿۼ۸�

	mystring market; //��������
	
	mystring begin_time; //�ۿۿ�ʼʱ��
	
	mystring end_time; //�ۿ۽���ʱ��
};

static istream& operator >> (istream& in, goods& g)
{
	in >> g.id >> g.pur_price >> g.sell_price >> g.number >> g.stock >> g.discount >> g.market >> g.begin_time >> g.end_time;
	return in;
}

static ostream& operator << (ostream& out, goods& g)
{
	out << g.id << " " << g.pur_price << " " << g.sell_price << " " << g.number << " " << g.stock << " " << g.discount << " " << g.market << " " << g.begin_time << " " << g.end_time;
	return out;
}