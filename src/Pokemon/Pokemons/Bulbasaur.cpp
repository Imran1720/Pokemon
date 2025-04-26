#include "../../../include/Pokemon/Pokemons/Bulbasaur.hpp"
#include "../../../include/Utility/Utility.hpp"

#include <iostream>

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		using namespace std;
		using namespace N_Utility;
		Bulbasaur::Bulbasaur() : Pokemon("Bulbasaur", PokemonType::Grass, 100, {
			Move("Vine Whip",25),
			Move("Tackle",10) }) {}

		void Bulbasaur::Attack(Move _currentMove,Pokemon* _opponentPokemon)
		{
			Pokemon::Attack(_currentMove, _opponentPokemon);

			if (_currentMove.moveName == "Vine Whip")
			{
				int secondHitChance = rand() % 2;
				if (secondHitChance == 1)
				{
					Pokemon::Attack(_currentMove, _opponentPokemon);
					cout << GetPokemonName() << " hits again with a second " << _currentMove.moveName << "!" << endl;
				}
				else
				{
					cout << _opponentPokemon->GetPokemonName() << " dodged the second hit!" << endl;
				}
			}
		}

		
	}
}