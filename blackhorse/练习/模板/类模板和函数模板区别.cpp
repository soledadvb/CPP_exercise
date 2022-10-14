#include <iostream>
using namespace std;
#include <string>

//��ģ���뺯��ģ������
template <typename NameType, typename AgeType = int> // AgeType Ĭ�ϲ���Ϊint
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

// 1.��ģ��û���Զ������Ƶ���ʹ�÷�ʽ
void test01()
{
    Person<string, int> p("��", 10);
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