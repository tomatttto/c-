#include<iostream>
using namespace std;
class student
{
	//���е����Ժ���Ϊͳ��Ϊ��Ա
	//���ԣ���Ա���ԣ���Ա����
	//��Ϊ����Ա��������Ա����
public:
	string name;
	int id;

	//�����ֺ����г�Ա����
	void giveinformation()
	{
		cout << "��������" << endl;
		cin >> name;
		cout << "����ѧ��" << endl;
		cin >> id;
	}
	void showinformation()
	{
		cout << "����Ϊ" <<name<< endl;
		cout << "ѧ��Ϊ" <<id<< endl;
	}
};
int main()
{
	student s1;
	s1.giveinformation();
	s1.showinformation();
}