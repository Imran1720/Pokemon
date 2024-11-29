#pragma once
#include "..\include\Battle\BattleState.hpp"
#include "..\include\Character\Player\Player.hpp"

namespace N_Battle
{ 
	class BattleManager
	{
		public :
			void StartBattle(N_Character::N_Player::Player* _player, N_Pokemon::Pokemon* _wildPokemon);
			static void StopBattle();

		private :
			static BattleState battleState;
			void Battle();
			void UpdateBattleState();
			void HandleBattleOutcome();
	};
}