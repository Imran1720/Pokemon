#include "../../../include/Pokemon/Pokemons/Bulbasaur.hpp"
#include "../../../include/Utility/Utility.hpp"

#include <iostream>

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		using namespace std;
		using namespace N_Utility;
		Bulbasaur::Bulbasaur() : Pokemon("Bulbasaur", PokemonType::Grass, 100, 35) {}

		void Bulbasaur::Attack(Pokemon* target)
		{
			VineWhip(target);
		}

		void Bulbasaur::VineWhip(Pokemon* target)
		{

			cout << pokemonName << " used Vin Whip!" << endl;
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