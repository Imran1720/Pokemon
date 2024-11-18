#include "..\include\Character\Player\Player.hpp"
#include "..\include\Pokemon\PokemonNames.hpp"
#include "..\include\Pokemon\PokemonType.hpp"
#include "..\include\Utility\Utility.hpp"

#include <iostream>

using namespace std;
using namespace N_Pokemon;

Player::Player()
{
    playerName = "Trainer";
    pokemonChoosen = Pokemon();
}

Player::Player(string p_name, Pokemon _pokemonChoosen)
{
    playerName = p_name;
    pokemonChoosen = _pokemonChoosen;
}

Player::Player(const Player& _player)
{
    playerName = _player.playerName;
    pokemonChoosen = _player.pokemonChoosen;
}

void Player::SelectPokemon(int _choice)
{
    switch ((PokemonNames)_choice)
    {
        case PokemonNames::Charmander:
            pokemonChoosen = Pokemon("Charmander", PokemonType::Fire, 100,10);
            break;

        case PokemonNames::Bulbasaur:
            pokemonChoosen = Pokemon("Bulbasaur", PokemonType::Grass, 100,9);
            break;

        case PokemonNames::Squirtle:
            pokemonChoosen = Pokemon("Squirtle", PokemonType::Water, 100,9);
            break;

        default:
            pokemonChoosen = Pokemon("Pikachu", PokemonType::Electric, 100,12);
    }
}
