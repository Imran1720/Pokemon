#pragma once
#include "../../../include/Pokemon/Pokemon.hpp"

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		class Zubat : public Pokemon
		{
		
		public:
			Zubat();
			void Attack(Move _selectedMove,Pokemon* target) override;
			
		};
	}
}