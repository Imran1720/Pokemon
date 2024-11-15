#include <string>
#include <vector>
#include "PokemonType.hpp"

using namespace std;


struct Grass
{
	string typeOfEnvironment;
	vector<Pokemon> wildPokemonList;
	int rateOfEncounter;
};

Grass wildPokemon = {
	"Forest",
	{{"Pidgey",PokemonType::Normal,40},{"Caterpie",PokemonType::Grass,35}},
	70
};

Grass caveGrass = {
	"Cave",
	{{"Zoobat",PokemonType::Poision,30},{"Geodude",PokemonType::Rock,50}},
	80
};