#include <iostream>
using namespace std;
#include <string>

// string���Һ��滻

void test01()
{
    string str1 = "abcdefgde";
    int pos = str1.find("de");
    if (pos == -1)
    {
        cout << "δ�ҵ��ַ��� pos = " << pos << endl;
    }
    else
    {
        cout << "�ҵ��ַ��� pos = " << pos << endl;
    }

    pos = str1.rfind("de");
    cout << "pos = " << pos << endl;
}

void test02()
{
    string str1 = "abcdefg";
    str1.replace(0, 3, "11"); // replace [_Off, _Off + _Nx) with [_Ptr, <null>)
    cout << " str1 = " << str1 << endl;
}

int main()
{
    test01();
    test02();

    system("pause");
    return 0;
}