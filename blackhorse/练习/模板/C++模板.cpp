#include <iostream>
using namespace std;

//函数模板

//两个整数交换函数

void swapInt(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

//两个浮点型交换函数
void swapDouble(double &a, double &b)
{
    double temp = a;
    a = b;
    b = temp;
}

//函数模板
template <typename T>
void myswap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

void test01()
{
    int a = 10;
    int b = 20;

    swapInt(a, b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    double c = 1.1;
    double d = 2.2;
    swapDouble(c, d);
    cout << "c = " << c << endl;
    cout << "d = " << d << endl;
}

void test02()
{
    int m = 10;
    int n = 20;
    //利用函数模板交换
    //两种方式使用函数模板
    // 1.自动类型推导
    myswap(m, n); //根据m,n的数据为int,自动设置T为int
    cout << "m = " << m << endl;
    cout << "n = " << n << endl;

    // 2、显示指定类型
    myswap<int>(m, n); //指定模板中数据类型T为int型
    cout << "m= " << m << endl;
    cout << "n= " << n << endl;
}

int main()
{
    test01();
    test02();

    system("pause");

    return 0;
}