#pragma once
#include "human.h"
#include "mystring.h"
#include "order.h"
#include "goods.h"
using namespace std;

class guest :public human
{

public:

	//顾客的功能函数
	//默认构造
	guest();

	//有参构造
	guest(int id, mystring password);

	//顾客页面，指顾客登录后所显示的功能菜单
	virtual void menu();

	//个人信息管理，对电话，密码，邮箱，地址等进行修改
	void modify(); 

	//取消订单
	void cancel();

	//查询该顾客历史订单信息
	void query();

	//顾客查询商品功能函数
	void goods_search();

	//顾客查询超市功能函数
	void markets_search();

	//顾客商品推荐功能函数
	void suggest();

	//顾客根据有无折扣信息过滤查询结果
	void filter();

	//初始化容器
	//1.将订单文件中与该顾客有关订单全部导入guest_order中，方便后续操作
	//2.将所有商品信息导入guest_goods
	void init_vector();



	//顾客独有的信息以及顾客所需数据

	//顾客账户信息
	double balance;

	//顾客收货地址
	mystring address;

	//该顾客的订单信息
	order guest_order[500];

	//所有商品的信息
	goods guest_goods[500];
};