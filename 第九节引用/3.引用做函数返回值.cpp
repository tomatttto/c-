#include<iostream>
using namespace std;
//1��Ҫ���ؾֲ�����������
int& test01()
{
	int a = 10;//ջ�����
	return a;
}
//2.�����ĵ��ÿ�����Ϊ��ֵ
int& test02()
{
	static int a = 10;//ȫ�������
	return a;
}
int main()
{
	//int& ref = test01();
	int& ref2 = test02();
	cout << ref2 << endl;
	test02() = 1000;//��Ϊ���ص���a������������������൱��a=1000
	cout << ref2 << endl;//��ref2��a�ı�����Ҳ�������Ϊ��test02�ı�����

	return 0;
}