#include"jisuan.h"
void inyuan(yuan& y, point& p)//判断点和圆的关系
{
	//计算两点之间距离的平方
	int dis = (y.getCenter().getX() - p.getX()) * (y.getCenter().getX() - p.getX())
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