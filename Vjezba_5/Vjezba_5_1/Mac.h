#ifndef MAC_H
#define MAC_H
#include <iostream>
#include<algorithm>
#include<vector>
#include<string>
#include"Karta.h"
#include<random>
#include<time.h>
using namespace std;


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


#endif // !MAC_H
