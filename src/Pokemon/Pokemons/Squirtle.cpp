#include "../../../include/Pokemon/Pokemons/Squirtle.hpp"

#include <iostream>

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		using namespace std;

		Squirtle::Squirtle() : Pokemon("Squirtle", PokemonType::Water, 100, 35) {}

		void Squirtle::WaterSplash(Pokemon& target)
		{
			cout << pokemonName << " uses Water Splash on " << target.GetPokemonName() << "!" << endl;
			target.TakeDamage(20);
		}
	}
}