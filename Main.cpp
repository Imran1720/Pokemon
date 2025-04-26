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
    ProfessorOak* oak = new ProfessorOak("Oak");
    Player* trainer = new Player();

    

    //professor oak introduction
    oak->Oak_Introduction(trainer);

    //professor oak offering pokemon to player
    oak->Oak_PokemonOffer(trainer);

    //Main Quest explaination
    oak->ExplainMainQuest(trainer);


    Game* gameController = new Game();
    //Game Loop starts here
    gameController->GameLoop(trainer);

    delete(oak);
    delete(trainer);
    delete(gameController);

    return 0;
}