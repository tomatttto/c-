#include<iostream>
#include<fstream>
using namespace std;

void input()
{
    int a;
    fstream file1;
    file1.open("�洢.txt", ios::out);
    if (!file1.is_open()) {
        cout << "�ļ���ʧ�ܣ������ļ��Ƿ����" << endl;
        return;
    }

    cout << "����һ�������ҽ�Ϊ��洢" << endl;
    cin >> a;
    file1 << a;
    file1.close();
}

void output()
{
    char a[1024] = { 0 };
    fstream file2;
    file2.open("�洢.txt", ios::in);
    if (!file2.is_open())
    {
        cout << "�ļ���ʧ�ܣ������ļ��Ƿ����" << endl;
        return;
    }
    else
    {
        while (file2.getline(a, sizeof(a)))
        {
            cout <<"�������Ϊ��" << a << endl;
       }
    }
    file2.close();
}

int main()
{
    int panduan;
    input();
    cout << "�Ƿ���Ҫչʾ�������������1ȷ��������Ϊ��" << endl;
    cin >> panduan;
    if (panduan == 1)
    {
        output();
    }
    // �Ƴ� return; ��䣬�ó������ִ��
    return 0;
}