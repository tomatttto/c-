/*�������������()Ҳ��������
* �������غ�ʹ�÷�ʽ�ǳ��뺯���ĵ��ã���˳�Ϊ�º���
* �º���û�й̶�д�����ǳ����
*/
#include<iostream>
using namespace std;
class myprint//��ӡ�����
{
public:
	//���غ������������
	void operator()(string test)
	{
		cout << "����test" << endl;
	}
};
class myadd//�ӷ���
{
public:
	int operator()(int a,int b)
	{
		return a + b;
	}
};
void test01()
{
	myprint print;
	print("helloworld");
}
void test02()
{
	myadd myadd1;
	int ret = myadd1(100, 200);
	cout << ret << endl;
	//����������ָ�����������ֻ��һ��Ҳ�Ͳ���Ҫ����һ��ʵ��myadd1ֱ����
	cout << myadd()(100, 200) << endl;
}
int main()
{
	test01();
	test02();
	return 0;
}