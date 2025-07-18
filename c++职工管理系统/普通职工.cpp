#include"普通职工.h"
employee::employee(int id, string name, int did)
{
	this->m_id = id;//将用户的值传入到类里面的变量；
	m_name = name;
	m_did = did;
}
void employee:: showinfo()
{
	cout << getname()<< m_name<< m_id   << endl;
	cout << "处理经理的事情" << endl;
}
string employee:: getname()
{
	return string("员工");
} 