#include "../../include/Pokemon/Grass.hpp"

class Player;

namespace N_Main
{
	class Game
	{
		private:
			N_Pokemon::Grass forestGrass;

		public:
			Game();

			void GameLoop(Player& _player);

		
	};

}