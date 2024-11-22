#pragma once
#include "../../include/Pokemon/Pokemon.hpp"
#include <string>
#include <vector>


namespace N_Pokemon
{
	
	using namespace std;
	
	struct Grass
	{
		string typeOfEnvironment;
		vector<Pokemon*> wildPokemonList;
		int rateOfEncounter;
	};
}