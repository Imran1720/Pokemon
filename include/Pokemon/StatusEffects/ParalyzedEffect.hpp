#pragma once
#include "../../../include/Pokemon/IStatusEffect.hpp"

namespace N_Pokemon
{
	namespace N_StatusEffects
	{
		using namespace N_Pokemon;

		class ParalyzedEffect : public IStatusEffect
		{
		private :
			int turnsLeft;
			
		public:
			void ApplyEffect(Pokemon* target) override;

			string GetEffectName() override;

			bool TurnEndEffect(Pokemon* target) override;

			void ClearEffect(Pokemon* target) override;

		};
	}
}