#include <iostream>
using namespace std;

int main()
{
    int array[9] = {4, 2, 8, 0, 5, 7, 1, 3, 9};
    int size = sizeof(array) / sizeof(array[0]);
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    cout << "Array after sorting: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}