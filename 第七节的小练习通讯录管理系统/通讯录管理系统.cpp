#include<iostream>
#include<string>
using namespace std;
#define peoplemax 100
struct people
{
	string name;
	int sex;
	int age;
	string phonenumber;
	string address;
};
struct tongxunlu
{/*struct people peoplearr��ָ���ṹ��people����һ��arr����ÿ��people�ṹ��ŵ�������*/
	struct people peoplearr[peoplemax];
	int len;//��¼���鳤��
};
void tianjia(tongxunlu *t1)
{
	int sex;
	if (t1->len == 100)
	{
		cout << "��������Ѵ����100����ɾ����ϵ�˺��ٽ������" << endl;
		return;
	}
	cout << "����������" << endl;
	cin >> t1->peoplearr[t1->len].name;
	cout << "�������Ա�(1��������2��Ů��)" << endl;
	while (true)
	{
		cin >> sex;
			if (sex == 1 || sex == 2)
			{
				t1->peoplearr[t1->len].sex = sex;
				break;
			}
			else
			{
				cout << "������Ա���������������" << endl;
			}
	}
	cout << "����������" << endl;//�������Ҳ������һ������ķ�������û���������պ������һ��
	cin >> t1->peoplearr[t1->len].age;
	cout << "������绰����" << endl;
	cin >> t1->peoplearr[t1->len].phonenumber;
	cout << "�������ַ" << endl;
	cin >> t1->peoplearr[t1->len].address;
	t1->len++;
	cout << "��ӳɹ�" << endl;
	system("pause");
	system("cls");
}
void zhanshi(tongxunlu* t1)
{
	if (t1->len == 0)
	{
		cout << "��ǰû����ϵ��" << endl;
		system("pause");
		system("cls");
	}
	for (int i = 0; i < t1->len; i++)
	{
		cout <<"����;" << t1->peoplearr[i].name<<"\t"<<"�Ա�;";
		if (t1->peoplearr[i].sex == 1)
		{
			cout << "��" << endl;
		}
		else if(t1->peoplearr[i].sex == 2)
		{
			cout << "Ů" << endl;
		}
		cout <<"���䣬" << t1->peoplearr[i].age;
		cout << endl << "�ֻ��ţ�" << t1->peoplearr[i].phonenumber;
		cout << endl << "��ͥסַ��" << t1->peoplearr[i].address<<endl;
	}
}
void shanchu(tongxunlu* t1)
{
	string name;
	if (t1->len == 0)
	{
		cout << "��ǰû����ϵ��" << endl;
		system("pause");
		system("cls");
		return;
	}
	cout << "��ѡ����Ҫɾ������ϵ��" << endl;
	for (int i = 0; i < t1->len; i++)
	{
		cout << t1->peoplearr[i].name << "\t";
	}
	cin >> name;
	for (int j = 0; j < t1->len; j++)
	{
		if (name == t1->peoplearr[j].name)
		{
			t1->peoplearr[j] = t1->peoplearr[j+1];
			t1->len--;
			break;
		} 
	}
	cout << "ɾ���ɹ�" << endl;
}
void chazhao(tongxunlu* t1)
{
	string temp;
	if (t1->len == 0)
	{
		cout << "��ǰû����ϵ��" << endl;
		system("pause");
		system("cls");
		return;
	}
	cout << "��������Ҫ���ҵ���Ա" << endl;
	for (int i = 0; i < t1->len; i++)
	{
		cout << t1->peoplearr[i].name << "\t";
	}
	cin >> temp;
	for (int i = 0; i < t1->len; i++)
	{
		if (temp == t1->peoplearr[i].name)
		{
			cout << "����" << t1->peoplearr[i].name << "\t" << "�Ա�";
			if (t1->peoplearr[i].sex == 1)
			{
				cout << "��" << endl;
			}
			else if (t1->peoplearr[i].sex == 2)
			{
				cout << "Ů" << endl;
			}
			cout << "���䣬" << t1->peoplearr[i].age;
			cout << endl << "�ֻ��ţ�" << t1->peoplearr[i].phonenumber;
			cout << endl << "��ͥסַ��" << t1->peoplearr[i].address << endl;
			system("pause");
			system("cls");
			return;
		}
			
	}
	cout << "δ�ҵ���ϵ��" << endl;
	system("pause");
	system("cls");
	return;
}
void xiugai(tongxunlu* t1)
{
	if (t1->len == 0)
	{
		cout << "��ǰû����ϵ��" << endl;
		system("pause");
		system("cls");
		return;
	}
	int a;
	string name;
	cout << "��������Ҫ�޸��˵�����" << endl;
	cin >> name;
	for (int i = 0; i < t1->len; i++)
	{
		if (t1->peoplearr[i].name == name)
		{
			cout << "��ȷ����Ҫ�޸ĵ���Ϊ" << t1->peoplearr[i].name << "�Ƿ������1������2ȡ����" << endl;
			cin >> a;
			if (a == 1)
			{
				cout << "����" << endl;
				cin >> name;
				t1->peoplearr[i].name = name;
				cout << "�Ա�(1����2��Ů)" << endl;
				cin >> a;
				t1->peoplearr[i].sex = a;
				cout << "����" << endl;
				cin >> a;
				t1->peoplearr[i].age = a;
				cout << "�绰" << endl;
				cin >> name;
				t1->peoplearr[i].phonenumber = name;
				cout << "��ַ" << endl;
				cin >> name;
				t1->peoplearr[i].address = name;//��������̫���ˣ��������߽�int���͸�Ϊ��a��string���͸�Ϊname����Ϊһֱ���������Բ��õ������ݻ����
				//�������ģ��ûд����������Բ���ʱ��С�ĵ㣬���ը�ˡ�	
			}
			else 
			{
				return;
			}
			cout << "�޸ĳɹ�" << endl;
			system("pause");
			system("cls");
			return ;	
		}	
	}
	cout << "û�ҵ�����" << endl;
	system("pause");
	system("cls");
}
void qinkong(tongxunlu* t1)
{
	string temp;
	cout << "ע�⣬�˲��������ͨѶ¼�Ƿ����������(ȷ���������ǣ������������)" << endl;
	cin >> temp;
	if (temp == "��")
	{
		t1->len = 0;
		cout << "ɾ���ɹ�" << endl;
	}
	else if(temp == "��")
	{
		return;
	}
	else
	{
		cout << "��������" << endl;
		return;
	}
}
void showmenu()
{
	cout << "****************************" << endl;
	cout << "****\t1,�����ϵ��\t****" << endl;
	cout << "****\t2,��ʾ��ϵ��\t****" << endl;
	cout << "****\t3,ɾ����ϵ��\t****" << endl;
	cout << "****\t4,������ϵ��\t****" << endl;
	cout << "****\t5,�޸���ϵ��\t****" << endl;
	cout << "****\t6,�����ϵ��\t****" << endl;
	cout << "****\t0,�˳�ϵͳ\t****" << endl;
	cout << "****************************" << endl;
}
int main()
{
	tongxunlu t1;//����һ����Ϊt1��ͨѶ¼
	t1.len = 0;//��ʼ��
	//t1.peoplearr[0] ={"�Ų���",1,19,"1365874896","���ɹź��ͺ���"};
	//t1.peoplearr[1] = { "����",1,20,"15345654323","���" };
	//t1.peoplearr[2] = { "������",1,19,"13354875968","���" };
	int select = 0;
	while(true)
	{ 
		showmenu();
		cin >> select;
		switch (select)
		{
		case 1:
			tianjia(&t1);
				break;
		case 2:
			zhanshi(&t1);
			break;
		case 3:
			shanchu(&t1);
			break;
		case 4:
			chazhao(&t1);
			break;
		case 5:
			xiugai(&t1);
			break;
		case 6:
			qinkong(&t1);
			break;
		case 0 :
			cout << "��лʹ�ã��ټ�";
			return 0;
		break;
		}
	}
	system("cls");
	system("pause");
	
}