#include <iostream>
using namespace std;
//����Ҫ��֪��max�������Ķ�����Ҫ����mian����ǰ�桰ע�⣬��vs2022�ﺯ�����Է���mian�������棬vs���Լ�ʶ��
//Ҳ������ǰ���߱����������Ĵ��ڡ�
int max(int a, int b);    //��������
int main() 
{
	int a = 10;
	int b = 20;
	cout << max(a, b) << endl;
	system("pause");
	return 0;
}
int max(int a, int b)//�ȽϺ�������������ֵ���ش���Ǹ�һ��ֵ
{
	int temp = a > b ? a : b;
	return temp;
}