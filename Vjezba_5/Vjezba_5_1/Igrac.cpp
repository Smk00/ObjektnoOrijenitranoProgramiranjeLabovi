#include <iostream>
#include<vector>
#include<string>
#include"Igrac.h"
#include"Karta.h"
using namespace std;


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