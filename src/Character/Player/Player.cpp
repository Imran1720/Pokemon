#pragma once
#include "..\include\Character\Player\Player.hpp"
#include "..\include\Pokemon\PokemonNames.hpp"
#include "..\..\..\include\Pokemon\Pokemons\Charmendar.hpp"
#include "..\..\..\include\Pokemon\Pokemons\Bulbasaur.hpp"
#include "..\..\..\include\Pokemon\Pokemons\Squirtle.hpp"
#include "..\..\..\include\Pokemon\Pokemons\Pikachu.hpp"
#include "..\include\Utility\Utility.hpp"
#include <iostream>


namespace N_Character
{
    namespace N_Player
    {

        using namespace N_Pokemon;
        using namespace N_Pokemons;
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
            switch ((N_Pokemon::PokemonNames)_choice)
            {
            case PokemonNames::Charmander:
                pokemonChoosen = Charmendar();
                break;

            case PokemonNames::Bulbasaur:
                pokemonChoosen =Bulbasaur();
                break;

            case PokemonNames::Squirtle:
                pokemonChoosen = Squirtle();
                break;

            default:
                pokemonChoosen = Pikachu();
            }
        }
    }
}