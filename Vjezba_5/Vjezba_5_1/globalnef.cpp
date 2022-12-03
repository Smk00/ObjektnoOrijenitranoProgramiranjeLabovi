#include<iostream>
#include<vector>
#include<string>
#include"Karta.h"
#include"Mac.h"
#include"Igrac.h"
using namespace std;

//_____GLOBALNE_____
void treseta(vector <string>& names)
{
	unsigned int broj_igraca = 0;
	while (broj_igraca != 2 && broj_igraca != 4)
	{
		cout << "Uensi broj igraca (2 ili 4) ";
		cin >> broj_igraca;
	}

	string name;
	for (unsigned int i = 0; i < broj_igraca; i++)
	{
		cout << "Unesi ime igraca " << i + 1 << ": ";
		cin >> name;
		names.push_back(name);

	}
}

void popuni_igrace(vector<string>& names, vector<class Igrac>& igraci)
{
	for (unsigned int i = 0; i < names.size(); i++)
	{
		Igrac tmp(names[i]);
		igraci.push_back(tmp);

	}
	/*
	for (unsigned int i = 0; i < igraci.size(); i++)
	{
		igraci[i].set_name(names[i]);
	}
	*/
}

void podijeli_karte(Mac& k, vector<Igrac>& igraci)
{

	for (unsigned int i = 0; i < igraci.size(); i++)
	{
		for (unsigned int j = 0; j < 10; j++)
		{
			igraci[i].give_card(k.gib(j));
		}
		k.izbrisi();
	}


}