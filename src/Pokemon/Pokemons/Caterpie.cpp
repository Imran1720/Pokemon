#include "../../../include/Pokemon/Pokemons/Caterpie.hpp"
#include "../../../include/Utility/Utility.hpp"

#include <iostream>

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		using namespace std;
		using namespace N_Utility;

		Caterpie::Caterpie() : Pokemon("Caterpie", PokemonType::Bug, 100, {
			Move("Sticky Web",25),Move("Tackle",10)
			}) {}

		void Caterpie::Attack(Move _selectedMove,Pokemon* target)
		{
			Pokemon::Attack(_selectedMove, target);

			if (_selectedMove.name == "Sticky Web")
			{
				int reducedDamage = 5;
				target->ReduceAttackPower(reducedDamage);
				cout << target->GetPokemonName() << "'s next attack will be reduced by " << reducedDamage << " damage!" << endl;
			}
		}

	}
}