/*
* ����������������е���������½��ж��壬��������һ�ֹ��ܣ�����Ӧ��ͬ���������͡�
���Խ������Զ�����������������class�ࡣ 
operator�����һ����+���Ŵ������ؼӺ������
*/
#include<iostream>
using namespace std;
class person
{
public:
	int m_a;
	int m_b;
};
person operator+(person &p1,person &p2)//ȫ�ֺ�����+�ŵ�����
{
	person temp;
	temp.m_a = p1.m_a + p2.m_a;
	temp.m_b = p1.m_b + p2.m_b;
	return temp;
}
void test01()
{
	person p1;
	p1.m_a = 10;
	p1.m_b = 20;
	person p2;
	p2.m_a = 30;
	p2.m_b = 40;
	person p3 = p1 + p2;
	cout << "p3��m_a��ֵΪ " << p3.m_a << " p3��m_b��ֵΪ " << p3.m_b << endl;
}
class Person
{
public:
	int m_a;
	int m_b;
	Person operator+(Person& p)//��Ա�������Ӻ�����
	{
		Person temp;
		temp.m_a = this->m_a + p.m_a;
		temp.m_b = this->m_b + p.m_b;
		return temp;
	}
};
void test02()
{
	Person p1;
	p1.m_a = 50;
	p1.m_b = 60;
	Person p2;
	p2.m_a = 70;
	p2.m_b = 80;
	Person p3;
	p3 = p1 + p2;
	cout << "p3��m_a��ֵΪ " << p3.m_a << " p3��m_b��ֵΪ " << p3.m_b << endl;
}
int main()
{
	test01();
	test02();
	return 0;
}
//1.���������Ҳ���Է�����������
//2.���õ��������Ͳ����Ըı�����int float��
//3.��Ҫ���������������������д�Ӻŵ����أ����Ǻ�����д���Ǽ������߼�