#include <iostream>
#include<array>
using namespace std;
int main()
{/* 排序总轮数 = 元素个数 - 1；
	每轮对比次数 =元素个数-排序轮数-1
	例如，a数组里有七个元素，总轮数为7-1=6
	每轮对比次数，第一次排序 = 9-1-1，第二次为= 9-2-1，以此类推
	总体来说大循环是选取的数字，小循环是选择的排序，例如第一个循环开始系统选择3，然后进入第二层循环
	开始3与5，4，2，7，6，1比较，比较完后，内循环退出，外循环进入第二个5。
 */int temp;
    int  a[100];
	int size;
	cout << "请输入数组的大小：";//输入数组大小
	cin >> size;
	a[20] = a[size];
	for (int i = 0; i < size; i++)
	{
		cout<< "请输入第"<<i+1<<"个数：";//输入第一个数
		cin >> a[i];
	}
	//总共排序轮数为元素个数 - 1
	for (int i = 0; i < sizeof(a)/sizeof(a[0])-1; i++)
	{
		//内层循环对比 每轮对比次数 =元素个数-排序轮数-1
		for (int j = 0; j < sizeof(a) / sizeof(a[0])-i-1; j++)
		{
			//如果第一个数字比第二个数字大，通过temp交换
			if (a[j] > a[j + 1])
			{
				temp =a[j] ;
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}	
	}
	cout << "排序后的数组为：";
	for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
	{
		cout<<a[i]<<" "<<endl;
	}
	return 0;
}
