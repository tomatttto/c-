/*c++���������һ�����ṩ�������ֺ���
* Ĭ�Ϲ��캯����Ĭ������������Ĭ�Ͽ�������(��ǳ����)�Լ���ֵ�����
* ��ֵ����� operator=�������������Խ���ֵ�Ŀ���
*/
#include<iostream>
using namespace std;
class person
{
	public:
		person(int age)
		{
			this->age = new int (age);//�������ٵı�����ָ�����������Ҽ��˸�this������Ƶ��û��ô��

		}
		~person()//������������������Ϊp1���ͷ�һ�ζ����ڴ棬p2����ʱ��ͬ�����ͷţ������ͷ�ʱ����p1�Ѿ��ͷŹ������Իᱨ��(ǳ����)
		{
			if (this->age!=NULL)
			{
				delete this->age;
				this->age = NULL;
			}
		}
		//��Ҫ����һ�¸�ֵ����������ǳ��������������
		person& operator=(person &p)
		{
			//�������ṩ����ǳ���� this->age = p.age;
			//���ж��Ƿ����������ڶ������еĻ����ͷţ��ٽ������
			if (this->age != NULL)
			{
				delete this->age;
				this->age = NULL;
			}
			//�������һ���¶����ռ䣬����p.ageָ���ֵ���Ƶ�����¿ռ�
			this->age = new int(*p.age);
			return *this;//���ض�����
		}
	int* age;
};
void test01()
{
	person p1(18);
	person p2(20);
	person p3(30);
	p3 = p2 = p1;//p1�����p2�ٸ�p3
	cout << "p1����Ϊ" << *p1.age << endl;
	cout << "p2����Ϊ" << *p2.age << endl;
	cout << "p3����Ϊ" << *p3.age << endl;
}
int main()
{
	test01();
	return 0;
}