#include"Player.hpp"


#ifndef COMPUTER_PLAYER_HPP
#define COMPUTER_PLAYER_HPP

class ComputerPlayer : public Player {
private:


public:
	ComputerPlayer(std::string name) { this->ime = "Computer " + name; bodovi = 0; ruka = 0; odluka = true; }
	~ComputerPlayer() {}
	std::string getName() { return ime; }
	void getPlayer();
	int getBodovi() { return bodovi; }
	int getRuka() { return ruka; }
	bool getOdluka() { return odluka; }

	void setBodovi(int broj) { this->bodovi = broj; }
	void setBodPlus() { this->bodovi++; }
	void setRuka(int broj);
	void setOdluka(int broj);
	void setOdlukaTrue() { this->odluka = true; }
	void setOdlukaFalse() { this->odluka = false; }
};


#endif // !COMPUTER_PLAYER_HPP