//����һ��ͨ�ú������亯������ֵ���ͺ��β����Ϳ��Բ������ƶ�����һ�����������������
//���������ĺ����������ģ� void(����ֵ����) func(int a(�β�))������ģ�������û������˵��������
//template <typename T>    template����������ģ�� typename���������ķ�����һ���������ͣ�������class���� Tͨ�õ��������ͣ����ƿ��滻��ͨ��Ϊ��д��ĸ
#include<iostream>
using namespace std;
//�������������ν���
void swapint(int &a, int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
	cout << "a=" << a << "b=" << b << endl;
}
//��������������
void swapdouble(double& c, double& d)
{
	double temp;
	temp = c;
	c = d;
	d = temp;
	cout << "c=" << c << "d=" << d << endl;
}
//�����ĺ��������ÿһ�����Ͷ�дһ�λ���鷳����ʱ�������ģ����дһ��ͨ������
//����
template <typename T>//����һ��ģ�壬���߱���������Ĵ����и��ŵ�TΪͨ����������
void myswap(T& a, T& b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
	cout << "a=" << a << "b=" << b << endl;
}
void test01()
{
	int a = 20;
	int b = 30;
	//swapint(a,b );
	//����ģ�彻��,���ַ�ʽ
	//1.�Զ������Ƶ�
	myswap(a, b);//�����Լ����ݴ����������Ƶ���
	//2.��ʾָ������
	myswap<int>(a, b);//ֱ�Ӹ��ߵ�����ʲô����

	double c = 3.14;
	double d = 2.2;
	swapdouble(c, d);


}
int main()
{
	test01();
	return 0;
}