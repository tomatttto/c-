#include<iostream>
using namespace std;

class pengyou; // ��ǰ���� pengyou ��

class Building
{
    // ���� visit() Ϊ Building �����Ԫ����������������˽�г�Ա
    friend void pengyou::visit(); // ֻ�� visit() ��������Ԫ����������������Ա����
    
public:
    Building(); // Building �Ĺ��캯��
    string m_keting;
private:
    string m_woshi;  // ˽�г�Ա
};

class pengyou
{
public:
    void visit();   // ���Է��� Building ���˽�г�Ա
    void visit2();  // ���ܷ��� Building ���˽�г�Ա
    Building* jianzhu;  // Building ���ָ��
};

Building::Building()
{
    m_keting = "����";
    m_woshi = "����";
}

pengyou::pengyou() // ���캯��
{
    jianzhu = new Building;  // ��̬���� Building ����
}

void pengyou::visit()
{
    cout << "�������ڷ��� " << jianzhu->m_keting << endl;
    cout << "�������ڷ��� " << jianzhu->m_woshi << endl;  // ���Է���˽�г�Ա m_woshi
}

void pengyou::visit2()
{
    cout << "�������ڷ��� " << jianzhu->m_keting << endl;
    // ���ܷ��� m_woshi����Ϊ����˽�г�Ա
}

int main()
{
    pengyou p1;
    p1.visit();   // ���� m_keting �� m_woshi
    p1.visit2();  // ֻ�ܷ��� m_keting
    return 0;
}
