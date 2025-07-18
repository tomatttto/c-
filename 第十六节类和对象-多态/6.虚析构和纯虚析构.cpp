//多态使用时如果子类有些属性开辟到堆区，那么父类指针释放时无法调用子类的析构代码
//解决方法就是将父类的析构函数改为虚析构或纯虚析构
#include<iostream>
using namespace std;
class animal
{
public:
	animal()
	{
		cout << "animal构造函数调用" << endl;
	}
	virtual void speak() = 0;
	//virtual ~animal()//虚析构如果不加的话子类的析构函数不会调用
	//{
	//	cout << "animal虚析构函数调用" << endl;
	//}
	virtual ~animal() = 0;//纯虚析构，纯虚析构需要重写
};
animal::~animal()//纯虚析构重写
{
	cout << "纯虚析构animal调用" << endl;
}
class cat :public animal
{
public:
	cat(string name)
	{
		cout << "cat构造函数调用" << endl;
		m_name = new string(name);//开辟到堆区
	}
	void speak()
	{
		cout<<*m_name << "小猫在说话" << endl;
	}
	~cat()//这个不会被调用，因为父类会比子类先被析构，所以走不到cat的析构
	{
		if (m_name!=NULL)
		{
			cout << "cat析构函数调用" << endl;
			delete m_name;
			m_name = NULL;
		}
	}
	string *m_name;
	
};
void test01()
{
	animal* animal = new cat("tom");
	animal->speak();
	delete animal;
}
int main()
{
	test01();
	return 0;
}