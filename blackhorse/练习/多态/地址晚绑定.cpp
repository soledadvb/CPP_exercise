#include <iostream>
using namespace std;

//��̬

//������

class Animal
{
public:
    virtual void speak() //����virtual ����������д����
    {
        cout << "������˵��" << endl;
    }
};

//è��
class Cat : public Animal
{
public:
    //��д:��������ֵ���͡��������������б���ȫ��ͬ�Ž���д
    //ע����������:��������ͬ ������һ��
    void speak() // ����virtual ��д�ɲ�д
    {
        cout << "Сè��˵��" << endl;
    }
};

//����
class Dog : public Animal
{
public:
    virtual void speak()
    {
        cout << "С����˵��" << endl;
    }
};

//ִ��˵���ĺ���
//��ַ���: �ڱ���׶�ȷ��������ַ
//�����ִ����è˵��, ��ô��������Ͳ�����ǰ��, ��Ҫ�����н׶ν��а�, ��ַ���

//��̬��̬��������
// 1. �м̳й�ϵ
// 2. ������д������麯��

//��̬��̬ʹ��
//��������û�ָ��ָ���������

void doSpeak(Animal &animal) // Animal & animal = cat
{
    animal.speak();
}

void sondoSpeak(Animal &animal)
{
    animal.speak();
}

void test01()
{
    Cat cat;
    doSpeak(cat);

    Dog dog;
    doSpeak(dog);
}

int main()
{
    test01();

    system("pause");

    return 0;
}
