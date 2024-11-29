
#pragma once
#include "../include/Main/Game.hpp"
#include "../include/Character/Player/Player.hpp"
#include "..\include\Battle\BattleManager.hpp"
#include "../include/Pokemon/Pokemon.hpp"
#include "../include/Utility/Utility.hpp"
#include "../include/Battle/WildEncounterManager.hpp"

#include<iostream>

using namespace std;
using namespace N_Utility;
using namespace N_Battle;
using namespace N_Pokemon;

namespace N_Main
{ 

Game::Game()
{
    forestGrass = {
        "Forest",
        {
            Pokemon("Pidgey",N_Pokemon::PokemonType::Normal,40,8),
            Pokemon("Caterpie",N_Pokemon::PokemonType::Grass,35,9),
            Pokemon("Zubat",N_Pokemon::PokemonType::Poision,30,11)
        },
        70
    };
}

void Game::GameLoop(N_Player::Player& _player)
{
    BattleManager battleManager;
    int adventureChoice;
    bool isGameRunning = true;


    while (isGameRunning)
    {
        Utility::PlayerWaitResponse();
        Utility::ClearScreen();

        cout << _player.playerName << "!, What would you like to do next " << endl;

        cout << "1. Battle Wild Pokemon" << endl;
        cout << "2. Visit PokeCenter" << endl;
        cout << "3. Challenge Gyms" << endl;
        cout << "4. Enter Pokémon League" << endl;
        cout << "5. Quit" << endl;

        cin >> adventureChoice;
        Utility::clearInputBuffer();

        switch (adventureChoice)
        {
        case 1:
            {
                WildEncounterManager encounterManager;
                Pokemon encounteredPokemon = encounterManager.GetRandomPokemonFromGrass(forestGrass);
                
                battleManager.StartBattle(_player, encounteredPokemon);

                break;
            }
        case 2:
            {
                cout << "You head to Pokecenter" << endl;
                _player.pokemonChoosen.Heal();
                cout << _player.pokemonChoosen.pokemonName << "'s health is fully restored" << endl;
                break;
                break;
            }
        case 3: cout << "\nYou march up to the Gym, but it's closed for renovations. Seems like even Gym Leaders need a break!" << endl;
            break;
        case 4: cout << "\nYou boldly step towards the Pokemon League... but the gatekeeper laughs and says, 'Maybe next time, champ!" << endl;
            break;
        case 5: cout << "\nYou try to quit, but Professor Oak's voice echoes: 'There's no quitting in Pokemon training!" << endl;
            cout << "Are you sure you want to quit?(y/n):";

            char decesion;
            cin >> decesion;
            Utility::clearInputBuffer();

            if (decesion == 'y' || decesion == 'Y')
            {
                isGameRunning = false;
            }
            break;
        default: cout << "Invalid choice. Try again!" << endl;
        }
    }
    cout << "Thanks for playing the game " << _player.playerName << endl;
}
}