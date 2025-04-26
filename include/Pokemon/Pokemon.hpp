#pragma once
#include "../../include/Pokemon/Move.hpp"
#include "../Pokemon/PokemonType.hpp"
#include "../../include/Pokemon/IStatusEffect.hpp"
#include "../../include/Pokemon/StatusEffects/StatusEffectType.hpp"
#include <string>
#include <vector>


namespace N_Pokemon
{

    using namespace std;
    using namespace N_Pokemon::N_StatusEffects;

    class Pokemon
    {
    protected:
        string pokemonName;
        PokemonType typeOfPokemon;
        int health;
        int maxHealth = 100;
        int attackPower;

    public:
        //variables
        vector<Move> moves;
        IStatusEffect* appliedEffect;

        //constructors
        Pokemon();
        Pokemon(string _name, PokemonType _type, int _heatlh, vector<Move> _pokemonMoves);
        Pokemon(const Pokemon* _pokemon);

        //functions
        virtual void Attack(Move _currentMove, Pokemon* _opponentPokemon) = 0;
        void TakeDamage(int _damage);
        bool IsFainted();
        void Heal();

        int GetHealth();
        string GetPokemonName();
        void ReduceAttackPower(int _damage);
        void SelectAndUseMoves(Pokemon* _oppenentPokemon);

        bool CanAttack();
        void ApplyEffect(StatusEffectType _effectToApply);
        void ClearEffect();
        bool CanApplyEffect();

    private:
        void PrintAvailabeMoves();
        int SelectMove();
        void UseMove(Move _currentMove, Pokemon* _opponentPokemon);

    };

}