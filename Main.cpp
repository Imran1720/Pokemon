#include "ProfessorOak.hpp"
#include "Utility.hpp"
#include <iostream>
#include <string>

using namespace std;

void GameLoop(Player& _player)
{
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
            case 1: cout << "\n You look around... but all the wild Pokemon are on vacation.Maybe try again later ?"<< endl;
                break;
            case 2: cout << "\nYou head to the PokeCenter, but Nurse Joy is out on a coffee break. Guess your Pokemon will have to tough it out for now!" << endl;
                break;
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
    GameLoop(player);

    return 0;
}