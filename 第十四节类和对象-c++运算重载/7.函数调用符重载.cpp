/*函数调用运算符()也可以重载
* 由于重载后使用方式非常想函数的调用，因此称为仿函数
* 仿函数没有固定写法，非常灵活
*/
#include<iostream>
using namespace std;
class myprint//打印输出类
{
public:
	//重载函数调用运算符
	void operator()(string test)
	{
		cout << "这是test" << endl;
	}
};
class myadd//加法类
{
public:
	int operator()(int a,int b)
	{
		return a + b;
	}
};
void test01()
{
	myprint print;
	print("helloworld");
}
void test02()
{
	myadd myadd1;
	int ret = myadd1(100, 200);
	cout << ret << endl;
	//匿名函数，指这个函数可能只用一次也就不需要创建一个实例myadd1直接用
	cout << myadd()(100, 200) << endl;
}
int main()
{
	test01();
	test02();
	return 0;
}