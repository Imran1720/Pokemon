#include "../../../include/Pokemon/Pokemons/Pidgey.hpp"

#include <iostream>

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		using namespace std;
		Pidgey::Pidgey() : Pokemon("Pidgey", PokemonType::Normal, 100, 35) {}

		void Pidgey::WindAttack(Pokemon& target)
		{
			cout << pokemonName << " uses Wind Attack on " << target.pokemonName << endl;
			target.TakeDamage(20);
		}
	}
}