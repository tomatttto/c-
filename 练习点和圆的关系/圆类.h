#pragma once
#include<iostream>
#include"����.h"
using namespace std;
class yuan//Բ��
{
public:
	void setR(int r);//��ȡ�뾶
	int getR();//��ȡ�뾶
	void setCenter(point center);
	point getCenter();//��ס���ﷵ��ֵΪpoint��
private:
	int m_r;//�뾶
	point m_center; //Բ�ģ������п�������һ������Ϊ�����еĳ�Ա
};
