#include<iostream>
using namespace std;
//����������ָ������������ͬ�����ݲ�����һ�������ò�ͬ�ĺ���
//��������1��ͬһ�������¡�
//        2����������ͬ
//        3�������������Ͳ�ͬ�����߸�����ͬ��˳��ͬ
void func()
{
	cout << "func(û����)�ĵ���" << endl;
}
void func( int a )
{
	cout << "func(�в���)�ĵ���" << endl;
}
void func(double a)
{
	cout << "func(double)�ĵ���" << endl;
}
void func(int a,double b)
{
	cout << "func(int a,double b)�ĵ���" << endl;
}
void func(double a, int b)
{
	cout << "func(double a, int b)�ĵ���" << endl;
}
int main()
{
	func();
	func(10);
	func(3.1415926);
	func(10,3.1415926);
	func(3.1415926,10);
	return 0;
}
//��������ֵ�����Ա䡣