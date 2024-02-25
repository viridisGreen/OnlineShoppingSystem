#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include"goods.h"
#include "mystring.h"
using namespace std;

goods::goods(int id, double pur_price, double sell_price, int number, int stock, double discount, mystring market, mystring begin_time, mystring end_time)
{
	this->id = id;
	this->begin_time = begin_time;
	this->discount = discount;
	this->end_time = end_time;
	this->market = market;
	this->number = number;
	this->pur_price = pur_price;
	this->sell_price = sell_price;
	this->stock = stock;
}

goods::goods()
{
	this->id = 0;
	this->begin_time = 0;
	this->discount = 0;
	this->end_time = 0;
	this->market = 0;
	this->number = 0;
	this->pur_price = 0;
	this->sell_price = 0;
	this->stock = 0;
}


void goods::operator=(const goods& g)
{
	this->id = g.id;
	this->begin_time = g.begin_time;
	this->discount = g.discount;
	this->end_time = g.end_time;
	this->market = g.market;
	this->number = g.number;
	this->pur_price = g.pur_price;
	this->sell_price = g.sell_price;
	this->stock = g.stock;
}