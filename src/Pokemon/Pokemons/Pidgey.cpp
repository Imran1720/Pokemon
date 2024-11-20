#include "../../../include/Pokemon/Pokemons/Pidgey.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"

#include <iostream>

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		using namespace std;

		Pidgey::Pidgey() : Pokemon("Pidgey", PokemonType::Normal, 100, 35) {}

		void Pidgey::WingAttack(Pokemon& target)
		{
			cout << pokemonName << " uses Wing Attack on " << target.pokemonName << "!" << endl;
			target.TakeDamage(20);
		}
	}
}


