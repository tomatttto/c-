#pragma once
#include<iostream>
using namespace std;
//ְ���������
class worker
{
public:
	virtual void showinfo() = 0;//��ʾ����������Ϣ
	virtual string getname() = 0;//��ȡ��λ����
	int m_id;//ְ�����
	string m_name;//ְ������
	int m_did;//���ű��
};
