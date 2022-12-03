#include"Game.hpp"
#include"HumanPlayer.hpp"
#include"CmputerPlayer.hpp"
using namespace std;

void Game::set_player(Player* player)
{
	players.push_back(player);
}

void Game::getPlayers()
{
	for (int i = 0; i < (int)players.size(); i++)
	{
		players[i]->getPlayer();
	}
}
int Game::returnMax()
{
	int max = players[0]->getBodovi();
	for (int i = 1; i < (int)players.size(); i++)
	{
		if (players[i]->getBodovi() > max)
		{
			max = players[i]->getBodovi();
		}
	}
	return max;
}

int Game::returnZbrojRuku()
{
	int sum = 0;
	for (int i = 0; i < (int)players.size(); i++)
	{
		sum = sum + players[i]->getRuka();
	}
	return sum;
}

void Game::pobjednik()
{
	for (int i = 0; i < (int)players.size(); i++)
	{
		if (players[i]->getBodovi() == cilj)
		{
			cout << "Pobjednik je" << endl;
			players[i]->getPlayer();
		}
	}
}

void Game::StartGame(Game& game)
{
	int max_score = 0;
	while (max_score < game.cilj)
	{
		for (int i = 0; i < (int)players.size(); i++)
		{
			cout << players[i]->getName() << " Unesi par = 0 nepar = 1" << endl;
			int tmp_odluka = 0;
			cin >> tmp_odluka;
			players[i]->setOdluka(tmp_odluka);

			cout << players[i]->getName() << " Odaberi broj 1-10" << endl;
			int tmp_ruka = 0;
			cin >> tmp_ruka;
			players[i]->setRuka(tmp_ruka);

		}
		if (players[0]->getOdluka() == true)
			players[1]->setOdlukaFalse();
		else if (players[0]->getOdluka() == false)
			players[1]->setOdlukaTrue();

		int sum = game.returnZbrojRuku();
		for (int i = 0; i < (int)players.size(); i++)
		{
			int prov = players[i]->getOdluka();
			if (sum % 2 == prov)
			{
				players[i]->setBodPlus();
			}
		}
		max_score = game.returnMax();

	}
}