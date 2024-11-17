#include "WildEncounterManager.hpp"
#include "Grass.hpp"
#include "Pokemon.hpp"
#include <cstdlib>
#include <ctime>

WildEncounterManager::WildEncounterManager()
{
	srand(time(0));
}

Pokemon WildEncounterManager::GetRandomPokemonFromGrass(const Grass& _forestGrass)
{
	int randomIndex = rand() % _forestGrass.wildPokemonList.size();

	return _forestGrass.wildPokemonList[randomIndex];
}