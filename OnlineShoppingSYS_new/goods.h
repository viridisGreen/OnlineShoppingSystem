#pragma once
#include <iostream>
#include "mystring.h"
using namespace std;

class goods //商品类
{
public:

	goods(mystring, double, double, int, int, double, mystring, mystring, mystring);
	goods();

	friend istream& operator >> (istream& in, goods& o);
	friend ostream& operator << (ostream& out, goods& o);

	void operator = (const goods&);

	mystring id; //商品号
	
	double pur_price; //进货价格
	
	double sell_price; //零售价格
	
	int number; //销量
	
	int stock; //库存
	
	double discount; //折扣价格

	mystring market; //所属超市
	
	mystring begin_time; //折扣开始时间
	
	mystring end_time; //折扣结束时间
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