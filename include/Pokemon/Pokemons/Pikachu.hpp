#pragma once
#include "../../../include/Pokemon/Pokemon.hpp"

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		class Pikachu : public Pokemon
		{

		public:
			Pikachu();
			void Attack(Move _selectedMove,Pokemon* target) override;
		};
	}
}