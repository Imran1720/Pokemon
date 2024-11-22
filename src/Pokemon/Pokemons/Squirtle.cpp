#include "../../../include/Pokemon/Pokemons/Squirtle.hpp"
#include "../../../include/Utility/Utility.hpp"
#include <iostream>

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		using namespace std;
		using namespace N_Utility;

		Squirtle::Squirtle() : Pokemon("Squirtle", PokemonType::Water, 100, 35) {}

		void Squirtle::Attack(Pokemon* target)
		{
			WaterSplash(target);
		}

		void Squirtle::WaterSplash(Pokemon* target)
		{
			cout << pokemonName << " used Water Splash!" << endl;
			Utility::PlayerWaitResponse();

			cout << "..." << endl;
			Utility::PlayerWaitResponse();

			target->TakeDamage(20);

			if (target->IsFainted())
			{
				cout << target->GetPokemonName() << " fainted!" << endl;
			}
			else
			{
				cout << target->GetPokemonName() << " has " << target->GetHealth() << " HP left." << endl;
			}

			Utility::PlayerWaitResponse();
		}
	}
}