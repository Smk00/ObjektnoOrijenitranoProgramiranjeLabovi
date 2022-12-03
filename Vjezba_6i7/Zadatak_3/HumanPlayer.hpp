#include"Player.hpp"

#ifndef HUMAN_PLAYER_HPP
#define HUMAN_PLAYER_HPP

class HumanPlayer : public Player {
private:

public:
	HumanPlayer(std::string ime) { this->ime = ime; bodovi = 0; ruka = 0; odluka = true; }
	HumanPlayer() { this->ime = "HumanPlayer"; bodovi = 0; ruka = 0; odluka = true; }
	~HumanPlayer() {}
	std::string getName() { return ime; }
	void setBodovi(int broj) { this->bodovi = broj; }
	void setBodPlus() { this->bodovi++; }
	void setRuka(int broj) { this->ruka = broj; }
	void setOdluka(int broj) { this->odluka = broj; }
	int getBodovi() { return bodovi; }
	int getRuka() { return ruka; }
	bool getOdluka() { return odluka; }
	void getPlayer();


	void setOdlukaTrue() { this->odluka = true; }
	void setOdlukaFalse() { this->odluka = false; }
};

#endif // !HUMAN_PLAYER_HPP