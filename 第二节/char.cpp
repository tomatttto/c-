#include <iostream>
#include <string>
using namespace std;
int main() {
	char ch ;
	cout << "输入一个字符计算他的长度和阿斯克码" << endl;
	cin >> ch;
	cout<< ch <<"长度为" << sizeof(ch) << endl;
	cout << ch << "的阿斯克码为" << (int)ch ;
	system("pause");
	return 0;
}