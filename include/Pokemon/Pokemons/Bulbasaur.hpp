#pragma once
#include "../../../include/Pokemon/Pokemon.hpp"

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		class Bulbasaur : public Pokemon
		{

		public:
			Bulbasaur();
			void Attack(Move _selectedMove,Pokemon* target) override;
		};
	}
}