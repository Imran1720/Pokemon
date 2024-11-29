#pragma once
#include <string>
#include "../include/Main/Game.hpp"

using namespace std;

namespace N_Character {

    class ProfessorOak
    {
    public:

        string name;

        ProfessorOak(string _name);
        void Oak_Introduction(N_Player::Player* _player);
        void Oak_PokemonOffer(N_Player::Player* _player);
        void ExplainMainQuest(N_Player::Player* _player);

    };

}