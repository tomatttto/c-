#include <iostream>
using namespace std;

int main() {
	int a;
	cout << "������������㿼�ϴ�ѧû" << endl;
	cin>>a;
	if (a >= 600) {
		if (a >= 700 && a <= 800) {
			cout << "��ϲ�㿼���˱�����ѧ��" << endl;
		}
		else if (a >= 800 && a <= 900) {
			cout << "��ϲ�㿼�����廪��ѧ��" << endl;
		}
		else {
			cout << "��ϲ�㿼��985��ѧ��" << endl;
		}
		
	}
	else if(a >= 500) {
		cout<<"�㿼����211��ѧ������Ŭ����"<<endl;
		
	}
	else if (a >= 400)
	{
		cout << "�㿼������ͨ��ѧ������Ŭ����" << endl;
		
	}
	else {
		cout << "�㿼������ͨ���У�����Ŭ����" << endl;
		
	}
		system("pause"); // ��ʾ��ͣ��ʾ��

}