//��Ա�������const�����ǳ�Ϊ�������Ϊ��������
//�������ڲ������޸ĳ�Ա����
//���ǳ�Ա��������ʱ�ӹؼ���mutable���ڳ���������Ȼ�����޸�
#include<iostream>
using namespace std;
class person
{
public:
	//������p.showperson���p�൱��ָ����this
	//��thisָ����һ��ָ�볣����Ҳ����ָ��ָ�򲻿��޸�
	//��void showperson() const��personҲ��ɳ��������޸ģ��൱��const person *const this
	void showperson() const//��const��m_a�Ͳ������޸���
	{
		this->m_b = 100;//�����޸�
		this->m_a = 100;//Ϊ�˷������ͳһ����this
	}
	void func()
	{
		m_a = 100;//����ͨ����������޸�
		cout << "����";
	}
	int m_a;
	mutable int m_b;//����mutable��Ҳ�����޸�
};
void test01()
{
	person p;
	p.showperson(); //�൱��person* const this
}
void test02()
{//������
	const person p1;//������
	p1.m_a=100;//����Ҳ�ǲ������޸ĵ�
	p1.m_b=200;//����m_bʱ������������޸�
	p1.showperson();//������ֻ�ܵ��ó�����
	p1.func();//�޷�������ͨ����
}
int main()
{
	test01();
	return 0;
}