#include <string>
using namespace std;

namespace N_Pokemon
{
    enum class PokemonType;
    class Pokemon
    {
    public:
        string pokemonName;
        PokemonType typeOfPokemon;
        int health,maxHealth=100;
        int attackPower;

        Pokemon();
        Pokemon(string _name, PokemonType _type, int _heatlh,int _attackPower);
        Pokemon(const Pokemon& _pokemon);
    
        void Attack(Pokemon& _target);
        void TakeDamage(int _damage);
        //void Battle(Pokemon& _playerPokemon, Pokemon& _wildPokemon);
        bool IsFainted();
        void Heal();
    };
}