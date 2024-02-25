#pragma once
#include <iostream>
#include "globalFile.h"
#include "goods.h"
#include "order.h"
#include "mystring.h"
using namespace std;

int main()
{
	//mystring，演示：
	mystring a = "ab";
	mystring b = a;
	
	cout << a << " " << b << endl; //同理可用cin直接输入，如cin>>b;
	
	cout << a[0] << " " << a[1] << endl; //类似字符数组，可直接取出每一位
	
	//以上均和字符数组类似
	mystring c = a + b; //可直接拼接两个字符串:c="abab"
	
	if (a == b) cout << "a is equal to b" << endl; //可直接比较两个字符串是否相同
	
	//1.可利用内置size函数直接获得字符串长度
	//2.可通过内置str函数将字符串取出，可以用来和正常的字符数组操作，例如：char *c = a.str();
	cout << a.size() << " " << a.str() << endl; 



	//order和goods类简化
	//支持直接cin,cout操作
	//order和goods的输入输出格式和类里定义变量的顺序相同，从上到下，空格隔开
	order o;
	cin >> o;
	cout << o << endl;
	//避免了 cin>>a.id>>a.good_id>>a.good_number......的尴尬，cout同理
	


	//注意，order和goods类里的字符串军师用mystring实现，拥有上述mystring的功能
	//例如：
	cout << o.good_name.size() <<endl; //获得orde类里商品名称good_name字符串的长度
	return 0;
}
