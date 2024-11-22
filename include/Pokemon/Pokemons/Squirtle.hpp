#pragma once
#include "../../../include/Pokemon/Pokemon.hpp"

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		class Squirtle : public Pokemon
		{
		private:
			void WaterSplash(Pokemon* target);

		public:
			Squirtle();
			void Attack(Pokemon* target) override;
		};
	}
}