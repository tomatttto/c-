//c++�п�ָ��Ҳ���Ե��ó�Ա������������Ҫע����û���õ�thisָ��
#include<iostream>
using namespace std;
class person
{
public:
	void showclassname()
	{
		cout << "����person��"<<endl;//���ﲻ�ᱨ������Ϊ������һ��thisָ��ȥָ��һ����Ա����
	}
	void showclassage()
	{
		cout << "������" << this->age << endl;//����ᱨ���ԭ������Ϊ*pָ�����һ��null��ָ�룬���ǵ�д��p->showclassname();��ζ��*p�ǵ���thisָ������Ե�һ���յ�thisָ��ָ��ageʱ
		//Ҳ�ͻ����һ�����⣬һ�������ڵ�ָ��ָ����age������������Լ�һ��if�ж����this�Ƿ�Ϊnull
	}
	int age;
};
void test01()
{
	person* p = NULL;
	p->showclassname();
	p->showclassage();
}
int main()
{
	test01();
	return 0;
}