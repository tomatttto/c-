#include<iostream>
using namespace std;
//c++�У����ڵĳ�Ա�����ͳ�Ա�����ֿ��洢
//ֻ�зǾ�̬��Ա������������Ķ�����
class person
{

};
class lei
{
	int m_a;
	static int m_b;
};
class lei1
{
	int m_a;
	static int m_b;
	void func()
	{

	}
};
int lei::m_b = 100;
void test01()
{
	person p1;
	cout << sizeof(p1) << endl;//����Ļ�p1ֻռ1���ֽ�
	//c++���ÿ���ն������һ���ֽڿռ䣬˵������Ϊ�˸���������ڴ���ռһ��λ����˵����������ڴ�����һ��λ�������ڱ�־λ
}
void test02()
{
	lei l;
	cout << sizeof(l) << endl;//���ռ4���ֽ�,static��ռ����Ŀռ�
}
void test03()
{
	lei1 l1;
	cout << sizeof(l1) << endl;//���ռ4���ֽ�,��Ϊ��Ա�����ͳ�Ա��������һ��ռ��һ���ռ������l1���func������ռ����Ŀռ䣬ͬ��̬��Ա����Ҳ����ռ��
}
int main()
{
	test01();
	test02();
	test03();
	return 0;
}