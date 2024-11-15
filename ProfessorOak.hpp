#include <string>
#include "Player.hpp"
using namespace std;

class ProfessorOak
{
public:

    string name;

    ProfessorOak(string _name);
    void Oak_Introduction(Player& _player);
    void Oak_PokemonOffer(Player& _player);
    void ExplainMainQuest(Player& _player);

};