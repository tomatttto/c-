#include"workermanager.h"
#include<iostream>
using namespace std;
workermanager::workermanager()
{
	ifstream file1;
	file1.open(FILENAME, ios::in);
	if (!file1.is_open())
	{
		cout << "职工文件不存在" << endl;
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
		cout << "职工文件为空" << endl;
		m_empnum = 0;
		m_emparray = NULL;
		m_fileempty = true;
		file1.close();
		this->delay(3);
		system("cls");
		return;
	}
	int num = get_empnum();
	cout << "当前职工数量为" << num << endl;
	m_empnum = num;
	if (num > 0)
	{
		m_emparray = new worker * [num]; // 分配内存
		// 读取文件内容到 m_emparray
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
	cout << "************欢迎使用职工系统************" << endl;
	cout << "*************0.推出管理系统*************" << endl;
	cout << "*************1.增加职工信息*************" << endl;
	cout << "*************2.显示职工信息*************" << endl;
	cout << "*************3.删除职工信息*************" << endl;
	cout << "*************4.修改职工信息*************" << endl;
	cout << "*************5.查找职工信息*************" << endl;
	cout << "*************6.按照编号排序*************" << endl;
	cout << "******7.清空所有文档(警告！！！！)******" << endl;
	cout << "****************************************" << endl;
}
void workermanager::exitsystem()
{
	cout << "下次再来使用奥" << endl;
	system("pause");
	exit(0);
}
void workermanager::showemp()
{
	if (m_fileempty)
	{
		cout << "当前职工为空，请添加后再显示" << endl;
	}
	else
	{
		if (m_emparray != NULL) // 增加检查
		{
			for (int i = 0; i < this->m_empnum; i++)
			{
				m_emparray[i]->showinfo();
			}
		}
		else
		{
			cout << "职工数组为空，无法显示信息" << endl;
		}
	}
	system("pause");
	system("cls");
}
void workermanager::addemp()
{
	cout << "请输入要添加的职工数量" << endl;
	int addnum; // 要添加的数量
	cin >> addnum;
	if (addnum > 0)
	{
		int newsize = m_empnum + addnum; // 新空间大小 = 原记录数量m_empnum + 新增的数量addnum
		worker** newspace = new worker * [newsize]; // 这个语句相当于worker* worker = new employee(id, name, dselect);这样的语句
		if (m_emparray != NULL) // 如果原来有职工，需要先把原来的职工复制到新数组
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
			int dselect; // 岗位选择
			bool idIsUnique = false;
			while (!idIsUnique)
			{
				cout << "请输入第" << i + 1 << "个职工的编号" << endl;
				cin >> id;

				idIsUnique = true; // 假设编号是唯一的
				for (int j = 0; j < m_empnum; j++)
				{
					if (id == m_emparray[j]->m_id)
					{
						cout << "职工编号重复,该编号为" << endl;
						m_emparray[j]->showinfo();
						cout << "请重新输入" << endl;
						idIsUnique = false; // 发现编号重复，设置为false
						break;
					}
				}
			}
			cout << "请输入第" << i + 1 << "个职工的姓名" << endl;
			cin >> name;
			cout << "请选择该职工的岗位" << endl;
			cout << "1.普通员工" << endl;
			cout << "2.经理" << endl;
			cout << "3.老板" << endl;
			cin >> dselect;
			worker* worker = NULL; // worker类指针
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
				cout << "无效的岗位选择" << endl;
				continue; // 如果选择无效，跳过本次循环
			}
			// 将新职工添加到数组中
			newspace[m_empnum + i] = worker;
		}
		delete[] m_emparray; // 删除原数组
		this->m_emparray = newspace; // 更新数组指针
		m_fileempty = false; // 更新文件不为空的标志
		m_empnum = newsize; // 更新职工数量
		cout << "成功添加" << addnum << "个职工" << endl;
		this->save();
	}
	else
	{
		cout << "输入有误" << endl;
		return;
	}
	system("pause");
	system("cls");
}
void workermanager::save()
{
	ofstream file1;
	file1.open(FILENAME, ios::out);
	if (m_emparray != NULL) // 增加检查
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
void workermanager::delay(int seconds)//延时函数(自己想加的功能) 
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
		// 统计数量
		num++;
	}
	file1.close();
	return num;
}
void workermanager::delemp()//删除职工
{
	if (m_fileempty)
	{
		cout << "文件不存在，或记录为空" << endl;
	}
	else
	{
		cout << "请输入想要删除的职工编号" << endl;
		int id = 0;
		cin >> id;
		int index = isexit(id);
		if (index != -1)//说明存在，找到了位置
		{
			for (int i = index; i <m_empnum -1; i++)
			{
				m_emparray[i] = m_emparray[i + 1];//从找到的人员开始依次前移覆盖

			}
			m_empnum--;//记录人数减1；
			save();
			cout << "删除成功" << endl;
		}
		else
		{
			cout << "未找到该职工" << endl;
		}
	}
	system("pause");
	system("cls");
}
int workermanager::isexit(int id)//判断是否有该职工，再进行删除
{
	int index = -1;
	for (int i = 0; i < m_empnum; i++)
	{
		if (m_emparray[i]->m_id == id)
		{
			index = i;
			cout << "找到该职工" << endl;
			break;
		}
	}
	return index;
}
void workermanager::modemp()
{
	if (m_fileempty)
	{
		cout << "文件不存在，或记录为空" << endl;
	}
	else
	{
		cout << "输入修改职工编号" << endl;
		int id;
		cin >> id;
		int ret = isexit(id);
		if (ret != -1)
		{
			cout << "找到该人" << endl;
			m_emparray[ret]->showinfo();
			delete m_emparray[ret];
			int newid = 0;
			string newname = "";
			int dselect = 0;
			cout << "输入新的职工号" << endl;
			cin >> newid;
			cout << "输入新的姓名" << endl;
			cin >> newname;
			cout << "输入新的职位" << endl;
			cout << "1.普通员工" << endl;
			cout << "2.经理" << endl;
			cout << "3.老板" << endl;
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
			cout << "修改成功" << endl;
			save();
		}
		else
		{
			cout << "未找到该人" << endl;
		}
	}
	system("pause");
	system("cls");
}
void workermanager::findemp()
{
	if (m_fileempty)
	{
		cout << "文件为空或文件不存在" << endl;
	}
	else
	{
		cout << "请输入查找方法" << endl;
		cout << "1.按照职工编号查找" << endl;
		cout << "2。按照姓名查找" << endl;
		int select;
		cin >> select;
		if (select == 1)//编号查找
		{
			int id;
			cout << "请输入查找的职工编号" << endl;
			cin >> id;;
			int ret = isexit(id);
			if (ret != -1)
			{
				cout << "找到职工" << endl;
				m_emparray[ret]->showinfo();
			}
			else
			{
				cout << "未找到该人" << endl;
			}
		}
		else if (select == 2)//姓名查找
		{
			string name;
			cout << "请输入查找的职工姓名" << endl;
			cin >> name;
			bool flag = false;//默认未找到职工
			for (int i = 0; i < m_empnum; i++)
			{
				if (m_emparray[i]->m_name == name)
				{
					cout << "查找成功" << endl;
					m_emparray[i]->showinfo();
					flag = true;
				}
			}
			if (flag == false)
			{
				cout << "查无此人" << endl;
			}
		}
		else
		{
			cout << "输入如有误" << endl;
		}
	}
	system("pause");
	system("cls");
}
void workermanager::sortemp()
{
	if (m_fileempty)
	{
		cout << "文件不存在或记录为空" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		cout << "请选择排序方式" << endl;
		cout << "1.升序排列" << endl;
		cout << "2.降序排列" << endl;
		int select;
		cin >> select;
		
		for (int i = 0; i < m_empnum; i++)
		{
			int minormax = i;//最小值或最大值下标
			for (int j = i + 1; j < m_empnum; j++)
			{
				if (select == 1)//升序
				{
					if (m_emparray[minormax]->m_id > m_emparray[j]->m_id)
					{
						minormax = j;
				     }
				}
				else//降序
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
		cout << "排序成功" << endl;
		save();
		showemp();
	}
}
void workermanager::cleanemp()
{
	cout << "真的要清空吗（很严肃的问你）？" << endl;
	cout << "1.确认" << endl;
	cout << "2.不要" << endl;
	int select;
	cin >> select;
	if (select == 1)
	{
		ofstream file1(FILENAME, ios::trunc);//删除文件后重新创建
		file1.close();
		if (m_emparray != NULL)
		{
			for (int i = 0; i < m_empnum; i++)
			{
				delete m_emparray[i];
				m_emparray[i] = NULL;
			}
			//删除堆区数组指针
			delete[] m_emparray;
			m_empnum = 0;
			m_emparray = NULL;
			m_fileempty = true;
			cout << "清空成功" << endl;
		}
		system("pause");
		system("cls");
	}
}
workermanager::~workermanager() // 类外实现析构函数
{
	if (this->m_emparray != NULL)
	{
		delete []m_emparray;
		m_emparray = NULL;
	}
}
