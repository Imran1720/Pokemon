#include "../../../include/Pokemon/Pokemons/Bulbasaur.hpp"
#include "../../../include/Utility/Utility.hpp"

#include <iostream>

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		using namespace std;
		using namespace N_Utility;
		Bulbasaur::Bulbasaur() : Pokemon("Bulbasaur", PokemonType::Grass, 100, {
			Move("Vine Whip",25),
			Move("Tackle",10) }) {}

		void Bulbasaur::Attack(Move _selectedMove,Pokemon* target)
		{
			Pokemon::Attack(_selectedMove, target);

			if (_selectedMove.name == "Vine Whip")
			{
				int secondHitChance = rand() % 2;
				if (secondHitChance == 1)
				{
					Pokemon::Attack(_selectedMove, target);
					cout << GetPokemonName() << " hits again with a second " << _selectedMove.name << "!" << endl;
				}
				else
				{
					cout << target->GetPokemonName() << " dodged the second hit!" << endl;
				}
			}
		}

		
	}
}