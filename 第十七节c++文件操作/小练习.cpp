#include<iostream>
#include<fstream>
using namespace std;

void input()
{
    int a;
    fstream file1;
    file1.open("存储.txt", ios::out);
    if (!file1.is_open()) {
        cout << "文件打开失败，请检查文件是否存在" << endl;
        return;
    }

    cout << "输入一个数字我将为你存储" << endl;
    cin >> a;
    file1 << a;
    file1.close();
}

void output()
{
    char a[1024] = { 0 };
    fstream file2;
    file2.open("存储.txt", ios::in);
    if (!file2.is_open())
    {
        cout << "文件打开失败，请检查文件是否存在" << endl;
        return;
    }
    else
    {
        while (file2.getline(a, sizeof(a)))
        {
            cout <<"你输入的为；" << a << endl;
       }
    }
    file2.close();
}

int main()
{
    int panduan;
    input();
    cout << "是否需要展示你所输入的数字1确定，其他为否" << endl;
    cin >> panduan;
    if (panduan == 1)
    {
        output();
    }
    // 移除 return; 语句，让程序继续执行
    return 0;
}