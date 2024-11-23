#pragma once
#include "../../../include/Pokemon/StatusEffects/ParalyzedEffect.hpp"

namespace N_Pokemon
{
	namespace N_StatusEffects
	{

		ParalyzedEffect::ApplyEffect(Pokemon* target)
		{
			cout << target->GetPokemonName() << " is Paralyzed! It may not move!" << endl;

			turnsLeft = rand() % 3 + 1;
		}

		string ParalyzedEffect::GetEffectName()
		{
			return "!!Paralyzed!!";
		}

		bool ParalyzedEffect::TurnEndEffect(Pokemon* target)
		{
			if (turnsLeft <= 0)
			{
				ClearEffect(target);
				return true;
			}
			turnsLeft--;

			int paralysisChance = rand() % 4;

			if (paralysisChance == 0)
			{
				cout << target->GetPokemonName() << " is paralyzed! It can't move!" << endl;
				return false;
			}

			cout << target->GetPokemonName() << " shakes off the paralysis momentarily and can move" << endl;
			return true;
		}
	}
}