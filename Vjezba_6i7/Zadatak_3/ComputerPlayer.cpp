#include"CmputerPlayer.hpp"
#include <stdlib.h>
#include <time.h>
using namespace std;

void ComputerPlayer::getPlayer()
{
	cout << "Ime: " << ime << endl;
	cout << "Bodovi: " << bodovi << endl;
	cout << "Ruka: " << ruka << endl;
	cout << "Odluka: " << odluka << endl;
}

void ComputerPlayer::setRuka(int broj)
{
	srand(time(NULL));
	this->ruka = rand() % 10 + 1;
}

void ComputerPlayer::setOdluka(int broj)
{
	srand(time(NULL));
	this->odluka = rand() % 2;
}