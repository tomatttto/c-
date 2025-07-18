//c++认为万事都是对象，对象有属性和行为
//1.封装；属性和行为作为一个整体，表现生活中的事物
//  将属性和行为加以权限控制
#include<iostream>
using namespace std;
const double PI = 3.14;//常量圆周率 
//设计一个⚪类求周长
class yuan//圆类
{
	//访问权限（公共类）
public:
	//属性
	int banjin;//半径
	//行为；获取圆的周长
	double zhouchang()//函数
	{
		return 2 * PI * banjin;
	}
};
int main()
{
	//这个y1是创建了一个具体的类 
	yuan y1;
	y1.banjin = 10;
	cout <<"圆的周长为：" << y1.zhouchang() << endl;
	return 0;
}
