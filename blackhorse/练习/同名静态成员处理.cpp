#include <iostream>
using namespace std;
class Base
{
public:
    static int m_A;
    static void func()
    {
        cout << "Base - static fun()" << endl;
    }
    static void func(int a)
    {
        cout << "Base - static func(int a)" << endl;
    }
};

int Base::m_A = 100;

class Son : public Base
{
public:
    static int m_A;
    static void func()
    {
        cout << "Son - static void func()" << endl;
    }
};

int Son::m_A = 200;

void test01()
{
    Son s;
    // 1、通过对象访问
    cout << "Son 下 m_A = " << s.m_A << endl;
    cout << "Base 下m_A = " << s.Base::m_A << endl;

    // 2、通过类名访问
    cout << "Son 下 m_A = " << Son::m_A << endl;
    // 第一个::代表通过类名方式访问 第二个::代表访问父类作用域
    cout << "Base 下 m_A = " << Son::Base::m_A << endl;
}

void test02()
{
    // 1、通过对象访问
    Son s;
    s.func();
    s.Base::func();
    // 2、通过类名访问
    Son::func();
    Son::Base::func();

    Son::Base::func(100);
}

int main()
{
    test01();
    test02();

    system("pause");

    return 0;
}
