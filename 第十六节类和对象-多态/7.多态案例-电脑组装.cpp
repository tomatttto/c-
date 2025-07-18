//������Ҫ��ɲ���ΪCPU�Կ��ڴ���,��ÿ�������װ��������࣬
// �����ṩ��ͬ�ĳ���������ͬ���������Intel���̺�Lenovo����
// ���Ե������ṩ�õ��Թ����ĺ��������ҵ���ÿ����������Ľӿڡ� 
// ����ʱ����װ��̨��ͬ�ĵ��Խ��й����� 
#include<iostream>
using namespace std;
class cpu//cpu������
{
public:
	virtual void jisuan() = 0;//����Ĵ��麯��
};
class videocard//�Կ�������
{
public:
	virtual void huizhi() = 0;//���ƵĴ��麯��
};
class memory//�ڴ������
{
public:
	virtual void cunchu() = 0;//�洢�Ĵ��麯��
};
class computer
{
public:
	computer(cpu* cpu,videocard* videocard,memory* memory)
	{
		m_cpu = cpu;//ָ�븳ֵ
		m_memory = memory;
		m_videocard = videocard;
 }
	void dowork()//���ýӿ�
	{
		m_cpu->jisuan();
		m_videocard->huizhi();
		m_memory->cunchu();
 }
	~computer()
	{
		if (m_cpu!=NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}
		if (m_videocard != NULL)
		{
			delete m_videocard;
			m_videocard = NULL;
		}
		if (m_memory != NULL)
		{
			delete m_memory;
			m_memory = NULL;
		}
	}
private:
	cpu* m_cpu;//cpu���ָ��
	videocard* m_videocard;//�Կ����ָ��
	memory* m_memory;//�ڴ����ָ��
};
class intelcpu:public cpu
{
	void jisuan()
	{
		cout << "Ӣ�ض�cpu��ʼ�ɻ���" << endl;
	}
};
class intelgpu :public videocard
{
	void huizhi()
	{
		cout << "Ӣ�ض�gpu��ʼ�ɻ���" << endl;
	}
};
class intelmemory :public memory
{
	void cunchu()
	{
		cout << "Ӣ�ض��ڴ濪ʼ�ɻ���" << endl;
	}
};
class nvidiagpu :public videocard
{
	void huizhi()
	{
		cout << "�Կ���ʼ�ɻ���" << endl;
	}
};
class lenovomemory :public memory
{
	void cunchu()
	{
		cout << "�ڴ濪ʼ�ɻ����" << endl;
	}
};
void test01()
{
	cpu* intelCpu = new intelcpu;
	videocard* intelvideocard = new intelgpu;
	memory* Lenovomemory = new lenovomemory;

	computer* Computer1 = new computer(intelCpu,intelvideocard,Lenovomemory);
	Computer1->dowork();
	delete Computer1;

}
int main()
{
	test01();
	return 0;
}
//����ԭ������ͨ������CPU��������Կ������༰�ڴ��������Ϊ�˽��������õ���չ�������̵�һЩ�Կ���cpu�ȡ�
// ��������д��һ��computer�࣬��Ϊ�˽����������̵���Щ������������ʵ�ְ취��ͨ������ָ��ȥ������һ������
// computer* Computer1 = new computer(intelCpu,intelvideocard,Lenovomemory);Ȼ���������������Ӣ�ض�CPU��Ӣ�ض����Կ���������ڴ�
// Ȼ����computer������˽��������ָ�룬��ָ��ȥ�����Ҵ������ЩCPU�Կ����ڴ档m_cpu = cpu; m_memory = memory; m_videocard = videocard;
//cpu* m_cpu;//cpu���ָ��
//videocard* m_videocard;//�Կ����ָ��
//memory* m_memory;//�ڴ����ָ��
//������Ҫ�����ָ��ȥִ��dowork���������ʵ�־���Computer1->dowork();
// ��������Ҫ�Ƚ�computerһ�Ķ���ɾ��������ɾ��computer����֮ǰ��
// ����Ҫ�Ƚ��ҵ�computer�����ָ����ɾ����ָ��գ�����������Ȼ��computer1 delete����