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

    void BattleManager::StartBattle(Player* _player, Pokemon* _wildPokemon)
    {
        battleState.playerPokemon = _player->pokemonChoosen;
        battleState.wildPokemon = _wildPokemon;
        battleState.playerTurn = true;
        battleState.battleOngoing = true;

	    cout << "A wild " << _wildPokemon->GetPokemonName() << " Appeared!" << endl;
	    BattleManager::Battle();
    }

    void BattleManager::Battle()
    {

        while (battleState.battleOngoing)
        {
            if (battleState.playerTurn)
            {
                battleState.playerPokemon->Attack(battleState.wildPokemon);
            }
            else
            {
                battleState.wildPokemon->Attack(battleState.playerPokemon);
            }

            battleState.playerTurn = !battleState.playerTurn;
            BattleManager::UpdateBattleState();
            //cout << _playerPokemon.health << " : " << _wildPokemon.health << endl;
            //cout << (bool)_playerPokemon.IsFainted() << endl;
            Utility::PlayerWaitResponse();
        }

        BattleManager::HandleBattleOutcome();
    }

    void BattleManager::UpdateBattleState()
    {
        if (battleState.playerPokemon->IsFainted())
        {
            battleState.battleOngoing = false;
        }
        else if(battleState.wildPokemon->IsFainted())
        {
            battleState.battleOngoing = false;
        }
    }

    void BattleManager::HandleBattleOutcome()
    {
        //cout << (bool)_playerPokemon.IsFainted() <<" : "<<_playerWon << endl;
        if (!battleState.playerPokemon->IsFainted())
        {
            cout << battleState.playerPokemon->GetPokemonName() << " is Victorious!! Keep an eye on your Pokemon's Health" << endl;

        }
        else
        {
            cout << "Oh-no!" << battleState.playerPokemon->GetPokemonName() << " fainted!! You need to visit the PokeCenter" << endl;
            Utility::PlayerWaitResponse();
            cout << "Game Over!" << endl;
        }

    }



}