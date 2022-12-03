#include <iostream>
#include<math.h>
#include<cmath>

using namespace std;


struct kruznica
{
	float r = 0;
	float s[2];

};

int compare(const kruznica &a, const kruznica (&arr)[2])
{
	float sx = 0;
	float sy = 0;
	float d = 0;
	int intersect = 0;
	float big_r = 0;
	float small_r = 0;
	for (int i = 0; i < 2; i++)
	{
		sx = abs(abs(a.s[0]) - abs(arr[i].s[0]));
		sy = abs(abs(a.s[1]) - abs(arr[i].s[1]));
		d = sqrt((sx * sx) + (sy * sy));

		if (a.r >= arr[i].r)
		{
			big_r = a.r;
			small_r = arr[i].r;
		}
		else
		{
			big_r = arr[i].r;
			small_r = a.r;
		}

		if (d == a.r + arr[i].r || d == abs(a.r - arr[i].r))
		{
			cout << "Kruznice se dodiruju u jednoj tocki\n";
			intersect++;
		}
		else if (abs(a.r - arr[i].r) < d && a.r + arr[i].r > d)
		{
			cout << "Kruznice se sijeku\n";
			intersect++;
		}
		else if (d == big_r)
		{
			cout << "Kruznice se sijeku\n srediste male kruznice je na velikoj kruznici\n";
			intersect++;
		}
		else if (d <= small_r)
		{
			cout << "Kruznice se NE sijeku\n srediste male kruznice je unnutar velike kruznice\n";
		}
		else
			cout << "Kruznice se NE sijeku\n";
		cout << i << " " << endl;


	}
	return intersect;
}

int main()
{
	kruznica a;
	kruznica arr[2];


	a.r = 9;
	a.s[0] = 0;
	a.s[1] = 0;

	arr[0].r = 1;
	arr[0].s[0] = 3;
	arr[0].s[1] = 6;

	arr[1].r = 1;
	arr[1].s[0] = 6;
	arr[1].s[1] = 7;

	cout << "Broj kruznica koje se sijeku: "<< compare(a, arr) << endl;
}
