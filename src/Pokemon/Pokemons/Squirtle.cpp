#include "../../../include/Pokemon/Pokemons/Squirtle.hpp"
#include "../../../include/Utility/Utility.hpp"
#include <iostream>

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		using namespace std;
		using namespace N_Utility;

		Squirtle::Squirtle() : Pokemon("Squirtle", PokemonType::Water, 100, {
			Move("Water Splash",35),
			Move("Tackle",10),
			Move("Rapid Spin",5)
			}) {}

		void Squirtle::Attack(Move _selectedMove, Pokemon* target)
		{
			Pokemon::Attack(_selectedMove, target);

			if (_selectedMove.name == "Rapid Spin")
			{
				int hits = (rand() % 4) + 2;

				for (int i = 0; i < hits; i++)
				{
					Pokemon::Attack(_selectedMove, target);
				}

				cout << "...and hit " << hits << " times!" << endl;
			}
		}

		
	}
}