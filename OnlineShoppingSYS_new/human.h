#pragma once
#include "mystring.h"
using namespace std;

class human 
{

public:

	virtual void menu() = 0; //�˵���ָ�˿ͺͳ��й���Ա��½�����ܿ�������ʾ�˵�

	int id; //�˿ͺ͹���Ա�ĵ�¼id
	
	int gender; //�˿ͺ͹���Ա�Ա�

	mystring name; //�˿ͺ͹���Ա������
	
	mystring password; //�˿ͺ͹���Ա��½����
	
	mystring email; //�˿ͺ͹���Ա������

	mystring phonenumber; //�˿ͺ͹���Ա�ĵ绰����

};