#pragma once
#include<iostream>
#include"点类.h"
using namespace std;
class yuan//圆类
{
public:
	void setR(int r);//获取半径
	int getR();//获取半径
	void setCenter(point center);
	point getCenter();//记住这里返回值为point类
private:
	int m_r;//半径
	point m_center; //圆心，在类中可以让另一个类作为本类中的成员
};
