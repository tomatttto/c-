//案例描述，分别利用普通写法和多态技术，实现两个操作数的进行运算的计算器类
#include<iostream>
using namespace std;
//普通写法
class calculator
{
public:

	int getresult(string oper)//函数名是获取结果，oper是运算符
	{
		if (oper == "+")
		{
			return m_num1 + m_num2;
		}
		else if (oper == "-")
		{
			return m_num1 - m_num2;
		}
		else if (oper == "*")
		{
			return m_num1 * m_num2;
		}
		//如果想拓展新的功能需要修改源码。例如加个除法，开方啥的。
		//在真实开发环境中提倡开闭原则；对拓展进行开发，对修改进行关闭
	}

	int m_num1;
	int m_num2;
};
void test01()//普通写法
{
	//创建一个计算器的对象
	calculator c1;
	c1.m_num1 = 10;
	c1.m_num2 = 20;
	cout << c1.m_num1 << "+" << c1.m_num2 << "=" << c1.getresult("+") << endl;
	cout << c1.m_num1 << "-" << c1.m_num2 << "=" << c1.getresult("-") << endl;
	cout << c1.m_num1 << "*" << c1.m_num2 << "=" << c1.getresult("*") << endl;
}
//利用多态实现
//实现一个计算器的基类
class abstractcalculator//抽象计算机类
{
public:
	virtual int getresult()
	{
		return 0;
	}
	int m_num1;
	int m_num2;

};
//再设计一个加法的类
class addcalculator :public abstractcalculator
{
public:
	int getresult()
	{
		return m_num1 + m_num2;//加法计算器
	}
};
//减法计算器类
class subcalculator :public abstractcalculator
{
public:
	int getresult()
	{
		return m_num1 - m_num2;//减法计算器
	}
};
//乘法计算器类
class mulcalculator :public abstractcalculator
{
public:
	int getresult()
	{
		return m_num1 * m_num2;//乘法计算器
	}
};
void test02()
{
	//父类指针写法，
	abstractcalculator* abc = new addcalculator;// addcalculator是上面的类，通过父类的指针指向new出来的加法。
	abc->m_num1 = 100;
	abc->m_num2 = 200;
	//加法运算
	cout << abc->m_num1 << "+" << abc->m_num2 << "=" << abc->getresult() << endl;
	delete abc;//堆区手动删除，删除的是堆区，但是指针没删，所以下面还能用abc去指向别的类
	//减法运算
	abc = new subcalculator;
	abc->m_num1 = 100;
	abc->m_num2 = 200;
	cout << abc->m_num1 << "-" << abc->m_num2 << "=" << abc->getresult() << endl;
	delete abc;
}
int main()
{
	test01();
	test02();
	return 0;
}