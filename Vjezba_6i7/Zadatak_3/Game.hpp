#ifndef GAME_HPP
#define GAME_HPP
#include"Player.hpp"

class Game : public Player
{
private:
	std::vector<Player*> players;
	int cilj;

public:
	Game(int broj) { cilj = broj; }
	~Game() {}
	void set_player(Player* player);
	void getPlayers();
	void StartGame(Game& game);
	int getCilj() { return cilj; }
	int returnMax();
	int returnZbrojRuku();
	void pobjednik();


};

#endif // !GAME_HPP