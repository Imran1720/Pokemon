#pragma once
#include "../../../include/Pokemon/Pokemon.hpp"

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		class Bulbasaur : public Pokemon
		{
		private:
			void VineWhip(Pokemon* target);

		public:
			Bulbasaur();
			void Attack(Pokemon* target) override;
		};
	}
}