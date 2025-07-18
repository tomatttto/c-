#include<iostream>
using namespace std;
//私有化优点1，可以自己控制读写权限
//          2，对于写权限，我们可以检测数据的有效性
class person
{
public:
	//设置姓名
	void setname(string name)
	{
		 p_name = name ;
	}
	//获取姓名
	string getname()
	{
		return p_name;
	}
	//通过上面两个公共类函数获取到私有类变量，并通过公共类函数访问到私有类变量	
	int getage()
	{
		return p_age;
	}
	void setage(int age)
	{
		if (age>160||age<0)
		{
			cout << "不对呀，年龄太大或太小了";
		}
		else
		{
			p_age = age;
		}
	}
	void setidol(string idol)
	{
		p_idol =idol ;
	}
	//这俩个同理
private:
	string p_name;//姓名可读可写

	int p_age ;//年龄 只读

	string p_idol;//偶像，只写

};
int main()
{
	person p1;
	p1.setname("张三");
	cout<<p1.getname()<<endl;
	cout << p1.setage(170) << endl;
	cout << p1.getage() << endl;
	p1.setidol("蔡徐坤");
	return 0;
}