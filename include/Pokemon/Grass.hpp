#pragma once
#include "../../include/Pokemon/Pokemon.hpp"
#include <string>
#include <vector>

using namespace std;

namespace N_Pokemon
{
	struct Grass
	{
		string typeOfEnvironment;
		vector<N_Pokemon::Pokemon> wildPokemonList;
		int rateOfEncounter;
	};
}