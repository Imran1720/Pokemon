#pragma once
#include "../include/Battle/BattleManager.hpp"
#include "../include/Character/Player/Player.hpp"
#include "../include/Utility/Utility.hpp"

#include <iostream>



namespace N_Battle
{
    using namespace std;
    using namespace N_Utility;
    using namespace N_Character::N_Player;
    using namespace N_Pokemon;

    //WHY?
    BattleState BattleManager::battleState;

    void BattleManager::BrawlCommence(Player* _trainer, Pokemon* _opponentPokemon)
    {
        battleState.trainerPokemon = _trainer->pokemonChoosen;
        battleState.opponentPokemon = _opponentPokemon;
        battleState.trainersTurn = true;
        battleState.brawlEnded = false;


	    cout << "A wild " << _opponentPokemon->GetPokemonName() << " Appeared!" << endl;
	    BattleManager::Brawl();
    }

    void BattleManager::Brawl()
    {

        while (!battleState.brawlEnded)
        {
            if (battleState.trainersTurn)
            {
                battleState.trainerPokemon->SelectAndUseMoves(battleState.opponentPokemon);
            }
            else
            {
                battleState.opponentPokemon->SelectAndUseMoves(battleState.trainerPokemon);
            }

            BattleManager::UpdateStateOfBrawl();
            battleState.trainersTurn = !battleState.trainersTurn;
            Utility::PlayerWaitResponse();
        }

        BattleManager::BrawlOutcome();
    }

    void BattleManager::UpdateStateOfBrawl()
    {
        if (battleState.trainerPokemon->IsFainted())
        {
            battleState.brawlEnded = true;
        }
        else if(battleState.opponentPokemon->IsFainted())
        {
            battleState.brawlEnded = true;
        }
    }

    void BattleManager::BrawlOutcome()
    {
        //cout << (bool)_playerPokemon.IsFainted() <<" : "<<_playerWon << endl;
        if (!battleState.trainerPokemon->IsFainted())
        {
            cout << battleState.trainerPokemon->GetPokemonName() << " is Victorious!! Keep an eye on your Pokemon's Health" << endl;

        }
        else if(battleState.trainerPokemon->IsFainted())
        {
            cout << "Oh-no!" << battleState.trainerPokemon->GetPokemonName() << " fainted!! You need to visit the PokeCenter" << endl;
            Utility::PlayerWaitResponse();
            cout << "Game Over!" << endl;
        }

    }

    void BattleManager::EndBrawl()
    {
        battleState.brawlEnded = true;
    }

}