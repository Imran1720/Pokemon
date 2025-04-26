#pragma once
#include "../include/Pokemon/Pokemon.hpp"


namespace N_Battle {

	struct BattleState
	{
		N_Pokemon::Pokemon* trainerPokemon;
		N_Pokemon::Pokemon* opponentPokemon;
		bool trainersTurn;
		bool brawlEnded;
	};
}