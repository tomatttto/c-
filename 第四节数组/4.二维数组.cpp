#include <iostream>
using namespace std;
int main()
{
	//四种定义类型[行数][列数] 
	int arr1[2][2];
	int arr2[2][2] = 
	{
		{ 1,2 }, 
	    { 3,4 }
	};
	int arr3[2][2] = { 1,2,3,4 };
	int arr4[][2] = { 1,2,3,4 };
	for (int i = 0; i <2; i++)
	{ //查看数组的具体内容
		for (int j = 0; j < 2; j++)
		{
			cout << arr2[i][j];
		}
	}
	cout << "二维数组占用的内存空间为" << sizeof(arr2) << endl;//int（4位）*4个数字
	cout << "二维数组的第一行占用了" << sizeof(arr2[0])<< endl;
	cout << "二维数组的第一个数字占用了" << sizeof(arr2[0][0])<< endl;
	cout << "二维数组行数为" <<sizeof(arr2)/ sizeof(arr2[0]) << endl;
	cout << "二维数组的列数为" <<sizeof(arr2[0]) / sizeof(arr2[0][0]) << endl;
	cout << "二维数组首地址为" << arr2 << endl;//首地址和第一行的地址，第一个数字的地址为同一个地址
	cout << "二维数组的第一个数字的首地址为" <</*别忘了&求具体元素的地址*/ (int)&arr2[0][0] << endl;
	system("pause");
	return 0;
}
