#include"��ְͨ��.h"
employee::employee(int id, string name, int did)
{
	this->m_id = id;//���û���ֵ���뵽������ı�����
	m_name = name;
	m_did = did;
}
void employee:: showinfo()
{
	cout << getname()<< m_name<< m_id   << endl;
	cout << "�����������" << endl;
}
string employee:: getname()
{
	return string("Ա��");
} 