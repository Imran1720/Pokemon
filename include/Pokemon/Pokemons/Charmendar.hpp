#pragma once
#include "../../../include/Pokemon/Pokemon.hpp"

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		class Charmendar : public Pokemon
		{
			public:
				Charmendar();
				void Attack(Move _selectedMove,Pokemon* target) override;
		};
	}
}