#include<iostream>
using namespace std;
//�������1.ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
//        2.ֵ���ݵķ�ʽ������������ֵ
//        3.��ֵ��ʽ���ؾֲ�����
class person
{
	int m_age = 0;
public:
	person()
	{
		cout << "personĬ�ϵ��޲ι���" << endl;
	}
	person(int age)
	{
		cout << "person���вι���" << endl;
		m_age = age;
	}
	person(const person &p1)
	{
		cout << "person�Ŀ�����������" << endl;
		m_age = p1.m_age;
	}
	~person()
	{
		cout << "person����������" << endl;
	}
};
void test01()
{
	//1.ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
	person p1(20);
	person p2(p1);
}
void dowork(person p)
{

}
void test02()
{
	//2.ֵ���ݵķ�ʽ������������ֵ
	person p;
	dowork(p);//���ﴫp��ʱ����˼��dowork����β���Ҫ��һ������
	          //������test02�ﴴ����p���������ٴ���dowork�����ᴫ��һ���������������캯�������Ǳ���
}
person dowork2()
{
	person p1;
	return p1;//���ھֲ��������ص���һ��ֵ��������������ȻҪ���ص���һ��������Ҳ����p1�Ŀ������캯��
}
void test03()
{
	//3.��ֵ��ʽ���ؾֲ�����
	person p = dowork2();//2022�Ż��˱��������ܻ���з���ֵ�Ż�����ʡ���Ż�������ܻᵼ����ĳЩ����¿������캯��������ʽ���á�
	
}
int main()
{
	//test01();
	//test02();
	test03();
	return 0;
}