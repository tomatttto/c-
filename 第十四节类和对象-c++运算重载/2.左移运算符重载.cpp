/*
* ���� "<<" ���������person������m_a��m_b����ֱ�����
* cout << p << endl;�ǲ��еģ������Ļ����Ǿ���Ҫ�õ�����
*/
#include<iostream>
using namespace std;
class person
{
public:
	int m_a;
	int m_b;
};
//����ֻ����ȫ�ֺ�������
ostream & operator<<(ostream &cout, person p)
//��������cout��Ҫ�ҵ�������������(˫��cout���ת��������Է���),Ȼ���ٽ������������͵��ù�������һ��
//��&����Ϊ��Ψһ������Ȼ���ټ�person�ࡣ
{
	cout << "m_a=" << p.m_a << "m_b" << p.m_b << endl;
	return cout;
}
void test01()
{
	person p1;
	p1.m_a = 10;
	p1.m_b = 20;
	cout << p1;//�����Ϳ���ֱ�������
	cout << p1 << endl;//��������Ϊ ostream & operator<<(ostream &cout, person p)����ֵ��cout���������������ostream&����void ��ôֻ�����26�У������޷��ӱ�Ķ�����
}
int main()
{
	test01();
	return 0;
}