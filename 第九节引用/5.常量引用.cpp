#include<iostream>
using namespace std;
//����������Ҫ���������βΣ���ֹ�����
void show( int &val) //��һ��const int &val��ֹ���Ա��޸�
{//��ӡ���ݺ���
	val = 1000;//��ʱ��val��Ϊ1000ʱ���Ӧ��bҲ����Ϊ1000���Լ�һ��const
	cout << val << endl;
}
int main()
{
	//int a = 10;
	//int& ref = a;
	//int &ref = 10;���ǲ��еģ����������õĺϷ����ڴ�ռ�
	//���Ǽ���const��������������޸�Ϊ int temp = 10�� int& ref = temp;
	//const int& ref = 10;//�Ϸ���
	//ref = 20;//�����ǷǷ���constΪֻ����
	int b = 100;
	show(b);
	return 0;
}