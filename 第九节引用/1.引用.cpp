#include<iostream>
using namespace std;
int main()
{
	//���õı����Ǹ����������
	int a = 10;
	int& a1 = a;//���ã���a���С����a1
	cout << a1 << endl;
	a1 = 20;
	cout << a1 << endl;//С������ֵҲ����Ч
	system("pause");
	return 0;
	//���ñ����ʼ��int &b�����ǲ��е�û��������˭�ı�����
	// �ڳ�ʼ���󲻿ɸı䣬���������Ի�������
	int w = 10;
	int y = 10;
	int &x = w;
	//int &x = y;//�����ǲ��������
}