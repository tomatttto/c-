#pragma once
#include"老板.h"
using namespace std;
boss::boss(int id, string name, int did)
{
	this->m_id = id;//将用户的值传入到类里面的变量；
	m_name = name;
	m_did = did;
}
 void boss::showinfo()
{
	 cout << getname() << m_name << m_id << endl;
	 cout << "下达任务" << endl;
}
 string boss::getname()
 {
	 return string("老板");
 }