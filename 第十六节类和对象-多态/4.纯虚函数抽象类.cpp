//�ڶ�̬��ͨ���������麯����ʵ���Ǻ�������ģ���Ҫ���ǵ���������д�����ݡ� 
//��˿��Խ��麯����Ϊ���麯���� 
//���麯���﷨ virtual ����ֵ���� ������ �������б�=0
//���������˴��麯���������Ҳ�г�����
//�������������ص�1.�޷�ʵ��������
//                2.���������д�������еĴ��麯��������Ҳ���ڳ�����
#include<iostream>
using namespace std;
class base//�����࣬����
{
public:
	virtual void func() = 0;//���麯��
};
class son :public base
{
public:
	void func()//��д���ി�麯��
	{
		cout << "��������ĺ���" << endl;
	}
};
void test01()
{
	//base b1;//���ܴ�������
	//new base ;����Ҳ����
	son s1;//�������д����Ĵ��麯������ô����Ҳ�ᱨ��
	base* base = new son;
	base->func();
	delete base;
}
int main()
{
	test01();
	return 0;
}