#pragma once
#include"�ϰ�.h"
using namespace std;
boss::boss(int id, string name, int did)
{
	this->m_id = id;//���û���ֵ���뵽������ı�����
	m_name = name;
	m_did = did;
}
 void boss::showinfo()
{
	 cout << getname() << m_name << m_id << endl;
	 cout << "�´�����" << endl;
}
 string boss::getname()
 {
	 return string("�ϰ�");
 }