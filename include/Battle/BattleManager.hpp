#pragma once
#include "..\include\Battle\BattleState.hpp"
#include "..\include\Character\Player\Player.hpp"

namespace N_Battle
{ 
	class BattleManager
	{
		public :
			void StartBattle(N_Player::Player& _player, N_Pokemon::Pokemon& _wildPokemon);

		private :
			BattleState battleState;
			void Battle(N_Pokemon::Pokemon& _playerPokemon, N_Pokemon::Pokemon& _wildPokemon);
			void UpdateBattleState();
			void HandleBattleOutcome();
	};
}