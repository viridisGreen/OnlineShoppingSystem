#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include "order.h"
#include "mystring.h"
using namespace std;


//order::order(int id, int good_id, int good_number, double good_price, double total, mystring time, mystring good_name)
//{
//	this->id = id;
//	this->time = time;
//	this->total = total;
//}

order::order()
{
	this->id = 0;
	this->time = 0;
	this->total = 0;
}

void order::operator=(const order& o)
{
	this->id = o.id;
	this->time = o.time;
	this->total = o.total;
	this->number = o.number;
	for (int i = 0; i < o.number; i++)
	{
		this->goodss[i] = o.goodss[i];
		this->goods_num[i] = o.goods_num[i];
	}
}