#include<iostream>
using namespace std;
class Base//����
{
public:
	Base()
	{
		cout << "���๹�캯������" << endl;
	}
	~Base()
	{
		cout << "�������������ĵ���"<<endl;
	}
};
class son:public Base//����
{
public:
	son()
	{
		cout << "���๹�캯������" << endl;
	}
	~son()
	{
		cout << "�������������ĵ���"<<endl;
	}
};
void test1()
{
	//Base b1;
	son s1;//���п��Կ������๹�캯�����ã����๹�캯�����ã��������������ĵ��ã��������������ĵ���
}
int main()
{
	test1();
	return 0;
}