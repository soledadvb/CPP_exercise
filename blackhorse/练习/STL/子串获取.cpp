#include <iostream>
using namespace std;
#include <string>

void test01()
{
    string str = "abcdef";

    string subStr = str.substr(2, 3);
    cout << "subStr =" << subStr << endl;
}

void test02()
{
    string email = "zhangsan@gmail.com";

    //���ʼ���ַ�� ��ȡ �û�����

    int pos = email.find("@");
    cout << pos << endl;

    string usrName = email.substr(0, pos);
    cout << usrName << endl;
}

int main()
{
    test01();
    test02();

    system("pause");
    return 0;
}