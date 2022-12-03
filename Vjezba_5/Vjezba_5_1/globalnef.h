#ifndef GLOBALNEF_H
#define GLOBALNEF_H
#include<string>
#include<vector>
#include"Karta.h"
#include"Mac.h"
#include"Igrac.h"
using namespace std;

void treseta(vector <string>& names);
void popuni_igrace(vector<string>& ime, vector<class Igrac>& igraci);
void podijeli_karte(Mac& k, vector<Igrac>& igraci);



#endif