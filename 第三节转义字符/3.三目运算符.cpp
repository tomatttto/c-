#include <iostream>
using namespace std;
int main() {
	int a = 40;
	int b = 20;
	int c = 30;
	c = (a > b ? a : b);//a��b˭�󣬴�ģ����渳ֵ��c
	cout << c << endl;
	(a > b ? a : b) = 100;//Ҳ���Խ�100��ֵ���ϴ����
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	system("pause");
	return 0;
}