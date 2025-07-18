//分两类；静态多态；函数重载，运算符重载属于静态多态，复用函数名
//        动态多态；派生类和虚函数实现运行时多态
//区别；  静态多态；静态多态的函数地址早绑定。编译阶段确定函数地址
//        动态多态；动态多态的函数地址晚绑定。运行阶段确定函数地址

//动态多态满足条件；1.有继承关系。2.子类要重写父类的虚函数
//动态多态使用；父类的指针或引用，执行子类对象。
#include<iostream>
using namespace std;
class animal//动物类
{
public:
	virtual void speak()//(需要加一个虚函数实现地址晚绑定)
	{
		cout << "动物在说话" << endl;
	}
};
class cat :public animal
{
public:
	//函数重写；函数和返回值，函数名，参数列表完全相同
	void speak()
	{
		cout << "小猫在说话" << endl;
	}
};
class dog:public animal
{
public:
	void speak()
	{
		cout << "小狗在说话" << endl;
	}
};
//这种就叫地址早绑定，在编译阶段就确定函数地址
//如果想执行让猫说话，那么函数地址不能提前绑定，需要在运行阶段进行绑定(晚绑定)
void dospeak(animal &animal)//animal &animal = cat;
{
	animal.speak();
}
void test01()
{
	cat cat1;
	dospeak(cat1);
	dog dog1;
	dospeak(dog1);
}
int main()
{
	test01();
	return 0;
}
//在执行animal.speak的时候。如果不加虚函数，那么函数会直接指向animal类里的speak函数，但是我们需要让计算机知道我们想用的是哪个speak，
// 所以需要加virtual虚函数，来让计算机先别确定animal类里的speak的地址
// 这样的话在执行时候，计算机就不会先一步去指向animal的speak而是会看一下我传入的值是什么再去确定调用哪个speak。

//所谓的多态，也就是说，当我有一个像animal.speak();那样的一个函数调用，但是我有三个类（或更多）但是这三个类里函数返回类型，函数名和形参列表都是一样的。
//也就是说一个函数调用。 有三个可以被调用的函数，这样电脑就需要去进行一个匹配，也就是我传入什么值，运行时决定调用哪个方法
//当通过父类的指针或引用来调用这个函数时，实际调用的是子类中重写的方法，而不是父类中的方法