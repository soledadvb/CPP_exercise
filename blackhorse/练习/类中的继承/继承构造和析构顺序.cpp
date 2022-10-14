#include <iostream>
using namespace std;
#include <string>

class Base1
{
public:
    int m_A;

protected:
    int m_B;

private:
    int m_C;
};
// 继承public 能访问public protected 不能访问private
class Son1 : public Base1
{
public:
    void func()
    {
        m_A = 10;
        m_B = 10;
    }
};

class Son2 : protected Base1
{
public:
    void func()
    {
        m_A = 10;
        m_B = 10;
    }
};

class Son3 : private Base1
{
public:
    void func()
    {
        m_A = 10;
        m_B = 10;
    }
};

void test1()
{
    Son1 s1;
    s1.m_A = 100;
}

void test2()
{
    Son2 s2;
    // s2.m_A = 100;
}

void test3()
{
    Son3 s3;
    // s3.m_A = 100;
}

int main()
{
    test1();
    test2();
    test3();

    system("pause");

    return 0;
}