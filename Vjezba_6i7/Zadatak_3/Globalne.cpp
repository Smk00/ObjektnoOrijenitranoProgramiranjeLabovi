#include"Globalne.hpp"
#include"Game.hpp"
#include"HumanPlayer.hpp"
#include"CmputerPlayer.hpp"
using namespace std;


void popuniIgrace(Game& par, std::vector<std::string>& names)
{
    string tmp = "";
    int broj = 0;
    cout << "Unesi broj igraca za igru" << endl;
    cin >> broj;

    for (int i = 0; i < broj; i++)
    {
        cout << "Unesi ime " << i + 1 << ". " << "igraca" << endl;
        cin >> tmp;
        names.push_back(tmp);
    }


    for (int i = 0; i < (int)names.size(); i++)
    {
        par.set_player(new ComputerPlayer(names[i]));
    }
}
