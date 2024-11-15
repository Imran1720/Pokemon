#include "ProfessorOak.hpp"
#include "Utility.hpp"
#include "Game.hpp"
#include <iostream>
#include <string>
using namespace std;



int main()
{
    //creating a default pokemon
    Pokemon playerPokemon("Charmander", PokemonType::Fire, 100);

    ProfessorOak professor("Oak");

    //createing default player and assigning default pokemon
    Player player("Trainer", playerPokemon);


    //professor oak introduction
    professor.Oak_Introduction(player);

    //professor oak offering pokemon to player
    professor.Oak_PokemonOffer(player);

    //Main Quest explaination
    professor.ExplainMainQuest(player);

    //Game Loop starts here
    Game::GameLoop(player);

    return 0;
}