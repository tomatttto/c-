#include<iostream>
using namespace std;
class Base//父类
{
public:
	Base()
	{
		cout << "父类构造函数调用" << endl;
	}
	~Base()
	{
		cout << "父类析构函数的调用"<<endl;
	}
};
class son:public Base//子类
{
public:
	son()
	{
		cout << "子类构造函数调用" << endl;
	}
	~son()
	{
		cout << "子类析构函数的调用"<<endl;
	}
};
void test1()
{
	//Base b1;
	son s1;//运行可以看出父类构造函数调用，子类构造函数调用，子类析构函数的调用，父类析构函数的调用
}
int main()
{
	test1();
	return 0;
}