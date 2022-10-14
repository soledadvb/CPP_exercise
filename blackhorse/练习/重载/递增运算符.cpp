#include <iostream>
using namespace std;

class MyInteger
{
    friend ostream &operator<<(ostream &cout, MyInteger myint);

public:
    MyInteger()
    {
        n_Num = 0;
    }
    //前置++运算符  返回引用为了一直对一个数据进行递增操作
    MyInteger &operator++()
    {
        n_Num++;
        return *this;
    }
    //后置++运算符
    MyInteger operator++(int) // int代表占位参数，可以用于区分前置和后置递增 ,而且必须是int
    {
        // 先 记录但是结果
        MyInteger temp = *this;
        // 后 递增
        n_Num++;
        // 最后将记录结果做返回
        return temp;
    }

private:
    int n_Num;
};

ostream &operator<<(ostream &cout, MyInteger myint)
{
    cout << myint.n_Num;

    return cout;
}

void test01()
{
    MyInteger myint;
    cout << ++(++myint) << endl;
    cout << myint << endl;
}

void test02()
{
    MyInteger myint;

    cout << myint++ << endl;
    cout << myint << endl;
}

int main()
{
    test01();
    test02();

    int a = 0;
    cout << ++(++a) << endl;
    cout << a << endl;

    system("pause");
    return 0;
}
