#pragma once
#include "human.h"
#include "mystring.h"
#include "order.h"
#include "goods.h"

class admin :public human
{

public:

	//����Ա���ܺ���
	//Ĭ�Ϲ��캯��
	admin();

	//�вι��캯��
	admin(int id, mystring password);

	//�˵���������
	virtual void menu();

	//��ѯ�û����������ע��ֻ�ܲ�ѯ���ù���Ա�������е���Ʒ�������
	void query();

	//ͳ���û�������Ϣ
	void stas();

	//����Ա��Ϣ����
	void modify();

	//�����Ʒ
	void add_goods();
	
	//��ʼ������
	//1.�����������иù���Ա�������ж�������admin_order
	//2.����Ʒ�����иù���Ա����������Ʒ����admin_goods
	void init_vector();

	
	
	//����Ա�����е���Ϣ�Լ�����Ա��������
	//���иù���Ա�������ж�����Ϣ
	order admin_order[500];

	//���иù���Ա����������Ʒ��Ϣ
	goods admin_goods[500];

	//��������
	mystring market;
};