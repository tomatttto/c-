#include<iostream>
using namespace std;
int main() 
{
	int* p = nullptr;
	int a = 10;
	p = &a;
	//6和7行也可以写成int *p =&a;
	cout << sizeof(p) << endl;//32位为4个字节，64位为8个字节
	system("pause");
	return 0;
}