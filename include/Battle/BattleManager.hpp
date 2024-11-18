#include "..\include\Battle\BattleState.hpp"
class Player;

namespace N_Battle
{ 
class BattleManager
{
	public :
		void StartBattle(Player& _player, Pokemon& _wildPokemon);

	private :
		BattleState battleState;
		void Battle(Pokemon& _playerPokemon, Pokemon& _wildPokemon);
		void UpdateBattleState();
		void HandleBattleOutcome();
};
}