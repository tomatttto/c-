//程序运行时产生的数据都是临时数据，程序结束后就自动释放了
//通过文件可以实现数据持久化
//c++里使用文件操作需要加一个头文件<fstream>
//文本文件分两种；1.文本文件；文件以文本的ASCII码形式存储在计算机中。 
//                2.二进制文件；文件以文本的二进制的形式存储在计算机中用户，一般不能直接读懂它们。
// 三大操作 ofstream 写操作
//          ifstream 读操作
//          fstream  读写操作
//写文件步骤如下1.包含头文件。2.创建流对象。3.打开文件。4.写数据。5.关闭文件。
//
#include<iostream>
#include<fstream>
using namespace std;
//写文件
void test01()
{
	ofstream file1;//创建流对象
	file1.open("test.txt", ios::out);
	//4.写内容
	file1 << "姓名 张博宇" << endl;
	file1 << "性别 男" << endl;
	file1 << "年龄 23" << endl;
	file1.close();//关闭文件

}
int main()
{
	test01();
	return 0;
}