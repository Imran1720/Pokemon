#include "../../../include/Pokemon/Pokemons/Zubat.hpp"
#include "../../../include/Utility/Utility.hpp"
#include <iostream>

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		using namespace std;
		using namespace N_Utility;

		Zubat::Zubat() : Pokemon("Zubat", PokemonType::Poision, 100, 20) {}

		void Zubat::Attack(Pokemon* target)
		{
			SuperSonic(target);
		}

		void Zubat::SuperSonic(Pokemon* target)
		{
			cout << pokemonName << " used Super Sonic!" << endl;
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