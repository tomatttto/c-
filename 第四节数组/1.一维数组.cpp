#include <iostream>
using namespace std;
int main() {
	//���ֶ��巽ʽ
	int a[10];//û������κε����ݻ���ʾ�ڴ��ַ
	int b[4] = { 1,2,3,4};
	int c[] = { 1,2,3,4,5,6,7,8,9 };
	cout << "c�����������Ϊ";
	for (int i = 0; i < sizeof(c)/sizeof(c[0]); i++)
	{
		cout << c[i]<<" ";
	}
	cout <<endl<< "c�����鳤��Ϊ" << sizeof(c) / sizeof(c[0])<<endl;
	cout << "c�����ռ�ÿռ�Ϊ" << sizeof(c) << endl;
	cout << "c������ڴ��ַΪ" << c << endl;
	cout << "�����һ��Ԫ�صĵ�ַΪ" << int( & c[0]) << endl;//&Ϊת���ɵ�ַȥ��&����Ԫ�صľ�������(16����)Ҳ���Լ�һ��int��&c[0]����ǿ��ת����10����
	cout << "����ڶ���Ԫ�صĵ�ַΪ" << int(&c[1]) << endl;
	system("pause");
	return 0;
}