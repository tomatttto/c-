#include"圆类.h"
	void yuan::setR(int r)//获取半径
	{
		m_r = r;
	}
	int yuan::getR()//获取半径
	{
		return m_r;
	}
	void yuan::setCenter(point center)
	{
		m_center = center;
	}
	point yuan::getCenter()//记住这里返回值为point类
	{
		return m_center ;
	}