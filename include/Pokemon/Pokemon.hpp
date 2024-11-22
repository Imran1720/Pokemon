#pragma once
#include "../../include/Pokemon/Move.hpp"
#include "../Pokemon/PokemonType.hpp"
#include <string>
#include <vector>
using namespace std;


namespace N_Pokemon
{

    class Pokemon
    {
    protected:
        string pokemonName;
        PokemonType typeOfPokemon;
        int health;
        int maxHealth = 100;
        int attackPower;

    public:
        vector<Move> moves;

        Pokemon();
        Pokemon(string _name, PokemonType _type, int _heatlh, vector<Move> _pokemonMoves);
        Pokemon(const Pokemon* _pokemon);
    
        virtual void Attack(Move _selectedMove,Pokemon* _target) =0;
        void TakeDamage(int _damage);
        bool IsFainted();
        void Heal();

        int GetHealth();
        string GetPokemonName();
        void ReduceAttackPower(int reducedDamage);
        void SelectAndUseMoves(Pokemon* target);


    private:
        void PrintAvailabeMoves();
        int SelectMove();
        void UseMove(Move selectedMove, Pokemon* target);

    };

}