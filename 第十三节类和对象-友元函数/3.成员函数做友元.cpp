#include<iostream>
using namespace std;

class pengyou; // 提前声明 pengyou 类

class Building
{
    // 声明 visit() 为 Building 类的友元函数，允许它访问私有成员
    friend void pengyou::visit(); // 只让 visit() 函数是友元函数，不是其他成员函数
    
public:
    Building(); // Building 的构造函数
    string m_keting;
private:
    string m_woshi;  // 私有成员
};

class pengyou
{
public:
    void visit();   // 可以访问 Building 类的私有成员
    void visit2();  // 不能访问 Building 类的私有成员
    Building* jianzhu;  // Building 类的指针
};

Building::Building()
{
    m_keting = "客厅";
    m_woshi = "卧室";
}

pengyou::pengyou() // 构造函数
{
    jianzhu = new Building;  // 动态创建 Building 对象
}

void pengyou::visit()
{
    cout << "朋友正在访问 " << jianzhu->m_keting << endl;
    cout << "朋友正在访问 " << jianzhu->m_woshi << endl;  // 可以访问私有成员 m_woshi
}

void pengyou::visit2()
{
    cout << "朋友正在访问 " << jianzhu->m_keting << endl;
    // 不能访问 m_woshi，因为它是私有成员
}

int main()
{
    pengyou p1;
    p1.visit();   // 访问 m_keting 和 m_woshi
    p1.visit2();  // 只能访问 m_keting
    return 0;
}
