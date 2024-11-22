#include "../../../include/Pokemon/Pokemons/Caterpie.hpp"
#include "../../../include/Utility/Utility.hpp"

#include <iostream>

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		using namespace std;
		using namespace N_Utility;

		Caterpie::Caterpie() : Pokemon("Caterpie", PokemonType::Bug, 100, 10) {}

		void Caterpie::Attack(Pokemon* target)
		{
			BugBite(target);
		}

		void Caterpie::BugBite(Pokemon* target)
		{
			cout << pokemonName << " used Bug Bite!" << endl;
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