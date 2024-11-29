#pragma once
#include "..\include\Character\Player\Player.hpp"
#include "..\include\Pokemon\PokemonNames.hpp"

#include "..\include\Utility\Utility.hpp"
#include<string>
#include <iostream>

using namespace std;

namespace N_Player
{
    Player::Player()
    {
        playerName = "Trainer";
        pokemonChoosen = N_Pokemon::Pokemon();
    }

    Player::Player(string p_name, N_Pokemon::Pokemon _pokemonChoosen)
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
        switch ((N_Pokemon::PokemonNames)_choice)
        {
        case N_Pokemon::PokemonNames::Charmander:
            pokemonChoosen = N_Pokemon::Pokemon("Charmander", N_Pokemon::PokemonType::Fire, 100, 10);
            break;

        case N_Pokemon::PokemonNames::Bulbasaur:
            pokemonChoosen = N_Pokemon::Pokemon("Bulbasaur", N_Pokemon::PokemonType::Grass, 100, 9);
            break;

        case N_Pokemon::PokemonNames::Squirtle:
            pokemonChoosen = N_Pokemon::Pokemon("Squirtle", N_Pokemon::PokemonType::Water, 100, 9);
            break;

        default:
            pokemonChoosen = N_Pokemon::Pokemon("Pikachu", N_Pokemon::PokemonType::Electric, 100, 12);
        }
    }
}