#ifndef KARTA_H
#define KARTA_H
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
		cout << "Konstruktor Karte BEZ argumenata" << endl;
	}
	Karta(unsigned int br_karta, string zog) {
		this->br_karta = br_karta;
		this->zog = zog;
		cout << "Konstruktor Karte SA argumentima" << endl;
	}

	~Karta(){
		cout << "Destruktor Karte" << endl;
	}
	
	void get_card();
	unsigned int get_br();
	string get_zog();
};


#endif  // !KARTA_H