#include "../../../include/Pokemon/Pokemons/Bulbasaur.hpp"

#include <iostream>

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		using namespace std;

		Bulbasaur::Bulbasaur() : Pokemon("Bulbasaur", PokemonType::Grass, 100, 35) {}

		void Bulbasaur::VineWhip(Pokemon& target)
		{
			cout << pokemonName << " uses Vine Whip on " << target.GetPokemonName() << "!" << endl;
			target.TakeDamage(20);
		}
	}
}