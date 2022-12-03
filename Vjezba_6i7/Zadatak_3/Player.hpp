#ifndef PLAYER_HPP
#define PLAYER_HPP
#include<iostream>
#include<string>
#include<vector>

class Player
{
protected:
	std::string ime;
	int bodovi;
	int ruka;
	bool odluka;

public:
	Player(std::string ime) { this->ime = ime; bodovi = 0; ruka = 0; odluka = true; }
	Player() { this->ime = "BoB"; bodovi = 0; ruka = 0; odluka = true; }
	~Player() {}
	virtual std::string getName() { return ime; }
	virtual void setBodovi(int broj) { this->bodovi = broj; }
	virtual void setBodPlus() { this->bodovi++; }
	virtual void setRuka(int broj) { this->ruka = broj; }
	virtual void setOdluka(int broj) { this->odluka = broj; }
	virtual void getPlayer();
	virtual int getBodovi() { return bodovi; }
	virtual int getRuka() { return ruka; }
	virtual bool getOdluka() { return odluka; }

	virtual void setOdlukaTrue() { this->odluka = true; }
	virtual void setOdlukaFalse() { this->odluka = false; }

};



#endif // !PLAYER_HPP