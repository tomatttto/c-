	/*
	* ���������
	* 1.const����ָ�� ---����ָ��
	* 2.const���γ��� ---ָ�볣��
	* 3.const������ָ�룬�����γ���
	*/
#include<iostream>
using namespace std;
int main()
{
	int a = 10;
	int b = 20;
	//1.const����ָ��-- - ����ָ��
	const int* zhizhen1 = &a;//ָ��ָ��ĵ�ַ���Ըģ�����*p = 20����ֱ�Ӹ�ָ��ָ��ĵ�ַ��ֵ�����Ը�
	zhizhen1 = &b;//�����ĸ�ָ��ĵ�ַ���ԣ���a��ַ����b�ĵ�ַ
	//2.const���γ���-- - ָ�볣��
	int* const zhizhen2 = &a;//const������ű�����֮Ϊ������ָ���ָ�򲻿��Ըģ�ָ��ָ���ֵ���Ը�
	*zhizhen2 = 20;//�����޸ĵ�ָ��ָ��ĵ�ַ��ֵ�ǿ��Եġ�zhizhen2 = &b;�����ĵ�ַ�ǲ����Ե�
	//3.const������ָ�룬�����γ���
	const int* const zhizhen3 = &a;
	/*
	* ����������ָ��*��ֵ������Ϊ����const���Բ����ǵ�ַ����ֵ���������޸ġ�
	* *zhizhen3 = 20;Υ����zhizhen3 = &b;ҲΥ��
	*/
	system("pause");
	return 0;
}