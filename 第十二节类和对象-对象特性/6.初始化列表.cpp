#include <iostream>
using namespace std;
//c++�ṩ�˳�ʼ���б��﷨��������ʼ������
class person
{
public:
	//person(int a, int b, int c)
	//{//��ͳ��ʼ��
	//	m_a = a;
	//	m_b = b;
	//	m_c = c;
	//}
	person(int a,int b,int c) :m_a(a), m_b(b), m_c(c)//��ʼ���б�
	{

	}
	int m_a;
	int m_b;
	int m_c;
};
void test01()
{
	person p (10, 20, 30);
	cout << p.m_a << p.m_b << p.m_c << endl;
}
int main()
{
	test01();
	return 0;
}