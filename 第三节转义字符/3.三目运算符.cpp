#include <iostream>
using namespace std;
int main() {
	int a = 40;
	int b = 20;
	int c = 30;
	c = (a > b ? a : b);//a和b谁大，大的？后面赋值给c
	cout << c << endl;
	(a > b ? a : b) = 100;//也可以将100赋值给较大的数
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	system("pause");
	return 0;
}