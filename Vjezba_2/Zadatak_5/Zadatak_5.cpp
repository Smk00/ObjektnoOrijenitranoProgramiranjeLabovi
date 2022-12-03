
#include <iostream>
using namespace std;

int* resize_arr(int& index)
{
    int* arr = new int[10];
    int arr_size = 10;
    int i = 0;
    cin >> arr[i];
    if (arr[i] < 0)
        return 0;


    while (arr[i] != 0)
    {
        i++;
        cin >> arr[i];
        if (arr[i] < 0)
        {
            i--;
            continue;
        }
            
        if (i == arr_size-1)
        {
            int* tmp = new int[arr_size*2];
            copy(arr, arr + arr_size, tmp);
            arr_size *= 2;
            delete[] arr;
            arr = tmp;
        
        }
        
    }
    index = i;

    return arr;
}


int main()
{
    int index = 0;
    int* arr = resize_arr(index);
    for (int i = 0; i < index; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << "Kraj\n";

    delete[] arr;
    arr = 0;
}