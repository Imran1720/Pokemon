#include <string>

enum class PokemonType;

using namespace std;

class Pokemon
{
public:
    string pokemonName;
    PokemonType typeOfPokemon;
    int health,maxHealth;

    

    Pokemon();
    Pokemon(string _name, PokemonType _type, int _heatlh);
    Pokemon(const Pokemon& _pokemon);
    
    void Attack(Pokemon& _target);
    void TakeDamage(int _damage);
    void Battle(Pokemon& _playerPokemon, Pokemon& _wildPokemon);
    bool IsFainted();
};

