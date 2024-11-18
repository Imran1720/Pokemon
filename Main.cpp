#include "..\include\Main\Game.hpp"
#include "..\include\Character\Player\Player.hpp"
#include "..\include\Character\ProfessorOak.hpp"

#include <iostream>
#include <string>

using namespace std;
using namespace N_Character;
using namespace N_Main;

int main()
{
    ProfessorOak professor("Oak");
    Player player;

    //professor oak introduction
    professor.Oak_Introduction(player);

    //professor oak offering pokemon to player
    professor.Oak_PokemonOffer(player);

    //Main Quest explaination
    professor.ExplainMainQuest(player);

    Game game;
    //Game Loop starts here
    game.GameLoop(player);

    return 0;
}