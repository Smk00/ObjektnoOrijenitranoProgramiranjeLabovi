#include <iostream>
#include<algorithm>
#include<vector>
#include<string>
#include"Karta.h"
#include"Mac.h"
#include<random>
#include<time.h>
using namespace std;


//_____MAC_____
void Mac::push_card(Karta& card)
{
	spil.push_back(card);
}

void Mac::create_mac(Mac& k)
{
	int vr_karte[10] = { 1, 2, 3, 4, 5, 6, 7, 11 ,12 ,13 };
	string zogovi[4] = { "Dinari", "Kupe", "Bastoni", "Spade" };

	for (unsigned int i = 0; i < 4; i++)
	{
		for (unsigned int j = 0; j < 10; j++)
		{
			Karta tmp(vr_karte[j], zogovi[i]);
			k.push_card(tmp);
		}
	}


}

void Mac::get_mac()
{
	for (unsigned int i = 0; i < spil.size(); i++)
	{
		spil[i].get_card();
	}
}

Karta Mac::gib(unsigned int br)
{
	return spil[br];
}

void Mac::shuffle_mac()
{
	srand(unsigned(time(0)));
	random_shuffle(spil.begin(), spil.end());
}

void Mac::izbrisi()
{
	spil.erase(spil.begin(), spil.begin() + 10);
}