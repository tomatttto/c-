#include<iostream>
using namespace std;
int add(int num1, int num2)
{/*
	1������ֵ����
	2��������
	3����������
	4�����������
	5��return���ʽ
	*/
	int sum = num1 + num2;//sum��һ���ֲ�������
	return sum;
}
string cat1(string first, string second)
{
	string cat = first + second;
	return cat;
}
int main()
{
	string first, second;
	int a, b;
	cout << "�����������ֽ��мӷ�����" << endl;
	cin >> a;
	cin >> b;
	//a��b����add��Ĳ���Ϊʵ�ʲ�������add���a��b��û��ʵ�ʵ����ݣ���֮Ϊ�βΡ�
	//�����ú���ʱ��ʵ�ʵĲ�������a=��������ᴫ��add��������β�int a
	int sum = add(a, b);
	cout <<"��Ϊ" << sum << endl;
	cout << "�������仰����ƴ��" << endl;
	cin >> first;
	cin >> second;
	string cat = cat1(first, second);
	cout << cat << endl;
	
}