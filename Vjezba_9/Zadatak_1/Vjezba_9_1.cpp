#include <iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;


template <typename T>
void sortArr(T a[], int size)
{
    T tmp;
    for (int i = 0; i < size; i++)
        for (int j = i + 1; j < size; j++)
        {
            if (a[i] > a[j])
            {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
}

template<>
void sortArr<char>(char arr[], int size)
{
    vector<char> upper;
    vector<char> lower;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] >= 'A' && arr[i] <= 'Z')
        {
            upper.push_back(tolower(arr[i]));
            arr[i] = tolower(arr[i]);

        }
    }

    sort(arr, arr + size);

    for (int k = 0; k < size; ++k)
    {
        for (int j = 0; j < (int)upper.size(); ++j)
        {
            if (arr[k] == upper[j])
            {
                arr[k] = toupper(arr[k]);
                upper.erase(upper.begin() + j);
                continue;

            }
        }
    }


}

int main()
{
    char arr[] = { 'P','h','Q','g','H','u','M','e','A','y','L','n','L','f','D','x' };
    int size = sizeof(arr) / sizeof(arr[0]);
    sortArr(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}
