#pragma once 
#include "../../../Include/Pokemon/Pokemon.hpp"

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		class Caterpie : public Pokemon
		{
			Caterpie();

			void BugBite(Pokemon& target);
		};
	}
}