#include<iostream>
using namespace std;
int main() 
{
	int* p = nullptr;
	int a = 10;
	p = &a;
	//6��7��Ҳ����д��int *p =&a;
	cout << sizeof(p) << endl;//32λΪ4���ֽڣ�64λΪ8���ֽ�
	system("pause");
	return 0;
}