#ifndef IGRAC_H
#define IGRAC_H
#include<string>
#include<vector>
using namespace std;

class Igrac {
private:
	unsigned int bodovi;
	string ime;
	vector<class Karta> ruka;
public:
	Igrac() {
		bodovi = 0;
		ime = "";
		cout << "Konstruktor Igraca BEZ argumenata" << endl;

	}

	Igrac(string ime) {
		this->bodovi = 0;
		this->ime = ime;
		cout << "Konstruktor Igraca SA argumentima" << endl;
	}
	~Igrac() {
		cout << "Destruktor Igraca" << endl;
	}
	void set_name(string& name);
	void set_bodovi(unsigned int& bod);
	void give_card(Karta card);
	void get_player();
	void akuza(Igrac& igrac);
};


#endif // !IGRAC_H
