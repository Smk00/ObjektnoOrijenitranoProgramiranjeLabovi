
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;


void min_max(int* arr, int qt, int& min, int& max)
{
	min = arr[0];
	max = arr[0];
	for (int i = 1; i < qt; i++)
	{
		if (arr[i] < min)
			min = arr[i];
		else if (arr[i] > max)
			max = arr[i];
		else
			continue;
	}
}



int main()
{
	srand(time(0));
	int qt = 0;
	int min;
	int max;

	cout << "How many numbers would you like to generate\n";
	cin >> qt;
	cout << qt << " Numbers\n";


	int arr[100] = {};


	for (int i = 0; i < qt; i++)
	{
		arr[i] = rand() % 100 + 1;
	}

	for (int i = 0; i < qt; i++)
	{
		cout << arr[i] << endl;
	}

	cout << "\n";

	min_max(arr, qt, min, max);

	cout << "MAX " << max << "\n" << "MIN " << min;

}

