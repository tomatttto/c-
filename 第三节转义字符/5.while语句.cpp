#include <iostream>
#include<cstdlib>//��������ɺ���
#include<ctime>//ʱ�亯��
using namespace std;
int main(){
	srand(static_cast<unsigned int>(time(0)));//�������������Ϊ��ǰʱ��
	int b = 0;
	int jishu = 0;
	int a = rand()%101;
	cout << "�����֣���ֻ����λ��ᣩ" << endl;
	while (b<5)
	{
		cin >> jishu;
		if (jishu>a)
		{
			cout << "�²����" << endl;
		}
		else if (jishu < a)
		{
			cout << "�µ�С��" << endl;
		}
		else if (jishu == a)
		{
			cout << "�����¶���" << endl;
			break;
		}
		b++;
		if (b == 5)
		{
			cout <<"����"<< a<< "���Ѿ���������λ��ᣬ��Ϸ����" << endl;
			break;
		}
	}
	system("pause");
return 0;
}