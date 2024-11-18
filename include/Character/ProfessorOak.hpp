#include <string>

using namespace std;

class Player;

namespace N_Character {


    class ProfessorOak
    {
    public:

        string name;

        ProfessorOak(string _name);
        void Oak_Introduction(Player& _player);
        void Oak_PokemonOffer(Player& _player);
        void ExplainMainQuest(Player& _player);

    };

}