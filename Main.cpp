#include "..\include\Main\Game.hpp"
#include "..\include\Character\Player\Player.hpp"
#include "..\include\Character\ProfessorOak.hpp"

#include <iostream>
#include <string>

using namespace std;
using namespace N_Character;
using namespace N_Character::N_Player;
using namespace N_Main;

int main()
{
    ProfessorOak* professor = new ProfessorOak("Oak");
    Player* player = new Player();

    //professor oak introduction
    professor->Oak_Introduction(player);

    //professor oak offering pokemon to player
    professor->Oak_PokemonOffer(player);

    //Main Quest explaination
    professor->ExplainMainQuest(player);


    Game* game = new Game();
    //Game Loop starts here
    game->GameLoop(player);

    delete(professor);
    delete(player);
    delete(game);

    return 0;
}