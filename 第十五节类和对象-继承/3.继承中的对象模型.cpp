#include<iostream>
using namespace std;
class Base
{
	
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
};
class son:public Base
{
public:
	int m_d;
};
void test01()
{
	son s1;
	cout << "son类继承完父类的大小为" << sizeof(son) << endl;//值为16，四个int型每个四个字节，注意虽然private不能用，但是继承时候依然会被继承过来
}
int main()
{
	test01();
	return 0;
}
/*如何查看某个类的内存布局；
* 打开 Developer Command Prompt for VS 2022 Preview(开发人员命令提示)
* 首先进入该cpp的所属盘符例如，这个文件是在D盘，输入“D:”按回车
* 接着将该文件目录复制到命令行里回车
* 接着输入cl /d1 reportSingleClassLayoutson(后面的son是对应想查看的类)
* 可以查看该类的一些信息
*/