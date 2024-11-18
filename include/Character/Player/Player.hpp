#include "D:\Outscal\C++ Intermediate\Pokemon\include\Pokemon\Pokemon.hpp"

#include <string>



using namespace std;

class Player
{
public:
    string playerName;
    Pokemon pokemonChoosen;
    
    Player();
    Player(string p_name, Pokemon _pokemonChoosen);
    Player(const Player& _player);
    void SelectPokemon(int _choice);
};