#pragma once
#include "../../include/Pokemon/Pokemon.hpp"
#include "../../include/Utility/Utility.hpp"
#include "../../include/Pokemon/StatusEffects/ParalyzedEffect.hpp"
#include <string>
#include <vector>
#include <iostream>

using namespace std;

namespace N_Pokemon
{
    using namespace N_Utility;

    Pokemon::Pokemon()
    {
        pokemonName = "Pikachu";
        typeOfPokemon = PokemonType::Electric;
        health = 10;
        attackPower = 12;
        appliedEffect = nullptr;
    }

    Pokemon::Pokemon(string _name, N_Pokemon::PokemonType _type, int _heatlh, vector<Move> _pokemonMoves)
    {
        pokemonName = _name;
        typeOfPokemon = _type;
        health = _heatlh;
        moves = _pokemonMoves;
        appliedEffect = nullptr;
    }

    Pokemon::Pokemon(const N_Pokemon::Pokemon* _pokemon)
    {

        pokemonName = _pokemon->pokemonName;
        typeOfPokemon = _pokemon->typeOfPokemon;
        health = _pokemon->health;
        attackPower = _pokemon->attackPower;
        moves = _pokemon->moves;
    }

    void Pokemon::TakeDamage(int _damage)
    {
        health -= _damage;
        if (health < 0)
        {
            health = 0;
        }
    }

    bool Pokemon::IsFainted()
    {
        return health <= 0 ? true : false;
    }

    void Pokemon::Heal()
    {
        health = maxHealth;
    }

    string Pokemon::GetPokemonName() {
        return pokemonName;
    }

    void Pokemon::ReduceAttackPower(int _damage)
    {
        attackPower -= _damage;
        if (attackPower < 0)
        {
            attackPower = 0;
        }
    }

    int Pokemon::GetHealth()
    {
        return health;
    }

    void Pokemon::Attack(Move _currentMove, Pokemon* _opponentPokemon)
    {
        _opponentPokemon->TakeDamage(_currentMove.attackPower);
    }

    void Pokemon::SelectAndUseMoves(Pokemon* _opponentPokemon)
    {
        PrintAvailabeMoves();

        int choice = SelectMove();
        Move selectedMove = moves[choice - 1];

        UseMove(selectedMove, _opponentPokemon);
    }

    void Pokemon::PrintAvailabeMoves()
    {
        cout << pokemonName << "'s Availabe moves:" << endl;


        for (int i = 0; i < moves.size(); i++)
        {
            cout << i + 1 << ": " << moves[i].moveName << " (Power : " << moves[i].attackPower << ")" << endl;

        }
    }


    int Pokemon::SelectMove()
    {
        int choice;
        //Utility::clearInputBuffer();
        cout << "Choose a move ";
        cin >> choice;

        while (choice < 1 || choice> static_cast<int>(moves.size()))
        {
            cout << "Invalid Choice!!" << endl;
            cin >> choice;
        }

        return choice;
    }


    void Pokemon::UseMove(Move _currentMove, Pokemon* _opponentPokemon)
    {
        cout << pokemonName << " used " << _currentMove.moveName << "!" << endl;

        Attack(_currentMove, _opponentPokemon);

        Utility::PlayerWaitResponse();

        cout << "..." << endl;
        Utility::PlayerWaitResponse();


        if (_opponentPokemon->IsFainted())
        {
            cout << _opponentPokemon->GetPokemonName() << " fainted!" << endl;
        }
        else
        {
            cout << _opponentPokemon->GetPokemonName() << " has " << _opponentPokemon->GetHealth() << " HP left." << endl;
        }

        Utility::PlayerWaitResponse();
    }


    bool Pokemon::CanAttack()
    {
        if (appliedEffect == nullptr)
        {
            return true;
        }

        else
            return appliedEffect->TurnEndEffect(this);
    }

    bool Pokemon::CanApplyEffect()
    {
        return appliedEffect == nullptr;
    }

    void Pokemon::ApplyEffect(StatusEffectType effectToApply)
    {
        switch (effectToApply)
        {
        case StatusEffectType::Paralyzed:
        {
            appliedEffect = new ParalyzedEffect();
            appliedEffect->ApplyEffect(this);
            break;
        }
        default:
            appliedEffect = nullptr;
        }
    }

    void Pokemon::ClearEffect()
    {
        appliedEffect = nullptr;
    }
}