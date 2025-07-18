#include"workermanager.h"
#include<iostream>
using namespace std;
workermanager::workermanager()
{
	ifstream file1;
	file1.open(FILENAME, ios::in);
	if (!file1.is_open())
	{
		cout << "ְ���ļ�������" << endl;
		m_empnum = 0;
		m_emparray = NULL;
		m_fileempty = true;
		file1.close();
		this->delay(3);
		system("cls");
		return;
	}
	char ch;
	file1 >> ch;
	if (file1.eof())
	{
		cout << "ְ���ļ�Ϊ��" << endl;
		m_empnum = 0;
		m_emparray = NULL;
		m_fileempty = true;
		file1.close();
		this->delay(3);
		system("cls");
		return;
	}
	int num = get_empnum();
	cout << "��ǰְ������Ϊ" << num << endl;
	m_empnum = num;
	if (num > 0)
	{
		m_emparray = new worker * [num]; // �����ڴ�
		// ��ȡ�ļ����ݵ� m_emparray
		ifstream file2;
		file2.open(FILENAME, ios::in);
		int id;
		string name;
		int did;
		for (int i = 0; i < num; i++)
		{
			file2 >> id >> name >> did;
			switch (did)
			{
			case 1:
				m_emparray[i] = new employee(id, name, did);
				break;
			case 2:
				m_emparray[i] = new manager(id, name, did);
				break;
			case 3:
				m_emparray[i] = new boss(id, name, did);
				break;
			default:
				break;
			}
		}
		file2.close();
		m_fileempty = false;
	}
	else
	{
		m_emparray = NULL;
		m_fileempty = true;
	}
}
void workermanager::showmenu()
{
	cout << "****************************************" << endl;
	cout << "************��ӭʹ��ְ��ϵͳ************" << endl;
	cout << "*************0.�Ƴ�����ϵͳ*************" << endl;
	cout << "*************1.����ְ����Ϣ*************" << endl;
	cout << "*************2.��ʾְ����Ϣ*************" << endl;
	cout << "*************3.ɾ��ְ����Ϣ*************" << endl;
	cout << "*************4.�޸�ְ����Ϣ*************" << endl;
	cout << "*************5.����ְ����Ϣ*************" << endl;
	cout << "*************6.���ձ������*************" << endl;
	cout << "******7.��������ĵ�(���棡������)******" << endl;
	cout << "****************************************" << endl;
}
void workermanager::exitsystem()
{
	cout << "�´�����ʹ�ð�" << endl;
	system("pause");
	exit(0);
}
void workermanager::showemp()
{
	if (m_fileempty)
	{
		cout << "��ǰְ��Ϊ�գ�����Ӻ�����ʾ" << endl;
	}
	else
	{
		if (m_emparray != NULL) // ���Ӽ��
		{
			for (int i = 0; i < this->m_empnum; i++)
			{
				m_emparray[i]->showinfo();
			}
		}
		else
		{
			cout << "ְ������Ϊ�գ��޷���ʾ��Ϣ" << endl;
		}
	}
	system("pause");
	system("cls");
}
void workermanager::addemp()
{
	cout << "������Ҫ��ӵ�ְ������" << endl;
	int addnum; // Ҫ��ӵ�����
	cin >> addnum;
	if (addnum > 0)
	{
		int newsize = m_empnum + addnum; // �¿ռ��С = ԭ��¼����m_empnum + ����������addnum
		worker** newspace = new worker * [newsize]; // �������൱��worker* worker = new employee(id, name, dselect);���������
		if (m_emparray != NULL) // ���ԭ����ְ������Ҫ�Ȱ�ԭ����ְ�����Ƶ�������
		{
			for (int i = 0; i < m_empnum; i++)
			{
				newspace[i] = m_emparray[i];
			}
		}
		for (int i = 0; i < addnum; i++)
		{
			int id;
			string name;
			int dselect; // ��λѡ��
			bool idIsUnique = false;
			while (!idIsUnique)
			{
				cout << "�������" << i + 1 << "��ְ���ı��" << endl;
				cin >> id;

				idIsUnique = true; // ��������Ψһ��
				for (int j = 0; j < m_empnum; j++)
				{
					if (id == m_emparray[j]->m_id)
					{
						cout << "ְ������ظ�,�ñ��Ϊ" << endl;
						m_emparray[j]->showinfo();
						cout << "����������" << endl;
						idIsUnique = false; // ���ֱ���ظ�������Ϊfalse
						break;
					}
				}
			}
			cout << "�������" << i + 1 << "��ְ��������" << endl;
			cin >> name;
			cout << "��ѡ���ְ���ĸ�λ" << endl;
			cout << "1.��ͨԱ��" << endl;
			cout << "2.����" << endl;
			cout << "3.�ϰ�" << endl;
			cin >> dselect;
			worker* worker = NULL; // worker��ָ��
			switch (dselect)
			{
			case 1:
				worker = new employee(id, name, dselect);
				break;
			case 2:
				worker = new manager(id, name, dselect);
				break;
			case 3:
				worker = new boss(id, name, dselect);
				break;
			default:
				cout << "��Ч�ĸ�λѡ��" << endl;
				continue; // ���ѡ����Ч����������ѭ��
			}
			// ����ְ����ӵ�������
			newspace[m_empnum + i] = worker;
		}
		delete[] m_emparray; // ɾ��ԭ����
		this->m_emparray = newspace; // ��������ָ��
		m_fileempty = false; // �����ļ���Ϊ�յı�־
		m_empnum = newsize; // ����ְ������
		cout << "�ɹ����" << addnum << "��ְ��" << endl;
		this->save();
	}
	else
	{
		cout << "��������" << endl;
		return;
	}
	system("pause");
	system("cls");
}
void workermanager::save()
{
	ofstream file1;
	file1.open(FILENAME, ios::out);
	if (m_emparray != NULL) // ���Ӽ��
	{
		for (int i = 0; i < this->m_empnum; i++)
		{
			file1 << m_emparray[i]->m_id << " "
				<< m_emparray[i]->m_name << " "
				<< m_emparray[i]->m_did << " " << endl;
		}
	}
	file1.close();
}
void workermanager::delay(int seconds)//��ʱ����(�Լ���ӵĹ���) 
{
	clock_t start = clock();
	clock_t lay = (clock_t)seconds * CLOCKS_PER_SEC;
	while ((clock() - start) < lay);
}
int workermanager::get_empnum()
{
	ifstream file1;
	file1.open(FILENAME, ios::in);
	int id;
	string name;
	int did;
	int num = 0;
	while (file1 >> id && file1 >> name && file1 >> did)
	{
		// ͳ������
		num++;
	}
	file1.close();
	return num;
}
void workermanager::delemp()//ɾ��ְ��
{
	if (m_fileempty)
	{
		cout << "�ļ������ڣ����¼Ϊ��" << endl;
	}
	else
	{
		cout << "��������Ҫɾ����ְ�����" << endl;
		int id = 0;
		cin >> id;
		int index = isexit(id);
		if (index != -1)//˵�����ڣ��ҵ���λ��
		{
			for (int i = index; i <m_empnum -1; i++)
			{
				m_emparray[i] = m_emparray[i + 1];//���ҵ�����Ա��ʼ����ǰ�Ƹ���

			}
			m_empnum--;//��¼������1��
			save();
			cout << "ɾ���ɹ�" << endl;
		}
		else
		{
			cout << "δ�ҵ���ְ��" << endl;
		}
	}
	system("pause");
	system("cls");
}
int workermanager::isexit(int id)//�ж��Ƿ��и�ְ�����ٽ���ɾ��
{
	int index = -1;
	for (int i = 0; i < m_empnum; i++)
	{
		if (m_emparray[i]->m_id == id)
		{
			index = i;
			cout << "�ҵ���ְ��" << endl;
			break;
		}
	}
	return index;
}
void workermanager::modemp()
{
	if (m_fileempty)
	{
		cout << "�ļ������ڣ����¼Ϊ��" << endl;
	}
	else
	{
		cout << "�����޸�ְ�����" << endl;
		int id;
		cin >> id;
		int ret = isexit(id);
		if (ret != -1)
		{
			cout << "�ҵ�����" << endl;
			m_emparray[ret]->showinfo();
			delete m_emparray[ret];
			int newid = 0;
			string newname = "";
			int dselect = 0;
			cout << "�����µ�ְ����" << endl;
			cin >> newid;
			cout << "�����µ�����" << endl;
			cin >> newname;
			cout << "�����µ�ְλ" << endl;
			cout << "1.��ͨԱ��" << endl;
			cout << "2.����" << endl;
			cout << "3.�ϰ�" << endl;
			cin >> dselect;
			worker* worker = NULL;
			switch (dselect)
			{
			case 1:
				worker = new employee(newid, newname, dselect);
				break;
			case 2:
				worker = new manager(newid, newname, dselect);
				break;
			case 3:
				worker = new boss(newid, newname, dselect);
				break;
			default:
				break;
			}
			m_emparray[ret] = worker;
			cout << "�޸ĳɹ�" << endl;
			save();
		}
		else
		{
			cout << "δ�ҵ�����" << endl;
		}
	}
	system("pause");
	system("cls");
}
void workermanager::findemp()
{
	if (m_fileempty)
	{
		cout << "�ļ�Ϊ�ջ��ļ�������" << endl;
	}
	else
	{
		cout << "��������ҷ���" << endl;
		cout << "1.����ְ����Ų���" << endl;
		cout << "2��������������" << endl;
		int select;
		cin >> select;
		if (select == 1)//��Ų���
		{
			int id;
			cout << "��������ҵ�ְ�����" << endl;
			cin >> id;;
			int ret = isexit(id);
			if (ret != -1)
			{
				cout << "�ҵ�ְ��" << endl;
				m_emparray[ret]->showinfo();
			}
			else
			{
				cout << "δ�ҵ�����" << endl;
			}
		}
		else if (select == 2)//��������
		{
			string name;
			cout << "��������ҵ�ְ������" << endl;
			cin >> name;
			bool flag = false;//Ĭ��δ�ҵ�ְ��
			for (int i = 0; i < m_empnum; i++)
			{
				if (m_emparray[i]->m_name == name)
				{
					cout << "���ҳɹ�" << endl;
					m_emparray[i]->showinfo();
					flag = true;
				}
			}
			if (flag == false)
			{
				cout << "���޴���" << endl;
			}
		}
		else
		{
			cout << "����������" << endl;
		}
	}
	system("pause");
	system("cls");
}
void workermanager::sortemp()
{
	if (m_fileempty)
	{
		cout << "�ļ������ڻ��¼Ϊ��" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		cout << "��ѡ������ʽ" << endl;
		cout << "1.��������" << endl;
		cout << "2.��������" << endl;
		int select;
		cin >> select;
		
		for (int i = 0; i < m_empnum; i++)
		{
			int minormax = i;//��Сֵ�����ֵ�±�
			for (int j = i + 1; j < m_empnum; j++)
			{
				if (select == 1)//����
				{
					if (m_emparray[minormax]->m_id > m_emparray[j]->m_id)
					{
						minormax = j;
				     }
				}
				else//����
				{
					if (m_emparray[minormax]->m_id < m_emparray[j]->m_id)
					{
						minormax = j;
					}
				}
			}
			if (1 != minormax)
			{
				worker* temp = m_emparray[i];
				m_emparray[i] = m_emparray[minormax];
				m_emparray[minormax] = temp;
			}
		}
		cout << "����ɹ�" << endl;
		save();
		showemp();
	}
}
void workermanager::cleanemp()
{
	cout << "���Ҫ����𣨺���������㣩��" << endl;
	cout << "1.ȷ��" << endl;
	cout << "2.��Ҫ" << endl;
	int select;
	cin >> select;
	if (select == 1)
	{
		ofstream file1(FILENAME, ios::trunc);//ɾ���ļ������´���
		file1.close();
		if (m_emparray != NULL)
		{
			for (int i = 0; i < m_empnum; i++)
			{
				delete m_emparray[i];
				m_emparray[i] = NULL;
			}
			//ɾ����������ָ��
			delete[] m_emparray;
			m_empnum = 0;
			m_emparray = NULL;
			m_fileempty = true;
			cout << "��ճɹ�" << endl;
		}
		system("pause");
		system("cls");
	}
}
workermanager::~workermanager() // ����ʵ����������
{
	if (this->m_emparray != NULL)
	{
		delete []m_emparray;
		m_emparray = NULL;
	}
}
