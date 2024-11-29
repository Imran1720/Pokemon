#pragma once
#include "../../../include/Pokemon/Pokemons/Pidgey.hpp"
#include "../../../include/Battle/BattleManager.hpp"
#include "../../../include/Utility/Utility.hpp"
#include <iostream>

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		using namespace std;
		using namespace N_Utility;

		Pidgey::Pidgey() : Pokemon("Pidgey", PokemonType::Normal, 100, {
			Move("Wind Attack",25),Move("Tackle",10),Move("Gust",5)
			}) {}

		void Pidgey::Attack(Move _selectedMove,Pokemon* target)
		{
			Pokemon::Attack(_selectedMove, target);

			if (_selectedMove.name == "Gust")
			{
				if (rand() % 100 < 20)
				{
					cout << "...and blew the opponent away" << endl;
					N_Battle::BattleManager::StopBattle();
					N_Utility::Utility::PlayerWaitResponse();
				}
			}
		}

	}
}