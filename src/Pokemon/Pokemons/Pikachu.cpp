#include "../../../include/Pokemon/Pokemons/Pikachu.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"

#include <iostream>

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		using namespace std;

		Pikachu::Pikachu() : Pokemon("Pikachu", PokemonType::Electric, 100, 15) {}

		void Pikachu::ThunderShock(Pokemon& target)
		{
			cout << pokemonName << " uses Thunder Shock on " << target.pokemonName << "!" << endl;
			target.TakeDamage(20);
		}
	}
}