#include<iostream>
using namespace std;
int main() {
	//c语言的写法
	char first[] = "hello world";
	cout << first << endl;
	//c++语言的写法需要加#include<string>文件
	string second = "hello world";
	cout << second << endl;

	int a;
	bool flag = true;
	 cout <<"bool的长度大小是" << sizeof(flag) << endl;
	cin >> a;
	if (a == (int)flag)
	{
		cout << "类型是" << flag << endl;
	}
	else if (a != (int)flag)
	{
		cout << "输出的值不是正确的" << endl;
	}
	
	system("pause");
	return 0;
}