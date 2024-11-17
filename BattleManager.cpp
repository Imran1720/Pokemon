
#include "BattleManager.hpp"
#include "Player.hpp"
#include "Utility.hpp"

#include <iostream>

using namespace std;

void BattleManager::StartBattle(Player& _player, Pokemon& _wildPokemon)
{
    battleState.playerPokemon = &_player.pokemonChoosen;
    battleState.wildPokemon = &_wildPokemon;
    battleState.playerTurn = true;
    battleState.battleOngoing = true;

	cout << "A wild " << _wildPokemon.pokemonName << "Appeared!" << endl;
	BattleManager::Battle(_player.pokemonChoosen, _wildPokemon);
}

void BattleManager::Battle(Pokemon& _playerPokemon, Pokemon& _wildPokemon)
{
    while (battleState.battleOngoing)
    {
        if (battleState.playerTurn)
        {
            battleState.playerPokemon->Attack(*battleState.wildPokemon);
        }
        else
        {
            battleState.wildPokemon->Attack(*battleState.playerPokemon);
        }

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
    if (battleState.playerPokemon->IsFainted())
    {
        cout << battleState.playerPokemon->pokemonName << " is Victorious!! Keep an eye on your Pokemon's Health" << endl;

    }
    else
    {
        cout << "Oh-no!" << battleState.playerPokemon->pokemonName << " fainted!! You need to visit the PokeCenter" << endl;
        Utility::PlayerWaitResponse();
        cout << "Game Over!" << endl;
    }

}


