#include <iostream>
using namespace std;

class MyInteger
{
    friend ostream &operator<<(ostream &cout, MyInteger myint);

public:
    MyInteger() // 构造函数
    {
        m_Num = 100;
    }

    MyInteger &operator--() // 前置--
    {
        m_Num--;
        return *this;
    }

    MyInteger operator--(int) // 后置--
    {
        MyInteger temp = *this;
        m_Num--;
        return temp;
    }

private:
    int m_Num;
};

void test01() // 前置--
{
    MyInteger myint;
    cout << --myint << endl;
    cout << myint << endl;
}

void test02() // 后置--
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
