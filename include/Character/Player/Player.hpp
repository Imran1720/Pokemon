#pragma once
#include "..\include\Pokemon\Pokemon.hpp"

#include <string>

using namespace std;

namespace N_Player
{
    class Player
    {
        public:
        string playerName;
        N_Pokemon::Pokemon pokemonChoosen;

        Player();
        Player(string p_name, N_Pokemon::Pokemon _pokemonChoosen);
        Player(const Player& _player);
        void SelectPokemon(int _choice);
    };
}