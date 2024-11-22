#pragma once
#include "../../../include/Pokemon/Pokemon.hpp"

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		class Charmendar : public Pokemon
		{
			private:
				void FlameBurst(Pokemon* target);

			public:
				Charmendar();
				void Attack(Pokemon* target) override;
		};
	}
}