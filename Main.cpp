#include "Game.hpp"
#include "Player.hpp"

#include "ProfessorOak.hpp"
#include "Utility.hpp"

#include <iostream>
#include <string>

using namespace std;



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