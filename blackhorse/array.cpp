#include <iostream>
using namespace std;

int main()
{
    int array[] = {100 , 200 ,500 ,400 ,300};
    int start  = 0;
    int end = sizeof(array) / sizeof(array[0])-1;

    while(start != end)
    {
        int temp = array[start];
        array[start] = array[end];
        array[end] = temp;
        start++;
        end--;
    }

    // for(int i = 0; i < end /2 ; i++)
    // {
    //     int temp = array[start+i];
    //     array[start+i] = array[end-i];
    //     array[end-i] = temp;
    // }

    cout << "Array after exchanging: " << endl;
    for (int i = 0; i <(sizeof(array) / sizeof(array[0])) ; i++)
    {
        cout << array[i] << " ";
    }
     return 0;
}