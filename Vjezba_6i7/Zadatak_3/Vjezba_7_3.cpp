#include <iostream>
#include<vector>
#include<string>
#include"Player.hpp"
#include"HumanPlayer.hpp"
#include"Game.hpp"
#include"Globalne.hpp"
using namespace std;

int main()
{
    /*
    HumanPlayer p;
    p.setBodovi(4);
    p.setRuka(5);
    p.setOdluka(0);
    p.getPlayer();
    cout << p.getBodovi() << "GetBodovi" << endl;
    //cout << p.getBodovi();
    */
    Game gg(2);
    vector<string> names;
    popuniIgrace(gg, names);
    gg.StartGame(gg);
    gg.pobjednik();
    //gg.getPlayers();

   


}