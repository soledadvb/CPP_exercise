#include <iostream>
using namespace std;

template <typename T>
class Base
{
    T m;
};

class Son : public Base<int>
{
};

void test01()
{
    Son s1;
}

template <typename T1, typename T2>
class Son2 : public Base<T2>
{
public:
    Son2()
    {
        cout << "T1的类型为: " << typeid(T1).name() << endl;
        cout << "T2的类型为: " << typeid(T2).name() << endl;
    }
    T1 obj;
};

void test02()
{
    Son2<int, char> S2;
}

int main()
{
    test01();
    test02();

    return 0;
}