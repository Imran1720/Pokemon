#pragma once
#include "../../../include/Pokemon/Pokemon.hpp"

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		class Pidgey : public Pokemon
		{
		public:
			Pidgey();
			void WindAttack(Pokemon& target);
		};
	}
}