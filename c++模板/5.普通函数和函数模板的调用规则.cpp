//1.�������ģ�����ͨ���������ã���������ͨ����
//2.����ͨ����ģ������б���ǿ�Ƶ��ú���ģ��
//3.����ģ��Ҳ��������
//4.�������ģ��������õ�ƥ�䣬���ȵ��ú���ģ��
#include<iostream>
using namespace std;
void myprint(int a, int b)
{
	cout << "������ͨ����" << endl;
}
template<class T>
void myprint(T a, T b)
{
	cout << "���õ�ģ�庯��" << endl;
}
template<class T>
void myprint(T a, T b,T c)
{
	cout << "���õ�����ģ�庯��" << endl;
}
void test01()
{
	int a = 10;
	int b = 20;
	myprint(a,b);//���õ�����ͨ�����ο���һ��
	//ͨ�����ÿ�ģ������б���ǿ�Ƶ��ú���ģ��
	myprint<>(a, b);
	myprint(a, b, 100);//����ģ������
	//�������ģ��������õ�ƥ�䣬���ȵ��ú���ģ��
	char c1 = 'a';
	char c2 = 'b';
	myprint(c1, c2);//��Ȼ��ͨ������myprint������ʽת��������ģ�����������˵�����(������ʽת��)�����Ե��õ��Ǻ���ģ��
}
int main()
{
	test01();
	return 0;
}