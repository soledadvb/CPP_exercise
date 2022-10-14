#include <iostream>
using namespace std;
#include <string>

void test01()
{
    string str = "hello";

    //≤Â»Î

    str.insert(0, "111"); // insert [_Ptr, <null>) at _Off
    // hello
    cout << "str = " << str << endl;

    //…æ≥˝
    str.erase(0, 3); // erase elements [_Off, _Off + _Count)
    cout << "str = " << str << endl;
}

int main()
{
    test01();
    system("pause");
    return 0;
}
