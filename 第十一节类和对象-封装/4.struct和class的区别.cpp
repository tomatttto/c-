//classĬ��Ȩ��Ϊ˽�У�struct��Ĭ��Ϊ������
#include<iostream>
using namespace std;
class C1
{
	int a;
};
struct C2
{
	int a;
};
int main()
{
	C1 c1_1;
	C2 c2_1;
	c1_1.a = 100;//Ĭ��˽��Ȩ�޲��ɷ���
	c2_1.a = 100;//Ĭ�Ϲ�����Ȩ�޿��Է���
	return 0;
}