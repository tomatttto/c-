#include <iostream>
using namespace std;

int main()
{
    short num1 = 10;
    cout << "Short���ֵΪ: " << sizeof(short) << endl;
    int num2 = 20;
    cout << "Int���ֵΪ: " << sizeof(int) << endl;
    long long num3 = 30;
    cout << "Long long���ֵΪ: " << sizeof(long long) << endl;
    long  num4 = 40.0;
    cout << "Long���ֵΪ: " << sizeof(long) << endl;
    float a = 3.1415926f;//����f��Ϊfloat����//��ע�⣬float����ֻ�ܱ�ʾС�����6λ��Ч����
    cout << "FloatֵΪ: " << a << endl;
    double b = 3.1415926;
    cout<<"DoubleֵΪ: "<<b<<endl;
    /*Ĭ��������6λС��*/
    float f1 = 3e2;
    cout<<f1<<endl;
    system("pause");
    return 0;
}