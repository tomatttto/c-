#include<iostream>
using namespace std;
//class point //点类
//{
//public:
//	void setX(int x)
//	{
//		m_x = x;
//	}
//	int getX()
//	{
//		return  m_x;
//	}
//	void setY(int y)
//	{
//		m_y = y;
//	}
//	int getY()
//	{
//		return  m_y;
//	}
//	
//private:
//	int m_x;
//	int m_y;
//};
//class yuan//圆类
//{
//public:
//	void setR(int r)//获取半径
//	{
//		m_r = r;
//	}
//	int getR()//获取半径
//	{
//		return m_r;
//	}
//	void setCenter(point center)
//	{
//		m_center = center;
//	}
//	point getCenter()//记住这里返回值为point类
//	{
//		return m_center ;
//	}
//private:
//	int m_r;//半径
//	point m_center; //圆心，在类中可以让另一个类作为本类中的成员
//};

void inyuan(yuan &y,point &p)//判断点和圆的关系
{
	//计算两点之间距离的平方
	int dis = (y.getCenter().getX() - p.getX())* (y.getCenter().getX() - p.getX())
		+ (y.getCenter().getY() - p.getY()) * (y.getCenter().getY() - p.getY());
	int rdis = y.getR() * y.getR();
	if (dis == rdis)
	{
		cout << "点在圆上" << endl;
	}
	else if (dis > rdis)
	{
		cout << "点在圆外" << endl;
	}
	 else if (dis < rdis)
	{
		cout << "点在圆内" << endl;
	}
}
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