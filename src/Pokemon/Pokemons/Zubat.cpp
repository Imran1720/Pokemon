#include "../../../include/Pokemon/Pokemons/Zubat.hpp"
#include "../../../include/Utility/Utility.hpp"
#include <iostream>

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		using namespace std;
		using namespace N_Utility;

		Zubat::Zubat() : Pokemon("Zubat", PokemonType::Poision, 100, {
			Move("Super Sonic",25),
			Move("Tackle",10),
			Move("Leech Life",10)
			}) {}

		void Zubat::Attack(Move _currentMove,Pokemon* _opponentPokemon)
		{
			Pokemon::Attack(_currentMove, _opponentPokemon);

			if (_currentMove.moveName == "Leech Life")
			{
				this->health += _currentMove.attackPower * 0.5;
				if (this->health > this->maxHealth)
				{
					this->health = this->maxHealth;
				}
				cout << "..and regained Health" << endl;
			}



		}

		
	}
}