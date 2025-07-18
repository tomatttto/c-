#include <iostream>
using namespace std;
//程序要先知道max函数在哪儿所以要放在mian函数前面“注意，在vs2022里函数可以放在mian函数后面，vs会自己识别”
//也可以提前告诉编译器函数的存在↓
int max(int a, int b);    //声明函数
int main() 
{
	int a = 10;
	int b = 20;
	cout << max(a, b) << endl;
	system("pause");
	return 0;
}
int max(int a, int b)//比较函数，传入两个值返回大的那个一个值
{
	int temp = a > b ? a : b;
	return temp;
}