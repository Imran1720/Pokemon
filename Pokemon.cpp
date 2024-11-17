#include "Pokemon.hpp"
#include "PokemonType.hpp"
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

void Pokemon::Attack(Pokemon& _target)
{
    int damage = attackPower;
    cout << pokemonName << " attacks " << _target.pokemonName << " for " << damage << " damage!" << endl;
    _target.TakeDamage(damage);
}

void Pokemon::TakeDamage(int _damage)
{
    health -= _damage;
    if (health < 0)
    {
        health = 0;
    }
}

void Pokemon::Battle(Pokemon& _playerPokemon, Pokemon& _wildPokemon)
{
    cout << "A wild " << _wildPokemon.pokemonName << " appeared!!" << endl;

    while (!_playerPokemon.IsFainted() && !_wildPokemon.IsFainted())
    {
        _playerPokemon.Attack(_wildPokemon);
        if (!_wildPokemon.IsFainted())
        {
            _wildPokemon.Attack(_playerPokemon);
        }
    }

    if (_playerPokemon.IsFainted())
    {
        cout << _playerPokemon.pokemonName << " has fainted! You lose the battle." << endl;
    }
    else
    {
        cout<<"You defeated the wild " << _wildPokemon.pokemonName << "!" << endl;
    }
}

bool Pokemon::IsFainted()
{
    return health <= 0 ?  true : false;
}

void Pokemon::Heal()
{
    health = maxHealth;
}

