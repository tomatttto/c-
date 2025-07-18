#include<iostream>
using namespace std;
//类有三种权限
//public    公共权限        类内可以访问，类外可以访问
//protected 保护权限        类内可以访问，类外不可访问,保护权限子类可以访问父类内容
//private   私有权限        类内可以访问，类外不可访问,这个子类就访问不了父类
class Preson
{
public: 
	string name;
protected:
	string car;
private:
	int password;
public://函数同理如果public改为private或protected同样在类外访问不了
	void func()//这些是在类内所以都可以访问
	{
		name = "张三";
		car = "劳斯莱斯";
		password = 123456;
	}
};
int main()
{
	Preson p1;
	p1.name = "李四";
	//p1.car = "拖拉机";//因为car是保护类，所以类外不可访问，私有类password同理

	return 0;
}