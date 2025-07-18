/*普通函数调用时可以发生自动类型转换(隐式类型转换)
* 函数模板调用时如果利用自动类型推导，不会发生隐式类型转换
* 如果利用显示指定类型的方式，可以发生隐式类型转换
* 隐式类型转换就是例如从double转成int这样的
*/
#include<iostream>
using namespace std;
//普通函数
int add1(int a,int b)
{
	return a + b;
}
void test01()
{
	int a = 10;
	int b = 20;
	char c = 'c';
	cout<<add1(a, c);//这样的话从char隐式转换成int型进行相加。
}
template<class T>
T add2(T a,T b)
{
	return a + b;
}
void test02()
{
	int a = 10;
	int b = 20;
	char c = 'c';
	cout << add2(a, c);//函数模板不能隐式转换
	add2<int>(a, c);//但是指定类型后可以运行
}
int main()
{
	test01();
	test02();
	return 0;
}