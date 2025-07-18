//读文件与写文件步骤相似，但读取文件方式相对较多
//步骤； 1.包含头文件。2.创建流对象。3.打开文件并判断文件是否打开成功。4.读数据。5.关闭文件。
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
void test01() 
{
	ifstream file1;//创建流对象
	file1.open("test.txt", ios::in);
	if (!file1.is_open())//file1.is_open()这一个bool类型的值，意思是是否成功打开文件
	{
		cout << "文件打开失败。请检查路径是否正确，或文件是否存在" << endl;
		return;
	}
	else
	{
		//读文件;4种方法
		
		// 第一种
		char buf[1024] = { 0 };
		while (file1 >> buf)//这个是流文件读到buf这个char类型，如果读完就返回一个假标志
		{
			cout << buf << endl;
		}
		
		//第二种
		char buf1[1024] = { 0 };
		while (file1.getline(buf1, sizeof(buf1)))//getline是获取一行数据括号里第一个变量是要放在哪里，第二个参数是最多要读多少个字节数
		{
			cout << buf1 << endl;
		}
		
		//第三种
		string buf2;
		while (getline(file1, buf2))//这个getline需要加string头文件。括号里意思是将你的文件流写到哪里，只不过这里用了string而不是char
		{
			cout << buf2 << endl;
		}

		//第四种
		char c;
		while ((c = file1.get())!=EOF)//这个方法是一个字节一个字节的读然后放到“c”里面,EOF是文件尾，如果没读到文件尾则继续循环
		{
			cout << c;
		}
	}
	file1.close();//关闭文件
}
int main()
{
	test01();
	return 0;
}