#include "../../../include/Pokemon/Pokemons/Caterpie.hpp"
#include "../../../include/Utility/Utility.hpp"

#include <iostream>

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		using namespace std;
		using namespace N_Utility;

		Caterpie::Caterpie() : Pokemon("Caterpie", PokemonType::Bug, 100, {
			Move("Sticky Web",25),Move("Tackle",10)
			}) {}

		void Caterpie::Attack(Move _currentMove,Pokemon* _opponentPokemon)
		{
			Pokemon::Attack(_currentMove, _opponentPokemon);

			if (_currentMove.moveName == "Sticky Web")
			{
				int reducedDamage = 5;
				_opponentPokemon->ReduceAttackPower(reducedDamage);
				cout << _opponentPokemon->GetPokemonName() << "'s next attack will be reduced by " << reducedDamage << " damage!" << endl;
			}
		}

	}
}