#include "../../../include/Pokemon/Pokemons/Zubat.hpp"

#include <iostream>

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		using namespace std;
		Zubat::Zubat() : Pokemon("Zubat", PokemonType::Poision, 100, 20) {}

		void Zubat::Attack(Pokemon* target)
		{
			SuperSonic(target);
		}

		void Zubat::SuperSonic(Pokemon* target)
		{
			cout << pokemonName << " uses Super Sonic on " << target->GetPokemonName() << endl;
			target->TakeDamage(20);
		}
	}
}