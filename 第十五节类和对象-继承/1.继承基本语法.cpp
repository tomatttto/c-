//�̳п��Լ̳и����һЩ������Ҳ�������һЩ�Լ����еĶ���\
//�﷨��class ���� : �̳з�ʽ ����
//����Ҳ�������࣬����Ҳ�л���
#include<iostream>
using namespace std;
class Base//������
{
public:
	void shuchu1()
	{
		cout << "����ҳ��" << endl;
	}
};
class page1 :public Base//�̳�
{
	public:
		void shuchu2()
		{
			cout << "����һ��ҳ��" << endl;
		}
};
class page2 :public Base
{
public:
	void shuchu3()
	{
		cout << "������һ��ҳ��" << endl;
	}
};
void test01()
{
	page1 p1;
	page2 p2;
	p1.shuchu1();
	p1.shuchu2();
	p2.shuchu1();
	p2.shuchu3();
}
int main()
{
	test01();
	return 0;
}