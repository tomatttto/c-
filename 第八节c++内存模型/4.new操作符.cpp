#include<iostream>
using namespace std;
int* func()
{
	//��������һ������
	//new���ص��Ǹ��������͵�ָ��newʲô���ͣ���ʲô����
	int * p = new int(10);
	return p;
}
void test01()
{
	int* p = func();
	cout << *p << endl;
	delete p;
	//cout << *p << endl;//�ͷź��ٷ��ʻ���ʾ�쳣
}
//��������new��������
void test02()
{
	//����10���������ݵ����飨������
	 int *arr = new int[10];
	 for (int i = 0; i < 10; i++)//����
	 {
		 arr[i] = i + 100;
	 }
	 for(int i = 0;  i< 10; i++)
	 {
		 cout << arr[i] << "  " << endl;
	 }
	 delete[] arr;//�ͷ�����Ҫ�������Ųſ���
}
int main()
{
	test01();
	test02();
}