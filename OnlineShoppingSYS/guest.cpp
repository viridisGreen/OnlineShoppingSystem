#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include "guest.h"
using namespace std;

//默认构造
guest::guest()
{

}

//含参构造
guest::guest(int id, mystring password)
{

}

//顾客页面实现
void guest::menu()
{

}

//取消订单功能实现
void guest::cancel()
{

}

//查询该顾客历史订单信息功能实现
void guest::query()
{

}

//顾客查询商品功能实现，在函数实现中可通过filter函数选择是否过滤掉无折扣信息的商品
void guest::goods_search()
{

}

//顾客查询超市功能实现
void guest::markets_search()
{

}

//顾客商品推荐功能实现
void guest::suggest()
{

}

//根据有无折扣信息过滤查询结果
void guest::filter()
{

}

//初始化容器
void guest::init_vector()
{

}

void guest::modify()
{

}