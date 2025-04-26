#pragma once
#include "..\include\Battle\BattleState.hpp"
#include "..\include\Character\Player\Player.hpp"

namespace N_Battle
{ 
	class BattleManager
	{
		public :
			void BrawlCommence(N_Character::N_Player::Player* _trainer, N_Pokemon::Pokemon* _opponentPokemon);
			static void EndBrawl();

		private :
			static BattleState battleState;
			void Brawl();
			void UpdateStateOfBrawl();
			void BrawlOutcome();
	};
}