//�����������Զ������ͽ��бȽ�
#include<iostream>
using namespace std;
class person
{
	friend bool operator==(person& p1, person& p2);
public:
	person(string name,int age)
	{
		m_age = age;
		m_name = name;
	}
private:
	int m_age;
	string m_name;
};
bool operator==(person &p1,person &p2)
{
	if (p1.m_age == p2.m_age&&p1.m_name==p2.m_name)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void test01()
{
	person p1("�Ų���",18);
	person p2("�Ų���",18);
	if (p1 == p2)
	{
		cout << "�������" << endl;
	}
	else
	{
		cout<<"���˲����"<<endl;
	}
}
int main()
{
	test01();
	return 0;
}