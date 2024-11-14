#include <string>
#include "PokemonType.hpp"
#include "PokemonNames.hpp"
#include "Utility.hpp"

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