#include <iostream>
using namespace std;
#include <string>

template <typename T1, typename T2>
class Person
{
public:
    Person(T1 name, T2 age); // 构造函数声明

    void showPerson(); //函数声明

    T1 m_Name;
    T2 m_Age;
};

template <typename T1, typename T2>
Person<T1, T2>::Person(T1 name, T2 age)
{
    this->m_Age = age;
    this->m_Name = name;
}