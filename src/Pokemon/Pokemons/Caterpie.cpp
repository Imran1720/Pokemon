#include "../../../include/Pokemon/Pokemons/Caterpie.hpp"

#include <iostream>

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		using namespace std;
		Caterpie::Caterpie() : Pokemon("Caterpie", PokemonType::Bug, 100, 10) {}

		void Caterpie::BugBite(Pokemon& target)
		{
			cout << pokemonName << " uses Bug Bite on " << target.pokemonName << endl;
			target.TakeDamage(20);
		}
	}
}