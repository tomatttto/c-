#include<iostream>
using namespace std;
//��������ע������
//1������Ϊ��������
void func(int &a)
{
	cout << "func�����ã�" << endl;
}
void func(const int& a)
{
	cout << "func���������ã�" << endl;
}
//2������������Ĭ�ϲ���
void func2(int a,int b =10  )
{
	cout << "func2�ĵ���" << endl;
}
void func2(int a)
{
	cout << "func2�ĵ���" << endl;
}
int main()
{
	 int a = 10;//���������const�����ͻ���"func���������ã�"���
	func(a);//����������ɳ�������10��Ҳ�����óɵڶ���
	//func2(10);�����Ļ���һ��func2�͵ڶ���func2���ܴ��룬�ᱨ�����������
	return 0;
}