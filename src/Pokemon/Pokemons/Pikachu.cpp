#include "../../../include/Pokemon/Pokemons/Pikachu.hpp"
#include "../../../include/Utility/Utility.hpp"
#include <iostream>

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		using namespace std;
		using namespace N_Utility;

		Pikachu::Pikachu() : Pokemon("Pikachu", PokemonType::Electric, 100, 15) {}

		void Pikachu::Attack(Pokemon* target)
		{
			ThunderShock(target);
		}

		void Pikachu::ThunderShock(Pokemon* target)
		{
			cout << pokemonName << " used Thunder Shock!" << endl;
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