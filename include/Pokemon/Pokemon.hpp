#pragma once
#include "../../include/Pokemon/Move.hpp"
#include "../Pokemon/PokemonType.hpp"
#include "../Pokemon/IStatusEffect.hpp"
#include "../Pokemon/StatusEffects/StatusEffectType.hpp"
#include <string>
#include <vector>


namespace N_Pokemon
{

    using namespace std;
    using namespace N_StatusEffects;

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
        IStatusEffect* appliedEffect;

        bool CanAttack();
        void ApplyEffect(StatusEffectType effectToApply);
        void ClearEffect();
        bool CanApplyEffect();

    private:
        void PrintAvailabeMoves();
        int SelectMove();
        void UseMove(Move selectedMove, Pokemon* target);

    };

}