#include <iostream>
using namespace std;

class MyInteger
{
    friend ostream &operator<<(ostream &cout, MyInteger myint);

public:
    MyInteger() // ���캯��
    {
        m_Num = 100;
    }

    MyInteger &operator--() // ǰ��--
    {
        m_Num--;
        return *this;
    }

    MyInteger operator--(int) // ����--
    {
        MyInteger temp = *this;
        m_Num--;
        return temp;
    }

private:
    int m_Num;
};

void test01() // ǰ��--
{
    MyInteger myint;
    cout << --myint << endl;
    cout << myint << endl;
}

void test02() // ����--
{
    MyInteger myint;
    cout << myint-- << endl;
    cout << myint << endl;
}

ostream &operator<<(ostream &cout, MyInteger myint)
{
    cout << myint.m_Num << endl;
    return cout;
}
