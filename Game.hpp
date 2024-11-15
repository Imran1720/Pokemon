#include "Grass.hpp"

class Player;

class Game
{
	public:
		Game();

		void GameLoop(Player& _player);

		
	private:
		Grass forestGrass;

};


