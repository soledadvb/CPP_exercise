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
    //ǰ��++�����  ��������Ϊ��һֱ��һ�����ݽ��е�������
    MyInteger &operator++()
    {
        n_Num++;
        return *this;
    }
    //����++�����
    MyInteger operator++(int) // int����ռλ������������������ǰ�úͺ��õ��� ,���ұ�����int
    {
        // �� ��¼���ǽ��
        MyInteger temp = *this;
        // �� ����
        n_Num++;
        // ��󽫼�¼���������
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
