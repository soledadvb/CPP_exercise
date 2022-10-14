#include <iostream>
using namespace std;

template <typename T>   // 占位符T 表示替换的是T这个位置
void mySwap(T &a, T &b) // 从这行开始函数的定义,T的位置在调用函数的时候会被替换
{
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
void mySort(T arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        int max = i;
        for (int j = i + 1; j < len; j++)
        {
            //认定的最大值 比遍历出来的数值 要小, 说明j下标的元素才是真正的最大值
            if (arr[max] < arr[j])
            {
                max = j; // 更新最大值下标
            }
        }

        if (max != i)
        {
            mySwap(arr[max], arr[i]);
        }
    }
}

template <typename T>
void printArray(T arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void test01()
{
    char charArr[] = "badcfe";
    int num = sizeof(charArr) / sizeof(char);
    mySort(charArr, num);
    printArray(charArr, num);
}

void test02()
{
    int intArr[] = {7, 4, 5, 1, 2, 3, 9, 8, 6, 0};
    int num = sizeof(intArr) / sizeof(int);
    mySort(intArr, num);
    printArray(intArr, num);
}

int main()
{
    test01();
    test02();

    system("pause");

    return 0;
}