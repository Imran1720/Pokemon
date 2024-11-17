#include "BattleManager.hpp"
#include "Player.hpp"
#include "Utility.hpp"

#include <iostream>

using namespace std;

void BattleManager::StartBattle(Player& _player, Pokemon& _wildPokemon)
{
	cout << "A wild " << _wildPokemon.pokemonName << "Appeared!" << endl;
	BattleManager::Battle(_player.pokemonChoosen, _wildPokemon);
}

void BattleManager::Battle(Pokemon& _playerPokemon, Pokemon& _wildPokemon)
{
    while (!_playerPokemon.IsFainted() && !_wildPokemon.IsFainted())
    {
        _playerPokemon.Attack(_wildPokemon);
        if (!_wildPokemon.IsFainted())
        {
            _wildPokemon.Attack(_playerPokemon);
        }

        //cout << _playerPokemon.health << " : " << _wildPokemon.health << endl;
        //cout << (bool)_playerPokemon.IsFainted() << endl;
        Utility::PlayerWaitResponse();
    }

    BattleManager::HandleBattleOutcome(_playerPokemon, !_playerPokemon.IsFainted());
}

void BattleManager::HandleBattleOutcome(Pokemon& _playerPokemon, bool _playerWon)
{
    //cout << (bool)_playerPokemon.IsFainted() <<" : "<<_playerWon << endl;
    if (_playerWon)
    {
        cout << _playerPokemon.pokemonName << " is Victorious!! Keep an eye on your Pokemon's Health" << endl;

    }
    else
    {
        cout << "Oh-no!" << _playerPokemon.pokemonName << " fainted!! You need to visit the PokeCenter" << endl;
        Utility::PlayerWaitResponse();
        cout << "Game Over!" << endl;
    }

}


