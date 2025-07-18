#include <iostream>
#include<cstdlib>//随机数生成函数
#include<ctime>//时间函数
using namespace std;
int main(){
	srand(static_cast<unsigned int>(time(0)));//设置随机数种子为当前时间
	int b = 0;
	int jishu = 0;
	int a = rand()%101;
	cout << "猜数字（你只有五次机会）" << endl;
	while (b<5)
	{
		cin >> jishu;
		if (jishu>a)
		{
			cout << "猜测过大" << endl;
		}
		else if (jishu < a)
		{
			cout << "猜的小了" << endl;
		}
		else if (jishu == a)
		{
			cout << "厉害猜对了" << endl;
			break;
		}
		b++;
		if (b == 5)
		{
			cout <<"答案是"<< a<< "你已经用完了五次机会，游戏结束" << endl;
			break;
		}
	}
	system("pause");
return 0;
}