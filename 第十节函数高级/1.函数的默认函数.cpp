#include<iostream>
using namespace std;
//��������βο���Ĭ���в���
int func(int a = 10)//�β�aĬ�ϳ�ʼֵΪ10
{
	int c, b = 30;
	c = a + b;
	return c;
}
int func1(int a,int b =20)//�β�bĬ�ϳ�ʼֵΪ20
{
	//�����ֵʱ����ֵ������ʹ�ô����50������Ĭ�ϵ�20
	return a + b;
}
//ע�����1���ĳ��λ������Ĭ�ϲ����������λ��������Ҫ��Ĭ��ֵ
//int func2(int a, int b = 20,int c)
//{
//�����c������Ĭ��ֵ����
//	return a + b;
//}
/*
* 2���������������Ĭ�Ϻ���������ʵ�־Ͳ�����Ĭ�Ϻ���
* ������ʵ��ֻ����һ��Ĭ�Ϻ���
* int func3(int a = 10, int b =10);//����
  int func3(int a = 10, int b =10)
 {
	 return a + b;
  }
*/

int main()
{
	cout << func() << endl;
	cout << func1(10,50) << endl;
	//cout << func3() << endl;�ᱨ��
	return 0;
}