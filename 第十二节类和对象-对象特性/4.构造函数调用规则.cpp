#include<iostream>
using namespace std;
//Ĭ������£�c++���������ٸ�һ�������3������
//1.Ĭ�Ϲ��캯�����޲Σ�������Ϊ�գ�
//2.Ĭ�������������޲Σ�������Ϊ�գ�
//3.Ĭ�Ͽ������캯���������Խ���ֵ����
/*
* ���ù���
* ����û������вι��캯����c++�����ṩĬ���޲ι��죬�����ṩĬ�Ͽ�������
* ����û����忽�����캯����c++�����ṩ�������캯��
*/
class person
{
public:
	
	person()
	{
		cout << "personĬ�ϵ��޲ι���" << endl;
	}
	
	person(int age)
	{
		cout << "person���вι���" << endl;
		m_age = age;
	}
	person(const person& p1)
	{
		cout << "person�Ŀ�����������" << endl;
		m_age = p1.m_age;
	}
	~person()
	{
		cout << "person����������" << endl;
	}
	int m_age;
}; 
void test01()
{
	person p1;
	p1.m_age = 18;
	person p2(p1);//�����24-28�д���ע�͵���Ȼ����ʾ18��Ϊ��������Զ�дһ��m_age = p1.m_age;��ֵ
	//��Ҳ��������û������вι��캯��person(int age)��c++�����ṩĬ���޲ι��죬�����ṩĬ�Ͽ������죨��ûд������£�
	cout << p2.m_age << endl;
}
void test02()
{
	person p1(18);
	person p2(p1);
	//�����Ĭ���޲ι���ע�͵��ᱨ����Ϊ�вκ���ûע�͵������Ĭ���вκ����еĻ����ᴴ���޲κ���
	cout << p2.m_age << endl;
}
int main()
{
	//test01();
	test02();
	return 0;
}