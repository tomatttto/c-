#include<iostream>
using namespace std;
//��������1.ֵ���ݣ�2.��ַ���ݣ�3.���ô���
//ֵ����
void swap01(int a,int b)
{//ֻ����ֵ�ں�����û�仯ֻ�ں������б仯
	int temp = a;
	a = b;
	b = temp;
	cout << "ֵ����a="<< a << endl;
	cout << "ֵ����b=" << b << endl;
}
void swap02(int *a,int *b)
{//����ַ����������б仯
	int temp = *a;
	*a = *b;
	*b = temp;
}
void swap03(int &a,int &b)
{//���ô���ͬ��ַ�������&a��ʵ��a�ı�����ֻ������ͬһ������
 //�������õĻ�������ֱ�Ӳ���a��ֵ��bͬ��
	int temp = a;
	a = b;
	b = temp;
}
int main()
{
	int a = 10;
	int b = 20;
	//swap01(a, b);
	//swap02(&a, &b);
	// cout << "��ַ��a=" << a << endl;
	// cout << "��ַ��b=" << b << endl;
	swap03(a, b);
	cout << "���ú�a=" << a << endl;
    cout << "���ú�b=" << b << endl;
	return 0;
}