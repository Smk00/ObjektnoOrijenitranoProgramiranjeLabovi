#include <iostream>
#include<algorithm>
#include<vector>
#include<string>
#include <cstdlib>
#include <cctype>
#include"source_header.h"
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



//_____IGRAC_____
void Igrac::set_name(string& name)
{
	ime = name;
}
void Igrac::set_bodovi(unsigned int& bod)
{
	bodovi = bodovi + bod;
}
void Igrac::give_card(Karta card)
{
	ruka.push_back(card);
}
void Igrac::get_player()
{
	cout << ime << endl;
	cout << bodovi << endl;
	for (unsigned int i = 0; i < ruka.size(); i++)
	{
		ruka[i].get_card();
	}
}

void Igrac::akuza(Igrac& igrac)
{
	unsigned int asevi = 0;
	unsigned int duje = 0;
	unsigned int trice = 0;

	vector<string> asevi_zog;
	vector<string> duje_zog;
	vector<string> trice_zog;

	for (unsigned int i = 0; i < ruka.size(); i++)
	{
		if (ruka[i].get_br() == 1)
		{
			asevi++;
			asevi_zog.push_back(ruka[i].get_zog());
		}
		else if (ruka[i].get_br() == 2)
		{
			duje++;
			duje_zog.push_back(ruka[i].get_zog());
		}
		else if (ruka[i].get_br() == 3)
		{
			trice++;
			trice_zog.push_back(ruka[i].get_zog());
		}
	}
	if (asevi > 2)
		igrac.set_bodovi(asevi);
	if (duje > 2)
		igrac.set_bodovi(duje);
	if (trice > 2)
		igrac.set_bodovi(trice);

	for (unsigned int i = 0; i < asevi_zog.size(); i++)
	{
		for (unsigned int j = 0; j < duje_zog.size(); j++)
		{
			if (asevi_zog[i] == duje_zog[j])
			{
				for (unsigned int k = 0; k < trice_zog.size(); k++)
				{
					if (asevi_zog[i] == trice_zog[k])
					{
						unsigned int bod_napolitana = 3;
						igrac.set_bodovi(bod_napolitana);
					}
				}
			}
		}
	}
}



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
	random_shuffle(spil.begin(),spil.end());
}

void Mac::izbrisi()
{
	spil.erase(spil.begin(), spil.begin() + 10);
}



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
		Igrac tmp;
		igraci.push_back(tmp);

	}

	for (unsigned int i = 0; i < igraci.size(); i++)
	{
		igraci[i].set_name(names[i]);
	}
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