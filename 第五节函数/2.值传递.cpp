#include <iostream>
using namespace std;
//值传递
//如果不需要返回类型可以定义为void类型，他的意思是不需要返回任何类型
void change(int num1,int num2) 
{
	cout << "在函数里交换前为" << num1 << "和" << num2 << endl;
	int temp;
	temp = num1;
	num1 = num2;
	num2 = temp;
	cout << "在函数里交换后为" << num1 << "和" << num2 << endl;
	return;//void不需要返回所以return后面不需要加返回的东西
 }

int main()
{
	int a = 10;
	int b = 20;
	change(a, b);
	cout << a << "和" << b;//应为传入的是形参，所以在主函数里的a和b的值并不会发生改变
	system("pause");
	return 0;
}