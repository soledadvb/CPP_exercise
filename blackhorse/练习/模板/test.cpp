#include <iostream>
using namespace std;

template <typename T>   // ռλ��T ��ʾ�滻����T���λ��
void mySwap(T &a, T &b) // �����п�ʼ�����Ķ���,T��λ���ڵ��ú�����ʱ��ᱻ�滻
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
            //�϶������ֵ �ȱ�����������ֵ ҪС, ˵��j�±��Ԫ�ز������������ֵ
            if (arr[max] < arr[j])
            {
                max = j; // �������ֵ�±�
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