#include <iostream>
#include <string>
using namespace std;
int main() {
	char ch ;
	cout << "����һ���ַ��������ĳ��ȺͰ�˹����" << endl;
	cin >> ch;
	cout<< ch <<"����Ϊ" << sizeof(ch) << endl;
	cout << ch << "�İ�˹����Ϊ" << (int)ch ;
	system("pause");
	return 0;
}