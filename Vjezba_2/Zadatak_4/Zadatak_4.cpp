
#include <iostream>
using namespace std;

int* fibonaci(int n)
{
    int* arr_fibonaci = new int[10];
    arr_fibonaci[0] = 1;
    arr_fibonaci[1] = 1;

    for (int i = 2; i < n; i++)
    {
        arr_fibonaci[i] = arr_fibonaci[i - 1] + arr_fibonaci[i - 2];
    }

    return arr_fibonaci;
    
}

int main()
{   
    int element_num = 7;

    int* arr_pointer = fibonaci(element_num);

    for (int i = 0; i < element_num; i++)
    {
        cout << arr_pointer[i] <<"\n";
    }

    delete arr_pointer;
    arr_pointer = 0;
    if (arr_pointer)
        *arr_pointer = 5;


}


