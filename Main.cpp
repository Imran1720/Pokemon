#include <iostream>

using namespace std;

int main()
{
    system("cls");

    string pokemonTrainer_Name;

    for (int i = 0; i < 45; i++)
    {
        cout << "*";
    }

    cout << "\n\t\tPOKEMON" << endl;

    for (int i = 0; i < 45; i++)
    {
        cout << "*";
    }
    cout << "\n\nTrainer! Before you embark on your journey," << endl;
    cout << "the Pokemon world needs to know who you are!" << endl;
    cout << "\nTime to step up and tell us your name." << endl;
    cout << "\nAnd remember, a great name is the start of " << endl;
    cout << "every great adventure!" << endl << endl;

    for (int i = 0; i < 45; i++)
    {
        cout << "-";
    }

    cout << "\n\nEnter your name: ";
    cin >> pokemonTrainer_Name;

    system("cls");
    //How should the game start
    // Step 1: Greet the Player
    cout << "Ah, " << pokemonTrainer_Name << "!" << endl;
    cout << "Welcome to the world of Pokemon!" << endl;
    cout << "I am Professor Oak" << endl;
    cout << "Today is a momentous day you'll be choosing your very first Pokemon." << endl;
    cout << "Every great Trainer remembers this moment for the rest of their lives." << endl;
    cout << "So, choose wisely, young one!" << endl;

    // Step 2: Display the Pokémon Choices
    cout << "\nYou can choose one of the following Pokemon" << endl;
    cout << "1. Bulbasaur\n2. Charmander\n3. Squirtle" << endl;
    cout << "\nEnter your selection('1' or '2' or '3'):";

    // Step 3: Capture the Player’s Choice

    int pokemonChoosed;

    cin >> pokemonChoosed;
    system("cls");
    // Step 4: Confirm the Choice
    switch (pokemonChoosed)
    {
    case 1: cout << "\nYou chose Bulbasaur! A wise choice." << endl;
        break;
    case 2:cout << "\nYou chose Charmander! A fiery choice." << endl;
        break;
    case 3: cout << "\nYou chose Squirtle! A cool choice." << endl;
        break;
    default:cout << "\nInvalid choice. Please restart the game." << endl;
        break;
    }

    if (pokemonChoosed >= 1 && pokemonChoosed <= 3)
    {
        cout << "\nAh, an excellent choice!" << endl;

        cout << "But beware, " << pokemonTrainer_Name << endl;

        cout << "this is only the beginning." << endl;

        cout << "Your journey is about to unfold." << endl;

        cout << "Now let's see if you've got what it takes to keep going!" << endl;

        cout << "Good luck, and remember… Choose wisely!" << endl;
    }
	
	return 0;
}