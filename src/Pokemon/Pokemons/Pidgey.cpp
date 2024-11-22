#include "../../../include/Pokemon/Pokemons/Pidgey.hpp"
#include "../../../include/Utility/Utility.hpp"
#include <iostream>

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		using namespace std;
		using namespace N_Utility;

		Pidgey::Pidgey() : Pokemon("Pidgey", PokemonType::Normal, 100, 35) {}

		void Pidgey::Attack(Pokemon* target)
		{
			WindAttack(target);
		}

		void Pidgey::WindAttack(Pokemon* target)
		{
			cout << pokemonName << " used Wind Attack!" << endl;
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