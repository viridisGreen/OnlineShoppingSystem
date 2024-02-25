#pragma once
#include "mystring.h"
using namespace std;

class order
{

	friend istream& operator >> (istream& in, order& o);
	friend ostream& operator << (ostream& out, order& o);

public:

	int id; //订单编号

	int good_id; //购买的商品编号
	
	int good_number; //购买的商品数量
	
	double good_price; //购买的商品单价
	
	double total; //购物总价格

	mystring time; //订单日期

	mystring good_name; //购买的商品名称
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

