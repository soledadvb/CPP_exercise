#include <iostream>
using namespace std;
#include <string>

//打印输出类
class Java
{
public:
    void header()
    {
        cout << "首页、公开课、登陆、注册...(公共头部)" << endl;
    }
    void footer()
    {
        cout << "帮助中心、交流合作、站内地图...(公共底部)" << endl;
    }
    void left()
    {
        cout << "Java、Python、C++....(公共分类列表)" << endl;
    }
    void content()
    {
        cout << "Java学科视频" << endl;
    }
};

class Python
{
public:
    void header()
    {
        cout << "首页、公开课、登陆、注册...(公共头部)" << endl;
    }
    void footer()
    {
        cout << "帮助中心、交流合作、站内地图...(公共底部)" << endl;
    }
    void left()
    {
        cout << "Java、Python、C++....(公共分类列表)" << endl;
    }
    void content()
    {
        cout << "Python学科视频" << endl;
    }
};

class CPP
{
public:
    void header()
    {
        cout << "首页、公开课、登陆、注册...(公共头部)" << endl;
    }
    void footer()
    {
        cout << "帮助中心、交流合作、站内地图...(公共底部)" << endl;
    }
    void left()
    {
        cout << "Java、Python、C++....(公共分类列表)" << endl;
    }
    void content()
    {
        cout << "C++学科视频" << endl;
    }
};

void test01()
{
    cout << "Java下载视频页面如下：" << endl;
    Java ja;
    ja.header();
    ja.footer();
    ja.left();
    ja.content();

    cout << "........................" << endl;
    cout << "Python下载视频页面如下：" << endl;
    Python py;
    py.header();
    py.footer();
    py.left();
    py.content();

    cout << "........................" << endl;
    cout << "C++下载视频页面如下：" << endl;
    CPP cpp;
    cpp.header();
    cpp.footer();
    cpp.left();
    cpp.content();
}

int main()
{
    test01();

    system("pause");

    return 0;
}