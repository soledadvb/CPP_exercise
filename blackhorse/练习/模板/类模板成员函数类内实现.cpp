#include <iostream>
using namespace std;
#include <string>

template <typename T1, typename T2>
class Person
{
public:
    Person(T1 name, T2 age)
    {
        this->m_Name = name;
        this->m_Age = age;
    }
    void showPerson()
    {
        cout << "����: " << this->m_Name << "����: " << this->m_Age << endl;
    }
    T1 m_Name;
    T2 m_Age;
};

void test01()
{
    Person<string, int> s1("˧��", 18);
    s1.showPerson();
}

int main()
{
    test01();
    system("pause");
    return 0;
}
