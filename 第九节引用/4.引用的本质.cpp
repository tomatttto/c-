//���õı�����c++�ڲ���һ��ָ�볣��
#include<iostream>
using namespace std;
//���������ã�ת��Ϊint* const ref = &a
void func(int & ref)
{
	ref = 100;//ref�����ã�ת��Ϊ*ref = 100
}
int main()
{

	int a = 10;
	//�Զ�ת��Ϊ int* const ref = &a��ָ�볣����ָ�볣��ָ�򲻿ɸģ�Ҳ˵������Ϊʲô�����Ը�
	int& ref = a;
	ref = 20;//������ref���ã��Զ�ת��Ϊ��*ref = 20
	func(a);
	return 0;
}