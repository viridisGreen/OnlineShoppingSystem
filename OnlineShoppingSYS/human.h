#pragma once
#include "mystring.h"
using namespace std;

class human 
{

public:

	virtual void menu() = 0; //菜单，指顾客和超市管理员登陆后所能看到的提示菜单

	int id; //顾客和管理员的登录id
	
	int gender; //顾客和管理员性别

	mystring name; //顾客和管理员的姓名
	
	mystring password; //顾客和管理员登陆密码
	
	mystring email; //顾客和管理员的邮箱

	mystring phonenumber; //顾客和管理员的电话号码

};