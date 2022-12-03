#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include <cctype>
#include<list>
using namespace std;

void staffing_bit(vector<int>& myVector)
{
	vector<int>::iterator it = myVector.begin();
	int one_counter = 0;
	for (unsigned int i = 0; i < myVector.size(); i++)
	{
		if (myVector[i] == 1)
			one_counter++;
		if (one_counter == 5)
		{
			myVector.insert(it + i + 1, 0);
			one_counter = 0;

		}
			
	}
}

int main()
{
	vector<int> myVector;
	int tmp = 0;
	while (1)
	{
		cout << "Unesi 0 ili 1" << endl;
		cin >> tmp;
		if (tmp == 0 || tmp == 1)
			myVector.push_back(tmp);
		else
			break;
	}
	cout << endl;
	staffing_bit(myVector);
	
	for (unsigned int i = 0; i < myVector.size(); i++)
	{
		cout << myVector[i] << endl;
	}
}

