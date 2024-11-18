#include "../../include/Pokemon/Pokemon.hpp"
#include "../../include/Pokemon/PokemonType.hpp"
#include <iostream>

using namespace std;

namespace N_Pokemon
{
    Pokemon::Pokemon()
    {
        pokemonName = "Pikachu";
        typeOfPokemon = PokemonType::Electric;
        health = 10;
        attackPower = 12;
    }

    Pokemon::Pokemon(string _name, PokemonType _type, int _heatlh, int _attackPower)
    {
        pokemonName = _name;
        typeOfPokemon = _type;
        health = _heatlh;
        attackPower = _attackPower;
    }

    Pokemon::Pokemon(const Pokemon& _pokemon)
    {
        pokemonName = _pokemon.pokemonName;
        typeOfPokemon = _pokemon.typeOfPokemon;
        health = _pokemon.health;
        attackPower = _pokemon.attackPower;
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

    bool Pokemon::IsFainted()
    {
        return health <= 0 ? true : false;
    }

    void Pokemon::Heal()
    {
        health = maxHealth;
    }


}