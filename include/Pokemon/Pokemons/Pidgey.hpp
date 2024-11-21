#pragma once
#include "../../../include/Pokemon/Pokemon.hpp"

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		class Pidgey : public Pokemon
		{
		private:
			void WindAttack(Pokemon& target);

		public:
			Pidgey();
		};
	}
}