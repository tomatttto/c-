//��̳п��ܻ�������������ͬ����Ա���֣���Ҫ������������
//ʵ�ʿ����в������ö�̳У�������
#include<iostream>
using namespace std;
class Base
{
public:
	Base()
	{
		m_a = 100;
	}
	int m_a;
};
class Base2
{
public:
	Base2()
	{
		m_a = 200;
	}
	int m_a;
};
class son :public Base, public Base2//��̳�
{
public:
	son()
	{
		m_c = 300;
		m_d = 400;
	}
	int m_c;
	int m_d;

};
void test01()
{
	son s1;
	cout << "s1�Ĵ�СΪ" << sizeof(s1) << endl;//Ϊ16λ
	cout <<"Base��m_aΪ" << s1.Base::m_a << endl;//����������ʸ����ͬ������
	cout << "Base2��m_aΪ" << s1.Base2::m_a << endl;
}
int main()
{
	test01();
	return 0;
}