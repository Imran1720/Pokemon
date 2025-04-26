#pragma once
#include "..\include\Pokemon\Pokemon.hpp"

#include <string>

namespace N_Character
{
    namespace N_Player
    {
        using namespace std;
        using namespace N_Pokemon;


        class Player
        {
        public:
            string playerName;
            Pokemon* pokemonChoosen;

            Player();
            Player(string p_name);
            Player(const Player& _player);
            void SelectPokemon(int _choice);
        };
    }
}