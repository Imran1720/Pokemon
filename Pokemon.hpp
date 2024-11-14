#include <string>

enum class PokemonType;

class Pokemon
{
public:
    string pokemonName;
    PokemonType typeOfPokemon;
    int health;

    Pokemon();
    Pokemon(string _name, PokemonType _type, int _heatlh);
    Pokemon(const Pokemon& _pokemon);
    void Attack();
};

