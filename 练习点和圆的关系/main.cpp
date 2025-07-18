#pragma once
#include<iostream>
#include"jisuan.h"
#include"圆类.h"
#include"点类.h"
using namespace std;
int main()
{
	//创建圆
	yuan y1;
	y1.setR(10);
	point center1;
	center1.setX(10);
	center1.setY(0);
	y1.setCenter(center1);
	//创建点
	point p1;
	p1.setX(10);
	p1.setY(8);
	//比较
	inyuan(y1, p1);
	return 0;
}