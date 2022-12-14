#include <iostream>
using namespace std;

class Base
{
public:
    Base()
    {
        m_A = 100;
    }
    int m_A;

    void func()
    {
        cout << "Base - func()调用 " << endl;
    }

    void func(int a)
    {
        cout << "Base - func(int a )调用 " << endl;
    }
};

class Son : public Base
{
public:
    Son()
    {
        m_A = 200;
    }

    void func()
    {
        cout << "Son - func()调用" << endl;
    }
    int m_A;
};

void test01()
{
    Son s;
    cout << "Son 下 m_A:" << s.m_A << endl;
    cout << "Base 下 m_A:" << s.Base::m_A << endl;
}

void test02()
{
    Son s;
    s.func();       // 直接调用时 调用的是子类中的同名函数
    s.Base::func(); // 加作用域时 调用的是父类的同名函数

    s.Base::func(100); // 子类和父类出现同名的成员函数,子类的同名成员会隐藏掉父类中所有(所有重载的函数)同名成员函数
                       // 如果想访问到父类中被隐藏的同名成员函数, 需要加上作用域。
}

int main()
{
    test01();
    test02();

    system("pause");

    return 0;
}
