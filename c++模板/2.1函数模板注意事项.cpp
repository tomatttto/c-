#include<iostream>
using namespace std;
//����ģ��ע������
//1.�Զ������Ƶ�������Ҫ�Ƶ���һ�µ���������T����ʹ��
//2.ģ�����Ҫȷ����T���������ͣ��ſ���ʹ��
template<class T>//class��tpyenameû�����𣬶�����
void myswap(T& a, T& b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}
void test01()
{
	int a = 10; 
	int b = 20;
	myswap(a, b);//����ok�ġ�
	cout << "a=" << a << "b=" << b << endl;
	int c = 20;
	string d[10];
	//myswap(c, d);//�����ǲ��еģ�����Ҫ�Ƶ���һ�µ���������T����ʹ��
	
}
template<class T>
void func()
{
	cout << "func��������" << endl;
}
void test02()
{
	//func();//ģ�����Ҫȷ����T���������ͣ��ſ���ʹ��
           //���func������û�п����Ƶ���T����������
	func<int>();//����ֱ��ָ�����ͺ�ſ�����
}
int main()
{
	test01();
	test02();
	return 0;
}