#include<iostream>
#include<fstream>
using namespace std;
//二进制可以写入自定义类型，例如clsss类
class person
{
public:
	char m_name[64];
	int m_age;
};
void test01()
{
	ofstream file1;
	file1.open("二进制文件.txt", ios::out | ios::binary);//binary是指用二进制方式
	person p1 = { "张三",18 };
	file1.write((const char*)&p1, sizeof(person));
	//(const char*)&p1: 这里首先使用了地址-of操作符 & 来获取对象p1的地址。
	// 然后通过类型转换(const char*)将person类型的地址转换为const char*类型。
	// 这是因为write函数需要一个const char*类型的指针作为参数，而我们这里的对象地址是person*类型。
	// 通过强制类型转换，我们可以将person*类型的地址转换为write函数所需的const char*类型。
	file1.close();
}
int main()
{
	test01();
	return 0;
}