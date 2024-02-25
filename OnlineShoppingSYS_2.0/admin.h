#pragma once
#include "human.h"
#include "mystring.h"
#include "order.h"
#include "goods.h"

class admin :public human
{

public:

	//管理员功能函数
	//默认构造函数
	admin();

	//有参构造函数
	admin(int id, mystring password);

	//菜单界面声明
	virtual void menu();

	//查询用户订单情况，注：只能查询到该管理员所属超市的商品购买情况
	void query();

	//统计用户订单信息
	void stas();

	//管理员信息管理
	void modify();

	//添加商品
	void add_goods();
	
	//初始化容器
	//1.将订单里所有该管理员所属超市订单导入admin_order
	//2.将商品里所有该管理员所属超市商品导入admin_goods
	void init_vector();

	
	
	//管理员所特有的信息以及管理员所需数据
	//所有该管理员所属超市订单信息
	order admin_order[500];

	//所有该管理员所属超市商品信息
	goods admin_goods[500];

	//所属超市
	mystring market;
};