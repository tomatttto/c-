//�̳з�ʽ�����֣������̳У�˽�м̳У������̳�
//�����˽�����ԣ�����ʲô�̳ж��̳в���
//�����̳У�������ʲô���ԣ����಻��
//�����̳У������ɱ�������
//˽�м̳У�������˽������
#include<iostream>
using namespace std;
class base1
{
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
};
class son : public base1//�����̳�
{
public:
	void func()
	{
		m_a = 10;//���๫������(����Ȩ��)
		m_b = 20;//���ౣ������(����Ȩ��)
	}
};
void test01()
{
	son son1;
	son1.m_a = 100;//�̳й����Ĺ���Ȩ����Ȼ�����������
	//s1.m_b = 100;(����Ȩ�����ⲻ�ɷ���)
}
class base2
{
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
};
class son2:protected base2
{
public:
	void func()
	{
		m_a = 100;//���๫������(����Ȩ��)
		m_b = 100;//���ౣ������(����Ȩ��)
		//m_c = 100;//����˽������(�޷�����)
	}
};
void test02()
{
	son2 s2;
	//s2.m_a = 100;//����Ȩ�������޷�����
}
class base3
{
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
};
class son3 :protected base3
{
public:
	void func()
	{
		m_a = 100;//���๫������(˽��Ȩ��)
		m_b = 100;//���ౣ������(˽��Ȩ��)
		//m_c = 100;//����˽������(�޷�����)
	}
};
void test03()
{
	son3 s3;
	//s3.m_a = 100;//˽��Ȩ�������޷�����
}
int main()
{

	return 0;
}