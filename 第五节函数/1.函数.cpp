#include<iostream>
using namespace std;
int add(int num1, int num2)
{/*
	1，返回值类型
	2，函数名
	3，参数表列
	4，函数体语句
	5，return表达式
	*/
	int sum = num1 + num2;//sum是一个局部变量。
	return sum;
}
string cat1(string first, string second)
{
	string cat = first + second;
	return cat;
}
int main()
{
	string first, second;
	int a, b;
	cout << "输入两个数字进行加法运算" << endl;
	cin >> a;
	cin >> b;
	//a和b传到add里的参数为实际参数，而add里的a和b并没有实际的数据，称之为形参。
	//当调用函数时，实际的参数例如a=输入的数会传到add函数里的形参int a
	int sum = add(a, b);
	cout <<"和为" << sum << endl;
	cout << "输入两句话进行拼接" << endl;
	cin >> first;
	cin >> second;
	string cat = cat1(first, second);
	cout << cat << endl;
	
}