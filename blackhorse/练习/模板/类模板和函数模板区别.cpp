#include <iostream>
using namespace std;
#include <string>

//类模板与函数模板区别
template <typename NameType, typename AgeType = int> // AgeType 默认参数为int
class Person
{
public:
    Person(NameType name, AgeType age)
    {
        this->m_Age = age;
        this->m_Name = name;
    }
    void showPerson()
    {
        cout << "name: " << this->m_Name << "age: " << this->m_Age << endl;
    }
    NameType m_Name;
    AgeType m_Age;
};

// 1.类模板没有自动类型推导的使用方式
void test01()
{
    Person<string, int> p("额", 10);
    p.showPerson();
}

void test02()
{
    Person<string> p("", 10);
    p.showPerson();
}

int main()
{
    test01();
    test02();

    system("pause");
    return 0;
}