#include <iostream>
#include"ToDouble.hpp"
using namespace std;

int main()
{
	Number n(3);

	double broj = n;
	broj = double(n);

	cout << broj << endl;

}
