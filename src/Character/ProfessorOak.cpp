#include "..\include\Character\ProfessorOak.hpp"
#include "..\include\Character\Player\Player.hpp"
#include "..\include\Utility\Utility.hpp"
#include "..\include\Pokemon\PokemonNames.hpp"

#include <iostream>


using namespace std;
using namespace N_Utility;

namespace N_Character {

ProfessorOak::ProfessorOak(string _name)
{
    name = _name;
}

void ProfessorOak::Oak_Introduction(N_Player::Player* _player)
{
    cout << "Professor " << name << " : Hello there! Welcome to the world of Pokemon!" << endl;
    cout << "Professor " << name << " : My name is Oak. People call me the Pokemon Professor!" << endl;
    cout << "Professor " << name << " : But enough about me. Let's talk about you!" << endl;
    cout << "Professor " << name << " : First, tell me, what's your name?" << endl;

    cin >> _player->playerName;
    Utility::clearInputBuffer();
    Utility::ClearScreen();
}

void ProfessorOak::Oak_PokemonOffer(N_Player::Player* _player)
{
    cout << "\nProfessor " << name << " : Ah, " << _player->playerName << "! What a fantastic name!" << endl;
    cout << "Professor " << name << " : You must be eager to start your adventure." << endl;
    cout << "Professor " << name << " : But first, you'll need a Pokemon of your own!" << endl;


    Utility::PlayerWaitResponse();

    // Presenting Pokemon choices
    cout << "Professor " << name << " : I have three Pokemon here with me." << endl;
    cout << "Professor " << name << " : They're all quite feisty!" << endl;
    cout << "Professor " << name << " : Choose wisely..." << endl;

    Utility::PlayerWaitResponse();
    Utility::ClearScreen();
    cout << "1. Charmander - The fire type. A real hothead!" << endl;
    cout << "2. Bulbasaur - The grass type. Calm and collected!" << endl;
    cout << "3. Squirtle - The water type. Cool as a cucumber!" << endl;

    // Step 3: Capture the Player’s Choice
    int pokemonChoosed;

    cout << "\nProfessor " << name << " : So, which one will it be? " << endl;
    cout << "\nEnter the number of your choice: ";

    cin >> pokemonChoosed;
    Utility::clearInputBuffer();


    _player->SelectPokemon(pokemonChoosed);


    Utility::ClearScreen();

    switch ((N_Pokemon::PokemonNames)pokemonChoosed)
    {
    case N_Pokemon::PokemonNames::Charmander:
        cout << "\nProfessor " << name << " : A fiery choice! " << _player->pokemonChoosen.GetPokemonName() << " is yours! " << endl;
        cout << "Professor " << name << " : " << _player->pokemonChoosen.GetPokemonName() << " and you, " << _player->playerName << ", are going to be the best of friends! " << endl;
        break;
    case N_Pokemon::PokemonNames::Bulbasaur:
        cout << "\nProfessor " << name << " : A grassy choice! " << _player->pokemonChoosen.GetPokemonName() << " is yours! " << endl;
        cout << "Professor " << name << " : " << _player->pokemonChoosen.GetPokemonName() << " and you, " << _player->playerName << ", are going to be the best of friends! " << endl;
        break;
    case N_Pokemon::PokemonNames::Squirtle:
        cout << "\nProfessor " << name << " : A watery choice! " << _player->pokemonChoosen.GetPokemonName() << " is yours! " << endl;
        cout << "Professor " << name << " : " << _player->pokemonChoosen.GetPokemonName() << " and you, " << _player->playerName << ", are going to be the best of friends! " << endl;
        break;
    default:
        cout << "\nProfessor " << name << " : Hmm, that doesn't seem right. " << endl;
        cout << "Professor " << name << " : Let me choose for you..." << endl;
        cout << "Professor " << name << " : Just kidding! Let's go with " << _player->pokemonChoosen.GetPokemonName() << ", the surprise guest!" << endl;
        cout << "Professor " << name << " : " << _player->pokemonChoosen.GetPokemonName() << " and you, " << _player->playerName << ", are going to be the best of friends! " << endl;
        break;
    }
    Utility::PlayerWaitResponse();

}

void ProfessorOak::ExplainMainQuest(N_Player::Player* _player)
{

    Utility::ClearScreen();
    cout << "\nProfessor " << name << " : Oak-ay " << _player->playerName << ", I am about to explain you about your upcoming grand adventure." << endl;
    cout << "Professor " << name << " : You see, becoming a Pokemon Master is no easy feat. It takes courage, wisdom, and a bit of luck." << endl;
    cout << "Professor " << name << " : Your mission, should you choose to accept it (and trust me, you really don't have a choice) is to\n\t\t collect all the Pokemon Badges and conquer the Pokemon League. " << endl;

    Utility::PlayerWaitResponse();

    cout << _player->playerName << " : Wait... that sounds a lot like every other Pokemon game out there.\n" << endl;

    Utility::PlayerWaitResponse();
    Utility::ClearScreen();

    cout << "\nProfessor " << name << " : Shhh! Don't break the fourth wall" << _player->playerName << " !This is serious business." << endl;
    cout << "Professor " << name << " : To achieve this, you'll need to battle wild Pokemon, challenge gym leaders, and of course, \n\t\tkeep your Pokemon healthy at the PokeCenter.\n" << endl;
    cout << "Professor " << name << " : Along the way, you'll capture new Pokemon to strengthen your team. Just remember—there's a \n\t\tlimit to how many Pokemon you can carry, so choose wisely!\n" << endl;

    Utility::PlayerWaitResponse();

    cout << _player->playerName << " : Sounds like a walk in the park... right?" << endl;

    Utility::PlayerWaitResponse();
    Utility::ClearScreen();

    cout << "\nProfessor " << name << " : Hah! That's what they all say! But beware, young Trainer, the path to victory is fraught \n\t\twith challenges. And if you lose a battle... well, let's just say you'll be starting from square one.\n" << endl;
    cout << "Professor " << name << " : So, what do you say? Are you ready to become the next Pokemon Champion?\n" << endl;

    Utility::PlayerWaitResponse();

    cout << _player->playerName << " : Ready as I'll ever be, Professor!" << endl;

    Utility::PlayerWaitResponse();
    Utility::ClearScreen();

    cout << "\nProfessor " << name << " :  Thats's the spirit! Now, your journey begins." << endl;
    cout << "Professor " << name << " : But first... let's just pretend I didn't forget to set up the actual game loop... Ahem, onwards!" << endl;
}


}
