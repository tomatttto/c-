#pragma once
#include<iostream>
#include"jisuan.h"
#include"Բ��.h"
#include"����.h"
using namespace std;
int main()
{
	//����Բ
	yuan y1;
	y1.setR(10);
	point center1;
	center1.setX(10);
	center1.setY(0);
	y1.setCenter(center1);
	//������
	point p1;
	p1.setX(10);
	p1.setY(8);
	//�Ƚ�
	inyuan(y1, p1);
	return 0;
}