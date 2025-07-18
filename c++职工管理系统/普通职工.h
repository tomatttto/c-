#pragma once
#include"worker.h"
#include<iostream>
using namespace std;
class employee :public worker//普通员工类
{
public:
	//构造函数
	employee(int id,string name,int did);
	void showinfo();
	string getname();
};