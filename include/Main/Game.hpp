#pragma once
#include "../../include/Pokemon/Grass.hpp"
#include "../../include/Character/Player/Player.hpp"


namespace N_Main
{
	class Game
	{
		private:
			N_Pokemon::Grass forestGrass;

		public:
			Game();

			void GameLoop(N_Player::Player& _player);

		
	};

}