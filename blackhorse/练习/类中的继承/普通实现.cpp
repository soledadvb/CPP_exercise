#include <iostream>
using namespace std;
#include <string>

//��ӡ�����
class Java
{
public:
    void header()
    {
        cout << "��ҳ�������Ρ���½��ע��...(����ͷ��)" << endl;
    }
    void footer()
    {
        cout << "�������ġ�����������վ�ڵ�ͼ...(�����ײ�)" << endl;
    }
    void left()
    {
        cout << "Java��Python��C++....(���������б�)" << endl;
    }
    void content()
    {
        cout << "Javaѧ����Ƶ" << endl;
    }
};

class Python
{
public:
    void header()
    {
        cout << "��ҳ�������Ρ���½��ע��...(����ͷ��)" << endl;
    }
    void footer()
    {
        cout << "�������ġ�����������վ�ڵ�ͼ...(�����ײ�)" << endl;
    }
    void left()
    {
        cout << "Java��Python��C++....(���������б�)" << endl;
    }
    void content()
    {
        cout << "Pythonѧ����Ƶ" << endl;
    }
};

class CPP
{
public:
    void header()
    {
        cout << "��ҳ�������Ρ���½��ע��...(����ͷ��)" << endl;
    }
    void footer()
    {
        cout << "�������ġ�����������վ�ڵ�ͼ...(�����ײ�)" << endl;
    }
    void left()
    {
        cout << "Java��Python��C++....(���������б�)" << endl;
    }
    void content()
    {
        cout << "C++ѧ����Ƶ" << endl;
    }
};

void test01()
{
    cout << "Java������Ƶҳ�����£�" << endl;
    Java ja;
    ja.header();
    ja.footer();
    ja.left();
    ja.content();

    cout << "........................" << endl;
    cout << "Python������Ƶҳ�����£�" << endl;
    Python py;
    py.header();
    py.footer();
    py.left();
    py.content();

    cout << "........................" << endl;
    cout << "C++������Ƶҳ�����£�" << endl;
    CPP cpp;
    cpp.header();
    cpp.footer();
    cpp.left();
    cpp.content();
}

int main()
{
    test01();

    system("pause");

    return 0;
}