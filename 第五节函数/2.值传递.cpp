#include <iostream>
using namespace std;
//ֵ����
//�������Ҫ�������Ϳ��Զ���Ϊvoid���ͣ�������˼�ǲ���Ҫ�����κ�����
void change(int num1,int num2) 
{
	cout << "�ں����ｻ��ǰΪ" << num1 << "��" << num2 << endl;
	int temp;
	temp = num1;
	num1 = num2;
	num2 = temp;
	cout << "�ں����ｻ����Ϊ" << num1 << "��" << num2 << endl;
	return;//void����Ҫ��������return���治��Ҫ�ӷ��صĶ���
 }

int main()
{
	int a = 10;
	int b = 20;
	change(a, b);
	cout << a << "��" << b;//ӦΪ��������βΣ����������������a��b��ֵ�����ᷢ���ı�
	system("pause");
	return 0;
}