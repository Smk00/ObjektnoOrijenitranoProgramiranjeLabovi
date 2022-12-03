#include <iostream>
#include <vector>
#include"source_header.h"
using namespace std;


int main()
{

	cout << "*TRSETA*" << endl;
	
	vector<string> names;
	treseta(names);
	vector <Igrac> igraci;
	Mac k;

	popuni_igrace(names, igraci);
	Mac::create_mac(k);
	k.shuffle_mac();

	k.get_mac();
	
	podijeli_karte(k, igraci);

	for (unsigned int i = 0; i < igraci.size(); i++)
	{
		igraci[i].akuza(igraci[i]);
	}

	for (unsigned int i = 0; i < igraci.size(); i++)
	{
		igraci[i].get_player();
	}

	//unsigned int br = 0;
	//Karta k(br, "Dinari");
	//k.get_card();





}
