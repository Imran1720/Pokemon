#include "Pokemon.hpp"
#include "iostream"


using namespace std;

Pokemon::Pokemon()
{
    pokemonName = "Pikachu";
    typeOfPokemon = PokemonType::Electric;
    health = 10;
}

Pokemon::Pokemon(string _name, PokemonType _type, int _heatlh)
{
    pokemonName = _name;
    typeOfPokemon = _type;
    health = _heatlh;
}

Pokemon::Pokemon(const Pokemon& _pokemon)
{
    pokemonName = _pokemon.pokemonName;
    typeOfPokemon = _pokemon.typeOfPokemon;
    health = _pokemon.health;
}

void Pokemon::Attack()
{
    cout << pokemonName << " attacks with a powerful move!" << endl;
}