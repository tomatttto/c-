//������͸���ͬ����������������ͬ����Աֱ�ӷ���
//������ʸ����ͬ����Ա����Ҫ��������
#include<iostream>
using namespace std;
class Base
{
public:
	Base()
	{
		m_a = 10;
	}
	void func()
	{
		cout << "base��func" << endl;
	}
	void func(int a)
	{
		cout << "sons��func��int��" << endl;
	}
	int m_a;
};
class son :public Base
{
public:
	son()
	{
		m_a = 20;
	}
	void func()
	{
		cout << "sons��func" << endl;
	}
	
	int m_a;

};
void test01()//ͬ����Ա���ԵĴ�������
{
	son s1;
	cout <<"son��m_aΪ" << s1.m_a << endl;//ֱ������������������ݡ�
	cout << "Base��m_aΪ" << s1.Base::m_a << endl;//��һ��������Base::
}
void test02()
{
	//ͬ����Ա�����Ĵ���
	son s2;
	s2.func();//���������Ա����
	s2.Base::func();//ͬ�����������ø����Ա����
	//�����������ֺ͸���ͬ���ĳ�Ա�����������ͬ����Ա���������ص������ͬ������
	s2.Base::func(10);//����ͨ����ͬ�Ĵ�ֵ�����غ������ø���Ļ���Ҫ��������
}
int main()
{
	test01();
	test02();
	return 0;
}