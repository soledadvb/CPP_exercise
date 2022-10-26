#include <iostream>
#include <string>
using namespace std;

class Calculator
{
    public:
    int getResult(string oper)
    {
        if(oper == "+")
        {
            return m_Num1 - m_Num2;
        }
        else if(oper == "-")
        {
            return m_Num1 - m_Num2;
        }
        else if(oper == "*")
        {
            return m_Num1 * m_Num2;
        }
        else if(oper == "/")
        {
            return m_Num1 / m_Num2;
        }
    }
    int m_Num1;
    int m_Num2;
};

void test01()
{
    //创建计算器对象
    Calculator c;
    c.m_Num1 = 10;
    c.m_Num2 = 10;

}

class AbstractCalculator
{
    public:
    virtual int getResult()
    {
        return 0;
    }
    int m_Num1;
    int m_NUm2;
}

int main()
{
    test01();
    system("pause");

}
