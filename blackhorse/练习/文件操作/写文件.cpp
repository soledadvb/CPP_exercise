#include <iostream>
using namespace std;
#include <fstream>

//�ı��ļ� д�ļ�
void test01()
{
    // 1. ����ͷ�ļ� fstream
    // 2. �������ļ�

    ofstream ofs; // ����������

    // 3. ָ���򿪷�ʽ
    ofs.open("text.txt", ios::out); //��û��ָ��ĳ��·��ʱ, �������ļ��ڸ���Ŀ�ļ���·����

    // 4. д����
    ofs << "����: ����" << endl;
    ofs << "�Ա�: ��" << endl;
    ofs << "����: 18" << endl;

    // 5. �ر��ļ�
    ofs.close();
}

int main()
{
    test01();
    system("pause");

    return 0;
}