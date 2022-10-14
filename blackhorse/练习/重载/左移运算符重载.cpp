#include <iostream>
using namespace std;
class Person{
	friend ostream& operator<<( ostream & out, Person & p);
public:
	Person(int a, int b)
	{
		m_A = a;
		m_B = b;
	}
	
	void operator<<(Person &p)
	{
		
	}
private:
	int m_A;
	int m_B;
};

ostream & operator<<(ostream &cout, Person &p)
{
	cout << "m_A = " << p.m_A << "m_B = " << p.m_B;
	return cout;
}

void test01()
{
	Person p(10,10);
	cout << p << "Hello World" << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}
