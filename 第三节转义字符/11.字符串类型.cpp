#include<iostream>
using namespace std;
int main() {
	//c���Ե�д��
	char first[] = "hello world";
	cout << first << endl;
	//c++���Ե�д����Ҫ��#include<string>�ļ�
	string second = "hello world";
	cout << second << endl;

	int a;
	bool flag = true;
	 cout <<"bool�ĳ��ȴ�С��" << sizeof(flag) << endl;
	cin >> a;
	if (a == (int)flag)
	{
		cout << "������" << flag << endl;
	}
	else if (a != (int)flag)
	{
		cout << "�����ֵ������ȷ��" << endl;
	}
	
	system("pause");
	return 0;
}