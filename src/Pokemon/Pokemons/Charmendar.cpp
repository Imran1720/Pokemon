#include "../../../include/Pokemon/Pokemons/Charmendar.hpp"

#include <iostream>

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		using namespace std;

		Charmendar::Charmendar() : Pokemon("Charmendar", PokemonType::Fire, 100, 35) {}

		void Charmendar::FlameBurst(Pokemon& target)
		{
			cout << pokemonName << " uses Flame Burst on " << target.GetPokemonName() << "!" << endl;
			target.TakeDamage(20);
		}
	}
}