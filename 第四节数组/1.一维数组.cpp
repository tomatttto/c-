#include <iostream>
using namespace std;
int main() {
	//三种定义方式
	int a[10];//没有添加任何的数据会显示内存地址
	int b[4] = { 1,2,3,4};
	int c[] = { 1,2,3,4,5,6,7,8,9 };
	cout << "c数组里的数据为";
	for (int i = 0; i < sizeof(c)/sizeof(c[0]); i++)
	{
		cout << c[i]<<" ";
	}
	cout <<endl<< "c的数组长度为" << sizeof(c) / sizeof(c[0])<<endl;
	cout << "c数组的占用空间为" << sizeof(c) << endl;
	cout << "c数组的内存地址为" << c << endl;
	cout << "数组第一个元素的地址为" << int( & c[0]) << endl;//&为转换成地址去掉&会变成元素的具体数字(16进制)也可以加一个int（&c[0]）来强制转换成10进制
	cout << "数组第二个元素的地址为" << int(&c[1]) << endl;
	system("pause");
	return 0;
}