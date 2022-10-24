#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <map>
using namespace std;

#define CEHUA 0
#define MEISHU 1
#define YANFA 2

class Worker
{
public:
    string m_Name;
    int m_Salary;
};

void createWorker(vector<Worker> &v)
{
    string nameSeed = "ABCDEFGHIJ";
    for (int i = 0; i < 10; i++)
    {
        Worker worker;
        worker.m_Name = "Ա��";
        worker.m_Name += nameSeed[i];

        worker.m_Salary = rand() % 10000 + 10000; // 10000 ~ 19999
        //��Ա������������
        v.push_back(worker);
    }
}

void setGroup(vector<Worker> &v, multimap<int, Worker> &m)
{
    for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
    {
        int deptId = rand() % 3;

        //��Ա�����뵽������
        // key���ű��,value����Ա��
        m.insert(make_pair(deptId, *it));
    }
}

void showWorkerByGroup(multimap<int, Worker> &m)
{
    // 0 A B C 1 D E 2 F G
    cout << "�߻�����: " << endl;
    multimap<int, Worker>::iterator pos = m.find(CEHUA);
    int count = m.count(CEHUA);
    int index = 0;
    for (; pos != m.end() && index < count; pos++, index++)
    {
        cout << "����: " << pos->second.m_Name << "����: " << pos->second.m_Salary << endl; // first��key second��value
    }

    cout << "----------------------------------------" << endl;
    cout << "��������: " << endl;
    pos = m.find(MEISHU);
    count = m.count(MEISHU);
    index = 0;
    for (; pos != m.end() && index < count; pos++, index++)
    {
        cout << "����: " << pos->second.m_Name << "����: " << pos->second.m_Salary << endl;
    }

    cout << "----------------------------------------" << endl;
    cout << "�з�����: " << endl;
    pos = m.find(YANFA);
    count = m.count(YANFA);
    index = 0;
    for (; pos != m.end() && index < count; pos++, index++)
    {
        cout << "����: " << pos->second.m_Name << "����: " << pos->second.m_Salary << endl;
    }
}

int main()
{
    // 1.����Ա��
    vector<Worker> vWorker;
    createWorker(vWorker);

    // 2.Ա������
    multimap<int, Worker> mWorker;
    setGroup(vWorker, mWorker);

    // 3.������ʾԱ��
    showWorkerByGroup(mWorker);

    // //����
    // for (vector<Worker>::iterator it = vWorker.begin(); it != vWorker.end(); it++)
    // {
    //     cout << "����: " << it->m_Name << "����: " << it->m_Salary << endl;
    // }
    system("pause");

    return 0;
}