#include <vector>

struct Grass;
class Pokemon;

using namespace std;

namespace N_Battle
{


class WildEncounterManager
{
	public:
		WildEncounterManager();
		Pokemon GetRandomPokemonFromGrass(const Grass& grass);


};

}
