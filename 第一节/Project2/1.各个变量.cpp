#include <iostream>
using namespace std;

int main()
{
    short num1 = 10;
    cout << "Short最大值为: " << sizeof(short) << endl;
    int num2 = 20;
    cout << "Int最大值为: " << sizeof(int) << endl;
    long long num3 = 30;
    cout << "Long long最大值为: " << sizeof(long long) << endl;
    long  num4 = 40.0;
    cout << "Long最大值为: " << sizeof(long) << endl;
    float a = 3.1415926f;//加上f后为float类型//请注意，float类型只能表示小数点后6位有效数字
    cout << "Float值为: " << a << endl;
    double b = 3.1415926;
    cout<<"Double值为: "<<b<<endl;
    /*默认情况输出6位小数*/
    float f1 = 3e2;
    cout<<f1<<endl;
    system("pause");
    return 0;
}