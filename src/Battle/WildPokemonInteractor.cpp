#include "../include/Battle/WildPokemonInteractor.hpp"
#include "../include/Pokemon/Grass.hpp"
#include "..\include\Pokemon\Pokemon.hpp"

#include <cstdlib>
#include <ctime>

using namespace std;

namespace N_Battle
{

	WildPokemonInteractor::WildPokemonInteractor()
	{
		srand(time(0));
	}

	N_Pokemon::Pokemon* WildPokemonInteractor::GetRandomPokemon(const N_Pokemon::Grass& _forestGrass)
	{
		int randomIndex = rand() % _forestGrass.wildPokemonList.size();

		return _forestGrass.wildPokemonList[randomIndex];
	}
}