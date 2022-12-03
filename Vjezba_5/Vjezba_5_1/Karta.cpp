#include <iostream>
#include<algorithm>
#include<vector>
#include<string>
#include"Karta.h"
#include<random>
#include<time.h>
using namespace std;


//_____KARTA_____
void Karta::get_card() {
	cout << br_karta << " " << zog << endl;
}

unsigned int Karta::get_br()
{
	return br_karta;
}

string Karta::get_zog()
{
	return zog;
}