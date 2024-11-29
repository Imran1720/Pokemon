#pragma once
#include "../include/Pokemon/Pokemon.hpp"
#include "../include/Pokemon/Grass.hpp"
#include <vector>


using namespace std;

namespace N_Battle
{
	class WildPokemonInteractor
	{
		public:
			WildPokemonInteractor();
			N_Pokemon::Pokemon* GetRandomPokemon(const N_Pokemon::Grass& grass);


	};

}
