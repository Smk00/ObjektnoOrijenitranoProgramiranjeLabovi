#include <iostream>
#include<string>
#include"Money.hpp"
using namespace std;

int main()
{
	Money juha(11, 30), becki(15, 50), salata(10), pivo(15), babic(16, 40);

	Money racun = juha + becki + salata + pivo;
	cout << racun;

	cout << endl;
	cout << endl;
	
	racun -= pivo;
	racun += babic;

	cout << racun;
	cout << endl << endl;

	double pr = juha;

	cout << pr << endl;
}
