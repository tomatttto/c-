#pragma once//��ֹͷ�ļ��ظ�����
#include<iostream>
#include"worker.h"
#include"��ְͨ��.h"
#include"����.h"
#include"�ϰ�.h"
#include<fstream>
#include<time.h>
#define FILENAME "empfile.txt"
using namespace std;
class workermanager
{
public:
	int getempnum;//ͳ������
	bool m_fileempty;//�ж��ļ��Ƿ�Ϊ�յı�־
	workermanager();//���캯������
	void showmenu();//չʾ�˵�
	void exitsystem();//�˳��˵�
	int m_empnum;//��¼ְ��������
	worker** m_emparray;//ְ������ָ�룬�����õ���˫��ָ��
	//Ҳ����˵��ͨ�����˫��ָ�룬�ҿ���ֱ�Ӵ�worker*����ָ�����½���Ա��(�����������ϰ壬Ա��������)
	// Ȼ����ͨ��*m_emparray���ָ������ŵ�m_emparray(�������ŵ���������Ա)���������
	void addemp();//���ְ��
	void save();//�����ļ�
	void showemp();//��ʾְ��
	void delay(int seconds);//��ʱ����
	int get_empnum();//��ȡ��Ա����
	void delemp();//ɾ��ְ��
	int isexit(int id); //�ж��Ƿ��и�ְ�����ٽ���ɾ��
	void modemp();//�޸�ְ������
	void findemp();//����ְ��
	void sortemp();//����ְ��(ѡ�������㷨)
	void cleanemp();//���
	~workermanager();//������������
};
