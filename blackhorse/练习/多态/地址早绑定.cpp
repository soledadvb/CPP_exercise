#include <iostream>
using namespace std;

class Animal
{
public:
    void speak()
    {
        cout << "������˵��" << endl;
    }
};

class Cat : public Animal
{
public:
    void speak()
    {
        cout << "Сè��˵��" << endl;
    }
};

//ִ��˵���ĺ���
//��ַ���: �ڱ���׶�ȷ��������ַ
//�����ִ����è˵�� ��ô��������Ͳ�����ǰ�� ��Ҫ�����н׶ν��а� ��ַ���
void doSpeak(Animal &animal)
{
    animal.speak(); // Animal::speak()
}

void test01()
{
    Cat cat;
    doSpeak(cat);
}

int main()
{
    test01();
    system("pause");
    return 0;
}