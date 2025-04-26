#include "../../../include/Pokemon/Pokemons/Pikachu.hpp"
#include "../../../include/Utility/Utility.hpp"
#include <iostream>

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		using namespace std;
		using namespace N_Utility;

		Pikachu::Pikachu() : Pokemon("Pikachu", PokemonType::Electric, 100, {
			Move("Thunder Shock",25),Move("Tackle",10)
			}) {}

		void Pikachu::Attack(Move _currentMove,Pokemon* _opponentPokemon)
		{

			if (_currentMove.moveName == "Thunder Shock")
			{
				if (rand() % 100 < 80)
				{
					Pokemon::Attack(_currentMove, _opponentPokemon);
					cout << "A successful hit!" << endl;
				}
				else
				{
					cout << "It Missed!" << endl;
				}
			}
			else
			{
				Pokemon::Attack(_currentMove,_opponentPokemon);
			}
		}

		
	}
}