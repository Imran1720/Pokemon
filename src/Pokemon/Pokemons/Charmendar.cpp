#include "../../../include/Pokemon/Pokemons/Charmendar.hpp"
#include "../../../include/Utility/Utility.hpp"
#include <iostream>

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		using namespace std;
		using namespace N_Utility;

		Charmendar::Charmendar() : Pokemon("Charmendar", PokemonType::Fire, 100, 35) {}

		void Charmendar::Attack(Pokemon* target)
		{
			FlameBurst(target);
		}

		void Charmendar::FlameBurst(Pokemon* target)
		{
			cout << pokemonName << " used Flame Burst!" << endl;
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
				cout<< target->GetPokemonName() << " has "<< target->GetHealth() << " HP left."  << endl;
			}

			Utility::PlayerWaitResponse();

		}
	}
}