#pragma once
#include "../../include/Pokemon/Pokemon.hpp"
#include "../../include/Utility/Utility.hpp"
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
    }

    Pokemon::Pokemon(string _name, N_Pokemon::PokemonType _type, int _heatlh, vector<Move> _pokemonMoves)
    {
        pokemonName = _name;
        typeOfPokemon = _type;
        health = _heatlh;
        moves = _pokemonMoves;
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

    void Pokemon::ReduceAttackPower(int reducedDamage)
    {
        attackPower -= reducedDamage;
        if (attackPower < 0)
        {
            attackPower = 0;
        }
    }

    int Pokemon::GetHealth()
    {
        return health;
    }

    void Pokemon::Attack(Move _selectedMove,Pokemon* target) 
    {
        target->TakeDamage(_selectedMove.power);
    }

    void Pokemon::SelectAndUseMoves(Pokemon* target)
    {
        PrintAvailabeMoves();
        
        int choice = SelectMove();
        Move selectedMove = moves[choice - 1];

        UseMove(selectedMove, target);
    }

    void Pokemon::PrintAvailabeMoves()
    {
        cout << pokemonName << "'s Availabe moves:" << endl;


        for (int i = 0; i < moves.size(); i++)
        {
            cout << i + 1 << ": " << moves[i].name << " (Power : " << moves[i].power << ")" << endl;

        }
    }


    int Pokemon::SelectMove()
    {
        int choice;
        //Utility::clearInputBuffer();
        cout << "Choose a move ";
        cin >> choice;

        while (choice < 1 ||choice> static_cast<int>(moves.size()))
        {
            cout << "Invalid Choice!!" << endl;
            cin >> choice;
        }

        return choice;
    }


    void Pokemon::UseMove(Move selectedMove, Pokemon* target)
    {
        cout << pokemonName << " used "<<selectedMove.name<< "!" << endl;
        
        Attack(selectedMove, target);

        Utility::PlayerWaitResponse();

        cout << "..." << endl;
        Utility::PlayerWaitResponse();


        if (target->IsFainted())
        {
            cout << target->GetPokemonName() << " fainted!" << endl;
        }
        else
        {
            cout << target->GetPokemonName() << " has " << target->GetHealth() << " HP left." << endl;
        }

        Utility::PlayerWaitResponse();
    }
}