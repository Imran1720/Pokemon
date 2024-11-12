#include <iostream>

using namespace std;

enum class PokemonNames
{
    Charmander=1,
    Bulbasaur,
    Squirtle,
    Pikachu
};

enum class PokemonType {
    Fire =1,
    Water,
    Electric,
    Grass
};

class Pokemon
{
    public:
        string pokemonName;
        PokemonType typeOfPokemon;
        int health;

        Pokemon()
        {
            pokemonName = "Pikachu";
            typeOfPokemon = PokemonType::Electric;
            health = 10;
        }

        Pokemon(string _name, PokemonType _type, int _heatlh)
        {
            pokemonName = _name;
            typeOfPokemon = _type;
            health=_heatlh;
        }

        Pokemon(const Pokemon& _pokemon)
        {
            pokemonName = _pokemon.pokemonName;
            typeOfPokemon = _pokemon.typeOfPokemon;
            health = _pokemon.health;
        }

        void Attack()
        {
            cout << pokemonName << " attacks with a powerful move!" << endl;
        }

};

class Player
{
    public:
        string playerName;
        Pokemon pokemonChoosen;

        Player()
        {
            playerName = "Trainer";
            pokemonChoosen = Pokemon();
        }

        Player(string p_name,Pokemon _pokemonChoosen)
        {
            playerName = p_name;
            pokemonChoosen = _pokemonChoosen;
        }

        Player(const Player& _player)
        {
            playerName = _player.playerName;
            pokemonChoosen = _player.pokemonChoosen;
        }

        void SelectPokemon(int _choice)
        {
            switch ((PokemonNames)_choice)
            {
            case PokemonNames::Charmander : 
                    pokemonChoosen = Pokemon("Charmander", PokemonType::Fire,100);
                    break;

            case PokemonNames::Bulbasaur : 
                    pokemonChoosen = Pokemon("Bulbasaur", PokemonType::Grass, 100);
                    break;

            case PokemonNames::Squirtle : 
                    pokemonChoosen = Pokemon("Squirtle", PokemonType::Water, 100);
                    break;
            
            default :
                    pokemonChoosen = Pokemon("Pikachu", PokemonType::Electric, 100);
            }



        }

};


class ProfessorOak
{
    public :
        
        string name;

        Oak_Introduction(Player& _player)
        {
            cout << "Professor " << name << " : Hello there! Welcome to the world of Pokemon!" << endl;
            cout << "Professor " << name << " : My name is Oak. People call me the Pokemon Professor!" << endl;
            cout << "Professor " << name << " : But enough about me. Let's talk about you!" << endl;
            cout << "Professor " << name << " : First, tell me, what's your name?" << endl;

            cin >> _player.playerName;
        }

        Oak_PokemonOffer(Player& _player)
        {
            cout << "\nProfessor " << name  << " :  Ah, " << _player.playerName << "! What a fantastic name!" << endl;

            cout << "Professor " << name  << " : You must be eager to start your adventure." << endl;
            cout << "Professor " << name  << " : But first, you'll need a Pokemon of your own!" << endl;

            // Presenting Pokemon choices
            cout << "\n\nProfessor " << name << " : I have three Pokemon here with me." << endl;
            cout << "Professor " << name << " : They're all quite feisty!" << endl;
            cout << "Professor " << name << " : Choose wisely..." << endl;
            cout << "\n1. Charmander - The fire type. A real hothead!" << endl;
            cout << "2. Bulbasaur - The grass type. Calm and collected!" << endl;
            cout << "3. Squirtle - The water type. Cool as a cucumber!" << endl;

            // Step 3: Capture the Player’s Choice
            int pokemonChoosed;

            cout << "\nProfessor " << name << " : So, which one will it be? " << endl;
            cout << "\nEnter the number of your choice: ";

            cin >> pokemonChoosed;
            _player.SelectPokemon(pokemonChoosed);

            switch ((PokemonNames)pokemonChoosed)
            {
                case PokemonNames::Charmander : 
                    cout << "\nProfessor " << name << " : A fiery choice! " << _player.pokemonChoosen.pokemonName << " is yours! " << endl;
                    cout << "Professor " << name << " : " << _player.pokemonChoosen.pokemonName << " and you, " << _player.playerName << ", are going to be the best of friends! " << endl;
                    break;
                case PokemonNames::Bulbasaur :
                    cout << "\nProfessor " << name << " : A grassy choice! " << _player.pokemonChoosen.pokemonName << " is yours! " << endl;
                    cout << "Professor " << name << " : " << _player.pokemonChoosen.pokemonName << " and you, " << _player.playerName << ", are going to be the best of friends! " << endl;
                    break;
                case PokemonNames::Squirtle:
                    cout << "\nProfessor " << name << " : A watery choice! " << _player.pokemonChoosen.pokemonName << " is yours! " << endl;
                    cout << "Professor " << name << " : " << _player.pokemonChoosen.pokemonName << " and you, " << _player.playerName << ", are going to be the best of friends! " << endl;
                    break;
                default : 
                    cout << "\nProfessor " << name << " : Hmm, that doesn't seem right. " << endl;
                    cout << "Professor " << name << " : Let me choose for you..." << endl;
                    cout << "Professor " << name << " : Just kidding! Let's go with " << _player.pokemonChoosen.pokemonName << ", the surprise guest!" << endl;
                    cout << "Professor " << name << " : " << _player.pokemonChoosen.pokemonName << " and you, " << _player.playerName << ", are going to be the best of friends! " << endl;
                    break;
            }

        }
};


int main()
{

    ProfessorOak professor;
    Pokemon playerPokemon;
    Player trainer;

    //professor name 
    professor.name = "Oak";

    //player name
    trainer.playerName = "tranier";

    //default pokemon

    playerPokemon.pokemonName = "Bulbasaur";
    playerPokemon.typeOfPokemon = PokemonType::Grass;
    playerPokemon.health = 100;

    //professor oak introduction
    professor.Oak_Introduction(trainer);

    //professor oak offering pokemon to player
    professor.Oak_PokemonOffer(trainer);

    cout << "Professor " << professor.name << " : Your journey begins now! Get ready to explore the vast world of Pokemon!" << endl;

	return 0;
}