#ifndef HEADER_H_
#define HEADER_H_
#include<string>
#include<vector>
using namespace std;


class Karta {
private:
	unsigned int br_karta;
	string zog;

public:
	Karta() {
		br_karta = 0;
		zog = "";
	}
	Karta(unsigned int br_karta, string zog) {
		this->br_karta = br_karta;
		this->zog = zog;
	}
	void get_card();
	unsigned int get_br();
	string get_zog();
};

class Mac {
private:
	vector<class Karta> spil;
public:
	void push_card(Karta& card);
	static void create_mac(Mac& k);
	void get_mac();
	void shuffle_mac();
	Karta gib(unsigned int br);
	void izbrisi();
};

class Igrac {
private:
	unsigned int bodovi;
	string ime;
	vector<class Karta> ruka;
public:
	Igrac() {
		bodovi = 0;
		ime = "";
	}

	Igrac(string ime) {
		this->ime = ime;
	}
	void set_name(string& name);
	void set_bodovi(unsigned int& bod);
	void get_player();
	void give_card(Karta card);
	void akuza(Igrac& igrac);
	};

void treseta(vector <string>& names);
void popuni_igrace(vector<string>& ime, vector<class Igrac>& igraci);
void podijeli_karte(Mac& k, vector<Igrac>& igraci);






#endif // !HEADER_H_