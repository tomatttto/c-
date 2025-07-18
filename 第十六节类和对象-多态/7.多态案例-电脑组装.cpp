//电脑主要组成部件为CPU显卡内存条,将每个零件封装出抽象基类，
// 并且提供不同的厂商生产不同的零件，如Intel厂商和Lenovo厂商
// 测试电脑类提供让电脑工作的函数，并且调用每个零件工作的接口。 
// 测试时，组装三台不同的电脑进行工作。 
#include<iostream>
using namespace std;
class cpu//cpu抽象类
{
public:
	virtual void jisuan() = 0;//计算的纯虚函数
};
class videocard//显卡抽象类
{
public:
	virtual void huizhi() = 0;//绘制的纯虚函数
};
class memory//内存抽象类
{
public:
	virtual void cunchu() = 0;//存储的纯虚函数
};
class computer
{
public:
	computer(cpu* cpu,videocard* videocard,memory* memory)
	{
		m_cpu = cpu;//指针赋值
		m_memory = memory;
		m_videocard = videocard;
 }
	void dowork()//调用接口
	{
		m_cpu->jisuan();
		m_videocard->huizhi();
		m_memory->cunchu();
 }
	~computer()
	{
		if (m_cpu!=NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}
		if (m_videocard != NULL)
		{
			delete m_videocard;
			m_videocard = NULL;
		}
		if (m_memory != NULL)
		{
			delete m_memory;
			m_memory = NULL;
		}
	}
private:
	cpu* m_cpu;//cpu零件指针
	videocard* m_videocard;//显卡零件指针
	memory* m_memory;//内存零件指针
};
class intelcpu:public cpu
{
	void jisuan()
	{
		cout << "英特尔cpu开始干活了" << endl;
	}
};
class intelgpu :public videocard
{
	void huizhi()
	{
		cout << "英特尔gpu开始干活了" << endl;
	}
};
class intelmemory :public memory
{
	void cunchu()
	{
		cout << "英特尔内存开始干活了" << endl;
	}
};
class nvidiagpu :public videocard
{
	void huizhi()
	{
		cout << "显卡开始干活了" << endl;
	}
};
class lenovomemory :public memory
{
	void cunchu()
	{
		cout << "内存开始干活儿了" << endl;
	}
};
void test01()
{
	cpu* intelCpu = new intelcpu;
	videocard* intelvideocard = new intelgpu;
	memory* Lenovomemory = new lenovomemory;

	computer* Computer1 = new computer(intelCpu,intelvideocard,Lenovomemory);
	Computer1->dowork();
	delete Computer1;

}
int main()
{
	test01();
	return 0;
}
//基本原理首先通过创建CPU抽象类和显卡抽象类及内存抽象类是为了接下来更好的拓展其他厂商的一些显卡，cpu等。
// 接下来又写了一个computer类，是为了接收其他厂商的这些配件。而具体的实现办法，通过父类指针去开辟了一个堆区
// computer* Computer1 = new computer(intelCpu,intelvideocard,Lenovomemory);然后这个堆区传入了英特尔CPU，英特尔的显卡和联想的内存
// 然后在computer类里面私有了三个指针，用指针去接收我传入的这些CPU显卡和内存。m_cpu = cpu; m_memory = memory; m_videocard = videocard;
//cpu* m_cpu;//cpu零件指针
//videocard* m_videocard;//显卡零件指针
//memory* m_memory;//内存零件指针
//接着我要用这个指针去执行dowork函数具体的实现就是Computer1->dowork();
// 接着我需要先将computer一的堆区删除但是在删除computer堆区之前，
// 我需要先将我的computer里面的指针先删除再指向空（析构函数）然后将computer1 delete掉。