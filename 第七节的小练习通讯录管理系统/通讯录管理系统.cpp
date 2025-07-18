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
{/*struct people peoplearr是指给结构体people定义一个arr来把每个people结构体放到数组里*/
	struct people peoplearr[peoplemax];
	int len;//记录数组长度
};
void tianjia(tongxunlu *t1)
{
	int sex;
	if (t1->len == 100)
	{
		cout << "添加人数已达最大（100）请删除联系人后再进行添加" << endl;
		return;
	}
	cout << "请输入姓名" << endl;
	cin >> t1->peoplearr[t1->len].name;
	cout << "请输入性别(1是男生，2是女生)" << endl;
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
				cout << "输入的性别有误，请重新输入" << endl;
			}
	}
	cout << "请输入年龄" << endl;//年龄这块也可以做一下上面的防错，但是没做出来，日后可以试一下
	cin >> t1->peoplearr[t1->len].age;
	cout << "请输入电话号码" << endl;
	cin >> t1->peoplearr[t1->len].phonenumber;
	cout << "请输入地址" << endl;
	cin >> t1->peoplearr[t1->len].address;
	t1->len++;
	cout << "添加成功" << endl;
	system("pause");
	system("cls");
}
void zhanshi(tongxunlu* t1)
{
	if (t1->len == 0)
	{
		cout << "当前没有联系人" << endl;
		system("pause");
		system("cls");
	}
	for (int i = 0; i < t1->len; i++)
	{
		cout <<"姓名;" << t1->peoplearr[i].name<<"\t"<<"性别;";
		if (t1->peoplearr[i].sex == 1)
		{
			cout << "男" << endl;
		}
		else if(t1->peoplearr[i].sex == 2)
		{
			cout << "女" << endl;
		}
		cout <<"年龄，" << t1->peoplearr[i].age;
		cout << endl << "手机号，" << t1->peoplearr[i].phonenumber;
		cout << endl << "家庭住址，" << t1->peoplearr[i].address<<endl;
	}
}
void shanchu(tongxunlu* t1)
{
	string name;
	if (t1->len == 0)
	{
		cout << "当前没有联系人" << endl;
		system("pause");
		system("cls");
		return;
	}
	cout << "请选择你要删除的联系人" << endl;
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
	cout << "删除成功" << endl;
}
void chazhao(tongxunlu* t1)
{
	string temp;
	if (t1->len == 0)
	{
		cout << "当前没有联系人" << endl;
		system("pause");
		system("cls");
		return;
	}
	cout << "请输入你要查找的人员" << endl;
	for (int i = 0; i < t1->len; i++)
	{
		cout << t1->peoplearr[i].name << "\t";
	}
	cin >> temp;
	for (int i = 0; i < t1->len; i++)
	{
		if (temp == t1->peoplearr[i].name)
		{
			cout << "姓名" << t1->peoplearr[i].name << "\t" << "性别";
			if (t1->peoplearr[i].sex == 1)
			{
				cout << "男" << endl;
			}
			else if (t1->peoplearr[i].sex == 2)
			{
				cout << "女" << endl;
			}
			cout << "年龄，" << t1->peoplearr[i].age;
			cout << endl << "手机号，" << t1->peoplearr[i].phonenumber;
			cout << endl << "家庭住址，" << t1->peoplearr[i].address << endl;
			system("pause");
			system("cls");
			return;
		}
			
	}
	cout << "未找到联系人" << endl;
	system("pause");
	system("cls");
	return;
}
void xiugai(tongxunlu* t1)
{
	if (t1->len == 0)
	{
		cout << "当前没有联系人" << endl;
		system("pause");
		system("cls");
		return;
	}
	int a;
	string name;
	cout << "请输入你要修改人的名字" << endl;
	cin >> name;
	for (int i = 0; i < t1->len; i++)
	{
		if (t1->peoplearr[i].name == name)
		{
			cout << "请确认你要修改的人为" << t1->peoplearr[i].name << "是否继续（1继续，2取消）" << endl;
			cin >> a;
			if (a == 1)
			{
				cout << "姓名" << endl;
				cin >> name;
				t1->peoplearr[i].name = name;
				cout << "性别(1是男2是女)" << endl;
				cin >> a;
				t1->peoplearr[i].sex = a;
				cout << "年龄" << endl;
				cin >> a;
				t1->peoplearr[i].age = a;
				cout << "电话" << endl;
				cin >> name;
				t1->peoplearr[i].phonenumber = name;
				cout << "地址" << endl;
				cin >> name;
				t1->peoplearr[i].address = name;//这里由于太懒了，所以作者将int类型改为了a，string类型改为name，因为一直会输入所以不用担心数据会错误。
				//而且这个模块没写防错设计所以测试时候小心点，别搞炸了。	
			}
			else 
			{
				return;
			}
			cout << "修改成功" << endl;
			system("pause");
			system("cls");
			return ;	
		}	
	}
	cout << "没找到此人" << endl;
	system("pause");
	system("cls");
}
void qinkong(tongxunlu* t1)
{
	string temp;
	cout << "注意，此操作会清空通讯录是否继续！！！(确认请输入是，返回请输入否)" << endl;
	cin >> temp;
	if (temp == "是")
	{
		t1->len = 0;
		cout << "删除成功" << endl;
	}
	else if(temp == "否")
	{
		return;
	}
	else
	{
		cout << "输入有误" << endl;
		return;
	}
}
void showmenu()
{
	cout << "****************************" << endl;
	cout << "****\t1,添加联系人\t****" << endl;
	cout << "****\t2,显示联系人\t****" << endl;
	cout << "****\t3,删除联系人\t****" << endl;
	cout << "****\t4,查找联系人\t****" << endl;
	cout << "****\t5,修改联系人\t****" << endl;
	cout << "****\t6,清空联系人\t****" << endl;
	cout << "****\t0,退出系统\t****" << endl;
	cout << "****************************" << endl;
}
int main()
{
	tongxunlu t1;//创建一个名为t1的通讯录
	t1.len = 0;//初始化
	//t1.peoplearr[0] ={"张博宇",1,19,"1365874896","内蒙古呼和浩特"};
	//t1.peoplearr[1] = { "徐良",1,20,"15345654323","天津" };
	//t1.peoplearr[2] = { "吴彦祖",1,19,"13354875968","香港" };
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
			cout << "感谢使用，再见";
			return 0;
		break;
		}
	}
	system("cls");
	system("pause");
	
}