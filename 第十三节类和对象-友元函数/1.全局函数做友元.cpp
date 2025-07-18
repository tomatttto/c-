/*生活中你的家有客厅(Public)，有你的卧室(Privaie)客厅所有来的客人都可以进去，但是你的卧室是私有的，也就是说只有你能进去
  但是呢，你也可以允许你的好闰蜜好基友进去。在程序里，有些私有属性 也想让类外特殊的一些函数或者类进行访问，就需要用到友元的技术
  友元的目的就是让一个函数或者类 访问另一个类中私有成员,友元的关键字为 friend
*/
#include<iostream>
using namespace std;
class building
{
	friend void  pengyou(building* building);//友元声明，告诉building pengyou是我的好朋友可以访问我的私有类
public:
	building()//构造函数，赋初值
	{
		m_woshi = "卧室";
		m_keting = "客厅";
	}
	string m_keting;//客厅
private:
	string m_woshi;//卧室
};
void  pengyou(building *building)//朋友全局函数
{
	cout << "朋友正在访问" << building->m_keting << endl;
	cout << "朋友正在访问" << building->m_woshi << endl;
}
void test01()
{
	building b1;
	pengyou(&b1);
}
int main()
{
	test01();
	return 0;
}