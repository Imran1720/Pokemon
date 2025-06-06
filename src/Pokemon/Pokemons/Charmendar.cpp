#include "../../../include/Pokemon/Pokemons/Charmendar.hpp"
#include "../../../include/Utility/Utility.hpp"
#include <iostream>

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		using namespace std;
		using namespace N_Utility;

		Charmendar::Charmendar() : Pokemon("Charmendar", PokemonType::Fire, 100, {
			Move("Flame Burst",20),Move("Tackle",10),Move("Blazing Charge",35)
			}) {}

		void Charmendar::Attack(Move _currentMove,Pokemon* _opponentPokemon)
		{
			Pokemon::Attack(_currentMove, _opponentPokemon);

			if (_currentMove.moveName == "Blazing Charge")
			{
				this->TakeDamage(10);

				cout << this->GetPokemonName() << " takes 10 recoil damage from Blazing Charge!" << endl;
				N_Utility::Utility::PlayerWaitResponse();
			}
		}

		
	}
}