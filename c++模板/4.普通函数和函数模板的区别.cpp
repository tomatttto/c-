/*��ͨ��������ʱ���Է����Զ�����ת��(��ʽ����ת��)
* ����ģ�����ʱ��������Զ������Ƶ������ᷢ����ʽ����ת��
* ���������ʾָ�����͵ķ�ʽ�����Է�����ʽ����ת��
* ��ʽ����ת�����������doubleת��int������
*/
#include<iostream>
using namespace std;
//��ͨ����
int add1(int a,int b)
{
	return a + b;
}
void test01()
{
	int a = 10;
	int b = 20;
	char c = 'c';
	cout<<add1(a, c);//�����Ļ���char��ʽת����int�ͽ�����ӡ�
}
template<class T>
T add2(T a,T b)
{
	return a + b;
}
void test02()
{
	int a = 10;
	int b = 20;
	char c = 'c';
	cout << add2(a, c);//����ģ�岻����ʽת��
	add2<int>(a, c);//����ָ�����ͺ��������
}
int main()
{
	test01();
	test02();
	return 0;
}