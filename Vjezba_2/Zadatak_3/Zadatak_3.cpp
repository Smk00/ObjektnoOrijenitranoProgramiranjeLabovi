#include<iostream>
using namespace std;

int& plusplus(int arr[], int element)
{
	int& tmp_ref = arr[element];
	return tmp_ref;
}

int main()
{
	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int element;
	cin >> element;	

	plusplus(arr, element)++;

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
}