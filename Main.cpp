#include <iostream>

using namespace std;

int main()
{

    string pokemonTrainer_Name;
    string pokemonName;

    system("cls");
    //DISPLAYING THE TITLE POKEMON
    for (int i = 0; i < 45; i++)
    {
        cout << "*";
    }
    
    cout << "\n\t\tPOKEMON" << endl;
    
    for (int i = 0; i < 45; i++)
    {
        cout << "*";
    }

    cout << "\nProfessor Oak : Hello there! Welcome to the world of Pokemon!" << endl;
    cout << "Professor Oak : My name is Oak. People call me the Pokemon Professor!" << endl;
    cout << "Professor Oak : But enough about me. Let's talk about you!" << endl;

    cout << "Professor Oak : First, tell me, what’s your name?" << endl;

    //INPUT NAME
    cout << "\nEnter your name: ";
    cin >> pokemonTrainer_Name;

    system("cls");
 
    cout << "Professor Oak :  Ah, " << pokemonTrainer_Name <<"! What a fantastic name!" << endl;
    
    cout << "Professor Oak : You must be eager to start your adventure." << endl;
    cout << "Professor Oak : But first, you'll need a Pokemon of your own!"<<endl;

    // Presenting Pokemon choices
    cout << "Professor Oak : I have three Pokemon here with me." << endl;
    cout<<  "Professor Oak : They're all quite feisty!"<<endl;
    cout << "Professor Oak : Choose wisely..."<<endl;
    cout << "1. Charmander - The fire type. A real hothead!"<<endl;
    cout << "2. Bulbasaur - The grass type. Calm and collected!"<<endl;
    cout << "3. Squirtle - The water type. Cool as a cucumber!"<<endl;

    // Step 3: Capture the Player’s Choice
    int pokemonChoosed;

    cout << "Professor Oak : So, which one will it be? " << endl;
    cout << "Professor Oak : Enter the number of your choice: ";

    cin >> pokemonChoosed;

    system("cls");
    
    // Step 4: Confirm the Choice
    switch (pokemonChoosed)
    {
        case 1: pokemonName = "Bulbasaur";
                cout << "\nYou chose Bulbasaur! A wise choice." << endl;
                break;

        case 2: pokemonName = "Charmander";
                cout << "\nYou chose Charmander! A fiery choice." << endl;
                break;

        case 3: pokemonName = "Squirtle";
                cout << "\nYou chose Squirtle! A cool choice." << endl;
                break;

        default: cout << "Professor Oak : Hmm, that doesn't seem right. " << endl;
                 cout << "Professor Oak : Let me choose for you..."<<endl;

                 pokemonName = "Pikachu";

                 cout << "Professor Oak : Just kidding! Let's go with Pikachu, the surprise guest!" << endl;
                 break;
    }

    //DISPLAYING PROFESSOR OAK'S FINAL WORDS
    cout << "Professor Oak : " << pokemonName << " and you, "<<pokemonTrainer_Name 
        << ", are going to be the best of friends!"<<endl;
    cout << "Professor Oak : Your journey begins now! Get ready to explore the vast world of Pokemon!"<<endl;
	

	return 0;
}