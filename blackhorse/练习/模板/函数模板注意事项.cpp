#include <iostream>
using namespace std;

template <class T>
void mySwap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

void test01()
{
    int a = 10;
    int b = 20;
    char c = 'c';

    mySwap(a, b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}

template <class T>
void func()
{
    cout << "func ����" << endl;
}

void test02()
{
    // func();
    func<int>();
}

int main()
{
    test01();
    test02();
    system("pause");
    return 0;
}
