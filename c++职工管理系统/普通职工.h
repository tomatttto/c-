#pragma once
#include"worker.h"
#include<iostream>
using namespace std;
class employee :public worker//��ͨԱ����
{
public:
	//���캯��
	employee(int id,string name,int did);
	void showinfo();
	string getname();
};