#include<iostream>
using namespace std;
//c++���еĳ�Ա��������һ����Ķ������ǳƸó�ԱΪ�����Ա
/*
	class A
	{
	int a;
	};
	class B
	{
	A a;//a��B����Ķ����Ա
	};
*/
class phone
{

public:
	string p_name;//�ֻ�Ʒ������
	phone(string pname)
	{
		p_name = pname;//Ȼ��m_phone�������︳ֵ��pname��pname�ٸ�ֵ��p_name,��Ҳ����Ϊʲô p.m_phone.p_name�������iphone
		cout << "phone�Ĺ��캯������" << endl;
	}
	~phone()
	{
		cout << "phone��������������" << endl;
	}
};
class person
{

public:
	person(string name,string pname):m_name(name), m_phone(pname)//���൱��д��m_phone = pname
	{
		cout << "person�Ĺ��캯������" << endl;
	}
	//����
	string m_name;
	//�ֻ�
	phone m_phone;//��Ϊ����phone���ͣ����Ի��Զ����������phone class��
	~person()
	{
		cout << "person������������" << endl;
	}
};
void test01()
{
	person p ("����", "iphone");
	cout<<p.m_name<<"����" << p.m_phone.p_name << endl;
}
	int main()
{
		test01();
	return 0;
}
	//�������������ջ���Ƚ���������������˳����phone���죬person���죬person������phone����