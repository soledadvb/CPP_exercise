#include <iostream>
#include <string>
using namespace std;
//��������(�º���)
/*
����������ʹ��ʱ,��������ͨ������������,�����в���,�����з���ֵ
�������󳬳���ͨ�����ĸ���,��������������Լ���״̬
�������������Ϊ��������
*/

class MyAdd
{
public:
    int operator()(int v1, int v2) // ����С���������
    {
        return v1 + v2;
    }
};

class MyPrint
{
public:
    MyPrint()
    {
        this->count = 0;
    }
    void operator()(string test)
    {
        cout << test << endl;
        this->count++;
    }

    int count; // �ڲ��Լ�״̬
};

void doPrint(MyPrint &mp, string test)
{
}

// 1.����������ʹ��ʱ,��������ͨ������������,�����в���,�����з���ֵ
void test01()
{
    MyAdd myAdd;
    cout << myAdd(10, 10) << endl;
}

// 2.�������󳬳���ͨ�����ĸ���,��������������Լ���״̬
void test02()
{
    MyPrint myPrint;
    myPrint("hello world");
    myPrint("hello world");
    myPrint("hello world");
    myPrint("hello world");

    cout << "myPrint���ô���Ϊ: " << myPrint.count << endl;
}

// 3.�������������Ϊ��������
void test03()
{
    MyPrint myPrint;
    doPrint(myPrint, "Hello c++");
}

int main()
{
    test01();
    test02();
    test03();
    return 0;
}