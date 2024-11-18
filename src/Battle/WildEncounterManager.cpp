#include "../include/Battle/WildEncounterManager.hpp"
#include "../include/Pokemon/Grass.hpp"
#include "..\include\Pokemon\Pokemon.hpp"

#include <cstdlib>
#include <ctime>

namespace N_Battle
{

WildEncounterManager::WildEncounterManager()
{
	srand(time(0));
}

Pokemon WildEncounterManager::GetRandomPokemonFromGrass(const Grass& _forestGrass)
{
	int randomIndex = rand() % _forestGrass.wildPokemonList.size();

	return _forestGrass.wildPokemonList[randomIndex];
}
}