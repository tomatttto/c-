#include <iostream>
using namespace std;
int main()
{
	//���ֶ�������[����][����] 
	int arr1[2][2];
	int arr2[2][2] = 
	{
		{ 1,2 }, 
	    { 3,4 }
	};
	int arr3[2][2] = { 1,2,3,4 };
	int arr4[][2] = { 1,2,3,4 };
	for (int i = 0; i <2; i++)
	{ //�鿴����ľ�������
		for (int j = 0; j < 2; j++)
		{
			cout << arr2[i][j];
		}
	}
	cout << "��ά����ռ�õ��ڴ�ռ�Ϊ" << sizeof(arr2) << endl;//int��4λ��*4������
	cout << "��ά����ĵ�һ��ռ����" << sizeof(arr2[0])<< endl;
	cout << "��ά����ĵ�һ������ռ����" << sizeof(arr2[0][0])<< endl;
	cout << "��ά��������Ϊ" <<sizeof(arr2)/ sizeof(arr2[0]) << endl;
	cout << "��ά���������Ϊ" <<sizeof(arr2[0]) / sizeof(arr2[0][0]) << endl;
	cout << "��ά�����׵�ַΪ" << arr2 << endl;//�׵�ַ�͵�һ�еĵ�ַ����һ�����ֵĵ�ַΪͬһ����ַ
	cout << "��ά����ĵ�һ�����ֵ��׵�ַΪ" <</*������&�����Ԫ�صĵ�ַ*/ (int)&arr2[0][0] << endl;
	system("pause");
	return 0;
}
