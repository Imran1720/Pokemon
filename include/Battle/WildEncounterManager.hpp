#include <vector>

struct Grass;
class Pokemon;

using namespace std;

class WildEncounterManager
{
	public:
		WildEncounterManager();
		Pokemon GetRandomPokemonFromGrass(const Grass& grass);


};