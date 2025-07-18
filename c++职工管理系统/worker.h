#pragma once
#include<iostream>
using namespace std;
//职工抽象基类
class worker
{
public:
	virtual void showinfo() = 0;//显示个人所有信息
	virtual string getname() = 0;//获取岗位名称
	int m_id;//职工编号
	string m_name;//职工姓名
	int m_did;//部门编号
};
