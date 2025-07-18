#include<iostream>
using namespace std;
class base
{
public:
	virtual void zhushui() = 0;//煮水
	virtual void chongpao() = 0;//冲泡
	virtual void daorubeizhong() = 0;//倒入杯中
	virtual void jiaruliao() = 0;//加辅料
	void makedrink()
	{
		zhushui();
		chongpao();
		daorubeizhong();
		jiaruliao();
	}
};
class coffee:public base
{
public:
	virtual void zhushui()
	{
		cout << "煮水" << endl;
	}
	virtual void chongpao()
	{
		cout << "冲咖啡" << endl;
	}
	virtual void daorubeizhong()
	{
		cout << "倒入杯中" << endl;
	}
	virtual void jiaruliao()
	{
		cout << "加糖或牛奶" << endl;
	}
};
class tea :public base
{
public:
	virtual void zhushui()
	{
		cout << "煮水" << endl;
	}
	virtual void chongpao()
	{
		cout << "冲茶" << endl;
	}
	virtual void daorubeizhong()
	{
		cout << "倒入杯中" << endl;
	}
	virtual void jiaruliao()
	{
		cout << "加柠檬" << endl;
	}
};
void dowork(base *b1)//制作
{
	b1->makedrink();//接口
	delete b1;//释放
}
void test01()
{
	//制作咖啡
	//base* base = new coffee;
	//base->makedrink();//这个写法是普通写法，上面dowork相当于封装了一个函数；
	dowork(new coffee);
	dowork(new tea);
}
int main()
{
	test01();
	return 0;
}