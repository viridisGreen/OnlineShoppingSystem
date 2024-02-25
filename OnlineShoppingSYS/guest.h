#pragma once
#include "human.h"
#include "mystring.h"
#include "order.h"
#include "goods.h"
using namespace std;

class guest :public human
{

public:

	//�˿͵Ĺ��ܺ���
	//Ĭ�Ϲ���
	guest();

	//�вι���
	guest(int id, mystring password);

	//�˿�ҳ�棬ָ�˿͵�¼������ʾ�Ĺ��ܲ˵�
	virtual void menu();

	//������Ϣ�����Ե绰�����룬���䣬��ַ�Ƚ����޸�
	void modify(); 

	//ȡ������
	void cancel();

	//��ѯ�ù˿���ʷ������Ϣ
	void query();

	//�˿Ͳ�ѯ��Ʒ���ܺ���
	void goods_search();

	//�˿Ͳ�ѯ���й��ܺ���
	void markets_search();

	//�˿���Ʒ�Ƽ����ܺ���
	void suggest();

	//�˿͸��������ۿ���Ϣ���˲�ѯ���
	void filter();

	//��ʼ������
	//1.�������ļ�����ù˿��йض���ȫ������guest_order�У������������
	//2.��������Ʒ��Ϣ����guest_goods
	void init_vector();



	//�˿Ͷ��е���Ϣ�Լ��˿���������

	//�˿��˻���Ϣ
	double balance;

	//�˿��ջ���ַ
	mystring address;

	//�ù˿͵Ķ�����Ϣ
	order guest_order[500];

	//������Ʒ����Ϣ
	goods guest_goods[500];
};