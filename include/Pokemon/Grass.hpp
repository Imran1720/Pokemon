#include <string>
#include <vector>

using namespace std;
class Pokemon;

namespace N_Pokemon
{
	struct Grass
	{
		string typeOfEnvironment;
		vector<Pokemon> wildPokemonList;
		int rateOfEncounter;
	};
}